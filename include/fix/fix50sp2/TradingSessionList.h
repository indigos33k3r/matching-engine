// Copyright (c) 2001-2010 quickfixengine.org  All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in
//    the documentation and/or other materials provided with the
//    distribution.
//
// 3. The end-user documentation included with the redistribution,
//    if any, must include the following acknowledgment:
//      "This product includes software developed by
//       quickfixengine.org (http://www.quickfixengine.org/)."
//   Alternately, this acknowledgment may appear in the software itself,
//   if and wherever such third-party acknowledgments normally appear.
//
// 4. The names "QuickFIX" and "quickfixengine.org" must
//    not be used to endorse or promote products derived from this
//    software without prior written permission. For written
//    permission, please contact ask@quickfixengine.org
//
// 5. Products derived from this software may not be called "QuickFIX",
//    nor may "QuickFIX" appear in their name, without prior written
//    permission of quickfixengine.org
//
// THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
// WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.  IN NO EVENT SHALL QUICKFIXENGINE.ORG OR
// ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
// USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
// OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.

#ifndef FIX50SP2_TRADINGSESSIONLIST_H
#define FIX50SP2_TRADINGSESSIONLIST_H

#include "Message.h"

namespace FIX50SP2
{

  class TradingSessionList : public Message
  {
  public:
    TradingSessionList() : Message(MsgType()) {}
    TradingSessionList(const FIX::Message& m) : Message(m) {}
    TradingSessionList(const Message& m) : Message(m) {}
    TradingSessionList(const TradingSessionList& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BJ"); }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::NoTradingSessions);
    class NoTradingSessions: public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386,336,FIX::message_order(336,625,207,338,339,325,340,567,341,342,343,344,345,387,58,354,355,1301,1300,1326,60,1327,0)) {}
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::TradSesMethod);
      FIELD_SET(*this, FIX::TradSesMode);
      FIELD_SET(*this, FIX::UnsolicitedIndicator);
      FIELD_SET(*this, FIX::TradSesStatus);
      FIELD_SET(*this, FIX::TradSesStatusRejReason);
      FIELD_SET(*this, FIX::TradSesStartTime);
      FIELD_SET(*this, FIX::TradSesOpenTime);
      FIELD_SET(*this, FIX::TradSesPreCloseTime);
      FIELD_SET(*this, FIX::TradSesCloseTime);
      FIELD_SET(*this, FIX::TradSesEndTime);
      FIELD_SET(*this, FIX::TotalVolumeTraded);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
      FIELD_SET(*this, FIX::MarketID);
      FIELD_SET(*this, FIX::MarketSegmentID);
      FIELD_SET(*this, FIX::TradingSessionDesc);
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::TradSesUpdateAction);
    };
    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
  };

}

#endif