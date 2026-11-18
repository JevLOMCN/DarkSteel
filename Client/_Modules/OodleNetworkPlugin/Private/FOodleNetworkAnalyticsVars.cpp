// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 3

// FOodleNetworkAnalyticsVars @ 14e293600

FOodleNetworkAnalyticsVars * __thiscall
FOodleNetworkAnalyticsVars::FOodleNetworkAnalyticsVars(FOodleNetworkAnalyticsVars *this)

{
  this->_padding_ = (longlong)&___7FOodleNetworkAnalyticsVars__6B_;
  this->InCompressedNum = 0;
  this->InNotCompressedNum = 0;
  this->InCompressedWithOverheadLengthTotal = 0;
  this->InCompressedLengthTotal = 0;
  this->InDecompressedLengthTotal = 0;
  this->InNotCompressedLengthTotal = 0;
  this->OutCompressedNum = 0;
  this->OutNotCompressedFailedNum = 0;
  this->OutNotCompressedFailedAckOnlyNum = 0;
  this->OutNotCompressedFailedKeepAliveNum = 0;
  this->OutNotCompressedBoundedNum = 0;
  this->OutNotCompressedFlaggedNum = 0;
  this->OutNotCompressedClientDisabledNum = 0;
  this->OutNotCompressedTooSmallNum = 0;
  this->OutCompressedWithOverheadLengthTotal = 0;
  this->OutCompressedLengthTotal = 0;
  this->OutBeforeCompressedLengthTotal = 0;
  this->OutNotCompressedFailedLengthTotal = 0;
  this->OutNotCompressedSkippedLengthTotal = 0;
  this->NumOodleNetworkHandlers = 0;
  this->NumOodleNetworkHandlersCompressionEnabled = 0;
  return this;
}

// operator== @ 14e294840

bool __thiscall
FOodleNetworkAnalyticsVars::operator==
          (FOodleNetworkAnalyticsVars *this,FOodleNetworkAnalyticsVars *param_1)

{
  if (((((((param_1->InCompressedNum == this->InCompressedNum) &&
          (param_1->InNotCompressedNum == this->InNotCompressedNum)) &&
         (param_1->InCompressedWithOverheadLengthTotal == this->InCompressedWithOverheadLengthTotal)
         ) && (((param_1->InCompressedLengthTotal == this->InCompressedLengthTotal &&
                (param_1->InDecompressedLengthTotal == this->InDecompressedLengthTotal)) &&
               ((param_1->InNotCompressedLengthTotal == this->InNotCompressedLengthTotal &&
                ((param_1->OutCompressedNum == this->OutCompressedNum &&
                 (param_1->OutNotCompressedFailedNum == this->OutNotCompressedFailedNum)))))))) &&
       ((param_1->OutNotCompressedFailedAckOnlyNum == this->OutNotCompressedFailedAckOnlyNum &&
        (((param_1->OutNotCompressedFailedKeepAliveNum == this->OutNotCompressedFailedKeepAliveNum
          && (param_1->OutNotCompressedBoundedNum == this->OutNotCompressedBoundedNum)) &&
         (param_1->OutNotCompressedFlaggedNum == this->OutNotCompressedFlaggedNum)))))) &&
      (((param_1->OutNotCompressedClientDisabledNum == this->OutNotCompressedClientDisabledNum &&
        (param_1->OutNotCompressedTooSmallNum == this->OutNotCompressedTooSmallNum)) &&
       (((param_1->OutCompressedWithOverheadLengthTotal ==
          this->OutCompressedWithOverheadLengthTotal &&
         ((param_1->OutCompressedLengthTotal == this->OutCompressedLengthTotal &&
          (param_1->OutBeforeCompressedLengthTotal == this->OutBeforeCompressedLengthTotal)))) &&
        (param_1->OutNotCompressedFailedLengthTotal == this->OutNotCompressedFailedLengthTotal))))))
     && (((param_1->OutNotCompressedSkippedLengthTotal == this->OutNotCompressedSkippedLengthTotal
          && (param_1->NumOodleNetworkHandlers == this->NumOodleNetworkHandlers)) &&
         (param_1->NumOodleNetworkHandlersCompressionEnabled ==
          this->NumOodleNetworkHandlersCompressionEnabled)))) {
    return true;
  }
  return false;
}

// CommitAnalytics @ 14e2951a0

void __thiscall
FOodleNetworkAnalyticsVars::CommitAnalytics
          (FOodleNetworkAnalyticsVars *this,FOodleNetworkAnalyticsVars *param_1)

{
  param_1->InCompressedNum = param_1->InCompressedNum + this->InCompressedNum;
  param_1->InNotCompressedNum = param_1->InNotCompressedNum + this->InNotCompressedNum;
  param_1->InCompressedWithOverheadLengthTotal =
       param_1->InCompressedWithOverheadLengthTotal + this->InCompressedWithOverheadLengthTotal;
  param_1->InCompressedLengthTotal =
       param_1->InCompressedLengthTotal + this->InCompressedLengthTotal;
  param_1->InDecompressedLengthTotal =
       param_1->InDecompressedLengthTotal + this->InDecompressedLengthTotal;
  param_1->InNotCompressedLengthTotal =
       param_1->InNotCompressedLengthTotal + this->InNotCompressedLengthTotal;
  param_1->OutCompressedNum = param_1->OutCompressedNum + this->OutCompressedNum;
  param_1->OutNotCompressedFailedNum =
       param_1->OutNotCompressedFailedNum + this->OutNotCompressedFailedNum;
  param_1->OutNotCompressedFailedAckOnlyNum =
       param_1->OutNotCompressedFailedAckOnlyNum + this->OutNotCompressedFailedAckOnlyNum;
  param_1->OutNotCompressedFailedKeepAliveNum =
       param_1->OutNotCompressedFailedKeepAliveNum + this->OutNotCompressedFailedKeepAliveNum;
  param_1->OutNotCompressedBoundedNum =
       param_1->OutNotCompressedBoundedNum + this->OutNotCompressedBoundedNum;
  param_1->OutNotCompressedFlaggedNum =
       param_1->OutNotCompressedFlaggedNum + this->OutNotCompressedFlaggedNum;
  param_1->OutNotCompressedClientDisabledNum =
       param_1->OutNotCompressedClientDisabledNum + this->OutNotCompressedClientDisabledNum;
  param_1->OutNotCompressedTooSmallNum = this->OutNotCompressedTooSmallNum;
  param_1->OutCompressedWithOverheadLengthTotal =
       param_1->OutCompressedWithOverheadLengthTotal + this->OutCompressedWithOverheadLengthTotal;
  param_1->OutCompressedLengthTotal =
       param_1->OutCompressedLengthTotal + this->OutCompressedLengthTotal;
  param_1->OutBeforeCompressedLengthTotal =
       param_1->OutBeforeCompressedLengthTotal + this->OutBeforeCompressedLengthTotal;
  param_1->OutNotCompressedFailedLengthTotal =
       param_1->OutNotCompressedFailedLengthTotal + this->OutNotCompressedFailedLengthTotal;
  param_1->OutNotCompressedSkippedLengthTotal =
       param_1->OutNotCompressedSkippedLengthTotal + this->OutNotCompressedSkippedLengthTotal;
  param_1->NumOodleNetworkHandlers =
       param_1->NumOodleNetworkHandlers + this->NumOodleNetworkHandlers;
  param_1->NumOodleNetworkHandlersCompressionEnabled =
       param_1->NumOodleNetworkHandlersCompressionEnabled +
       this->NumOodleNetworkHandlersCompressionEnabled;
  return;
}

