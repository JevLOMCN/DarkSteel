// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FAnimCurveBufferAccess @ 147431610

FAnimCurveBufferAccess * __thiscall
FAnimCurveBufferAccess::FAnimCurveBufferAccess
          (FAnimCurveBufferAccess *this,UAnimSequenceBase *param_1,ushort param_2)

{
  this->NumSamples = -1;
  this->SampleRate = 0.0;
  this->CompressedBuffer = (float *)0x0;
  this->RawCurve = (FFloatCurve *)0x0;
  this->bUseCompressedData = false;
  return this;
}

// FAnimCurveBufferAccess @ 147431630

/* WARNING: Enum "Type": Some values do not have unique names */

FAnimCurveBufferAccess * __thiscall
FAnimCurveBufferAccess::FAnimCurveBufferAccess
          (FAnimCurveBufferAccess *this,UAnimSequenceBase *param_1,FName param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  FAnimCurveBufferAccess *pFVar9;
  FRawCurveTracks *this_00;
  FFloatCurve *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong local_res8;
  FString local_48;
  
  uVar12 = 0;
  this->NumSamples = -1;
  this->SampleRate = 0.0;
  this->CompressedBuffer = (float *)0x0;
  this->RawCurve = (FFloatCurve *)0x0;
  this->bUseCompressedData = false;
  cVar5 = (**(code **)(param_1->_padding_ + 0x308))(param_1,param_2,0);
  if (cVar5 == '\0') {
    return this;
  }
  pUVar8 = Z_Construct_UClass_UAnimSequence_NoRegister();
  iVar1 = (int)pUVar8->_padding_;
  if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) && (param_1 != (UAnimSequenceBase *)0x0)) &&
     (bVar6 = UAnimSequence::IsCurveCompressedDataValid((UAnimSequence *)param_1), bVar6)) {
    UAnimSequence::GetCompressedData((UAnimSequence *)param_1);
    if (*(longlong *)(local_res8 + 0x70) != 0) {
      pUVar8 = UAnimCurveCompressionCodec_UniformIndexable::StaticClass();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)(local_res8 + 0x70),pUVar8);
      if ((bVar6) && (*(longlong *)(local_res8 + 0x70) != 0)) {
        iVar1 = *(int *)(local_res8 + 0x28);
        if (iVar1 == 0) {
          this->bUseCompressedData = false;
        }
        else {
          piVar3 = *(int **)(local_res8 + 0x50);
          iVar2 = *piVar3;
          this->NumSamples = iVar2;
          if (iVar2 == 0) {
            this->bUseCompressedData = false;
          }
          else {
            this->SampleRate = (float)piVar3[1];
            uVar13 = uVar12;
            uVar14 = uVar12;
            if (0 < iVar1) {
              do {
                uVar11 = (uint)uVar12;
                uVar7 = 0;
                if ((int)uVar11 < *(int *)(local_res8 + 0x28)) {
                  uVar7 = ~uVar11 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pFVar9 = (FAnimCurveBufferAccess *)(*pcVar4)();
                  return pFVar9;
                }
                if (*(FName *)(uVar13 + *(longlong *)(local_res8 + 0x20)) == param_2) {
                  bVar6 = true;
                  this->CompressedBuffer =
                       (float *)(piVar3 + (longlong)(int)(uVar11 * this->NumSamples) + 2);
                  goto LAB_1474317c4;
                }
                uVar12 = (ulonglong)(uVar11 + 1);
                uVar14 = uVar14 + 1;
                uVar13 = uVar13 + 0xc;
              } while ((longlong)uVar14 < (longlong)iVar1);
            }
            bVar6 = false;
LAB_1474317c4:
            this->bUseCompressedData = bVar6;
          }
        }
        goto LAB_14743184e;
      }
    }
    if (2 < (byte)LogAnimation._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14743184e:
  if (this->CompressedBuffer == (float *)0x0) {
    this_00 = (FRawCurveTracks *)(**(code **)(param_1->_padding_ + 0x300))(param_1);
    pFVar10 = (FFloatCurve *)FRawCurveTracks::GetCurveData(this_00,param_2,RCT_Float);
    this->RawCurve = pFVar10;
    if (pFVar10 != (FFloatCurve *)0x0) {
      this->NumSamples = (pFVar10->FloatCurve).Keys.ArrayNum;
    }
  }
  return this;
}

// GetTime @ 147464a10

float __thiscall FAnimCurveBufferAccess::GetTime(FAnimCurveBufferAccess *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  float fVar5;
  
  if ((this->CompressedBuffer == (float *)0x0) && (this->RawCurve == (FFloatCurve *)0x0)) {
    return 0.0;
  }
  if ((param_1 < 0) || (this->NumSamples < param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SampleIndex >= 0 && SampleIndex <= NumSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCurveCompressionCodec_UniformIndexable.cpp"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  if (this->bUseCompressedData != false) {
    return (float)param_1 / this->SampleRate;
  }
  pTVar3 = FRichCurve::GetConstRefOfKeys(&this->RawCurve->FloatCurve);
  uVar4 = 0;
  if (param_1 < pTVar3->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  return *(float *)((pTVar3->AllocatorInstance).Data + (longlong)param_1 * 0x1c + 4);
}

// GetValue @ 147464cc0

float __thiscall FAnimCurveBufferAccess::GetValue(FAnimCurveBufferAccess *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  float fVar5;
  
  if ((this->CompressedBuffer == (float *)0x0) && (this->RawCurve == (FFloatCurve *)0x0)) {
    return 0.0;
  }
  if ((param_1 < 0) || (this->NumSamples < param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SampleIndex >= 0 && SampleIndex <= NumSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCurveCompressionCodec_UniformIndexable.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  if (this->bUseCompressedData != false) {
    return this->CompressedBuffer[param_1];
  }
  pTVar3 = FRichCurve::GetConstRefOfKeys(&this->RawCurve->FloatCurve);
  uVar4 = 0;
  if (param_1 < pTVar3->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  return *(float *)((pTVar3->AllocatorInstance).Data + (longlong)param_1 * 0x1c + 8);
}

