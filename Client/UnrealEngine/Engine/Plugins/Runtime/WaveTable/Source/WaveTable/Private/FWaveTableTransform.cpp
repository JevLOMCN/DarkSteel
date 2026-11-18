// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 11

// StaticStruct @ 14b2bb100

UScriptStruct * __cdecl FWaveTableTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWaveTableTransform.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UScriptStruct_FWaveTableTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableTransform,(UObject *)pUVar1,
                         L"WaveTableTransform");
  }
  return Z_Registration_Info_UScriptStruct_FWaveTableTransform.OuterSingleton;
}

// ~FWaveTableTransform @ 14b2bd8b0

void __thiscall FWaveTableTransform::~FWaveTableTransform(FWaveTableTransform *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->TableData).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurveCustom).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CurveCustom)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CurveCustom)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CurveCustom)._padding_ = 0;
  pvVar2 = (void *)(this->CurveCustom)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CurveCustom)._padding_);
  return;
}

// operator= @ 14b2bda30

FWaveTableTransform * __thiscall
FWaveTableTransform::operator=(FWaveTableTransform *this,FWaveTableTransform *param_1)

{
  UCurveFloat *pUVar1;
  
  this->Curve = param_1->Curve;
  this->Scalar = param_1->Scalar;
  FRichCurve::operator=(&this->CurveCustom,&param_1->CurveCustom);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->CurveShared).field0_0x0.DebugPtr, pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CurveShared).field0_0x0 = (param_1->CurveShared).field0_0x0;
  FWaveTableData::operator=(&this->TableData,&param_1->TableData);
  this->Duration = param_1->Duration;
  return this;
}

// Apply @ 14b2bdc40

void __thiscall FWaveTableTransform::Apply(FWaveTableTransform *this,float *param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68;
  undefined4 local_4c;
  undefined4 local_3c;
  FWaveTableData local_38;
  
  local_38.BitDepth = IEEE_Float;
  local_38.Data.ArrayNum = 4;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,&local_38.Data.AllocatorInstance,4,&local_38.Data.ArrayMax);
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  local_98 = (FScriptContainerElement *)0x0;
  iStack_90 = 0;
  *(float *)local_38.Data.AllocatorInstance.Data = *param_1;
  local_38.FinalValue = 0.0;
  if (local_38.BitDepth == IEEE_Float) {
    iStack_90 = (int)((ulonglong)(longlong)local_38.Data.ArrayNum >> 2);
    if (iStack_90 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uStack_8c = local_4c;
    local_98 = FVar2.Data;
  }
  if ((this->TableData).Data.ArrayNum == 0) {
    if (param_2) {
      SampleCurveBipolar(this,&local_38);
    }
    else {
      SampleCurveUnipolar(this,&local_38);
    }
  }
  else {
    iVar4 = FWaveTableData::GetNumSamples(&this->TableData);
    local_88 = (FScriptContainerElement *)0x0;
    iStack_80 = 0;
    *param_1 = (float)iVar4 * *param_1;
    if ((this->TableData).BitDepth == IEEE_Float) {
      local_88 = (this->TableData).Data.AllocatorInstance.Data;
      iStack_80 = (int)((ulonglong)(longlong)(this->TableData).Data.ArrayNum >> 2);
      if (iStack_80 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uStack_7c = local_3c;
    }
    local_78._12_4_ = uStack_8c;
    local_78.ArrayNum = iStack_90;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = iStack_80;
    local_78.DataPtr = (float *)local_98;
    local_68.DataPtr = (float *)local_88;
    WaveTable::FWaveTableSampler::Interpolate(&local_68,&local_78,Linear);
  }
  uVar5 = 0;
  if ((int)(iStack_90 - 1U) < iStack_90) {
    uVar5 = ~(iStack_90 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = *(float *)(local_98 + (longlong)iStack_90 * 4 + -4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// CacheCurve @ 14b2be050

void __thiscall FWaveTableTransform::CacheCurve(FWaveTableTransform *this)

{
  UCurveFloat *pUVar1;
  
  if ((this->Curve == Shared) &&
     (pUVar1 = (this->CurveShared).field0_0x0.DebugPtr, pUVar1 != (UCurveFloat *)0x0)) {
    this->Curve = Custom;
    FRichCurve::operator=(&this->CurveCustom,&pUVar1->FloatCurve);
    (this->CurveShared).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
    return;
  }
  (this->CurveShared).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  return;
}

// GetFinalValue @ 14b2bf510

/* WARNING: Removing unreachable block (ram,0x00014b2bf664) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf694) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf75b) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf78b) */

float __thiscall FWaveTableTransform::GetFinalValue(FWaveTableTransform *this)

{
  EWaveTableBitDepth EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  
  fVar8 = (this->TableData).FinalValue;
  if (__real_322bcc77 <
      (float)((uint)(fVar8 - __real_00800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    return fVar8;
  }
  iVar6 = (this->TableData).Data.ArrayNum;
  if (iVar6 == 0) {
    return 0.0;
  }
  EVar1 = (this->TableData).BitDepth;
  if (EVar1 == PCM_16) {
    pFVar2 = (this->TableData).Data.AllocatorInstance.Data;
    iVar6 = (int)((ulonglong)(longlong)iVar6 >> 1);
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
    uVar5 = iVar6 - 1;
    uVar7 = 0;
    if ((int)uVar5 < iVar6) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
    fVar8 = (float)(int)*(short *)(pFVar2 + (longlong)(int)uVar5 * 2) * __real_38000100;
  }
  else if (EVar1 == IEEE_Float) {
    pFVar2 = (this->TableData).Data.AllocatorInstance.Data;
    iVar6 = (int)((ulonglong)(longlong)iVar6 >> 2);
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
    uVar5 = iVar6 - 1;
    uVar7 = 0;
    if ((int)uVar5 < iVar6) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
    fVar8 = *(float *)(pFVar2 + (longlong)(int)uVar5 * 4);
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0x1b3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
    fVar8 = 0.0;
  }
  return fVar8;
}

// GetTableData @ 14b2bf980

FWaveTableData * __thiscall FWaveTableTransform::GetTableData(FWaveTableTransform *this)

{
  return &this->TableData;
}

// SampleCurveBipolar @ 14b2c19f0

void __thiscall
FWaveTableTransform::SampleCurveBipolar(FWaveTableTransform *this,FWaveTableData *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  FScriptContainerElement *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  undefined4 local_6c;
  
  if ((param_1->BitDepth != IEEE_Float) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutTableData.GetBitDepth() == EWaveTableBitDepth::IEEE_Float",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableTransform.cpp"
                         ,0x23,L"Curve sampling only supports IEEE 32-bit float bit depth"), bVar9))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_a8 = (FScriptContainerElement *)0x0;
  uStack_a0 = 0;
  if (param_1->BitDepth == IEEE_Float) {
    local_a8 = (param_1->Data).AllocatorInstance.Data;
    uStack_a0 = (uint)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 2);
    if (((int)uStack_a0 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_9c = local_6c;
  }
  fVar4 = __real_3f800000;
  uVar3._4_4_ = uStack_9c;
  uVar3._0_4_ = uStack_a0;
  local_98.DataPtr = (float *)local_a8;
  local_98._8_8_ = uVar3;
  Audio::ArrayClampInPlace(&local_98,0.0,__real_3f800000);
  fVar8 = __real_3ede5bd8;
  fVar7 = __real_40c90fdb;
  uVar6 = __xmm_80000000800000008000000080000000;
  fVar13 = __real_40490fdb;
  fVar1 = __real_3fc90fdb;
  fVar5 = __real_3f000000;
  fVar12 = __real_41200000;
  switch(this->Curve) {
  case Linear:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        *(float *)pFVar10 = (*(float *)pFVar10 + *(float *)pFVar10) - fVar4;
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      param_1->FinalValue = 1.0;
      break;
    }
    goto LAB_14b2c1dd5;
  case Linear_Inv:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        *(float *)pFVar10 = fVar4 - (*(float *)pFVar10 + *(float *)pFVar10);
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      param_1->FinalValue = -1.0;
      break;
    }
    goto LAB_14b2c1cea;
  case Exp:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        fVar1 = *(float *)pFVar10;
        fVar13 = powf(fVar12,(fVar1 - fVar4) * this->Scalar);
        *(float *)pFVar10 = fVar13 * fVar1 - fVar5;
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      param_1->FinalValue = 1.0;
      break;
    }
    goto LAB_14b2c1dd5;
  case Exp_Inverse:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        fVar1 = *(float *)pFVar10;
        fVar13 = powf(fVar12,(float)((uint)(fVar1 * this->Scalar) ^ uVar6));
        *(float *)pFVar10 = fVar13 * (fVar1 - fVar4) + fVar5;
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
LAB_14b2c1cea:
    param_1->FinalValue = -1.0;
    break;
  case Log:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        fVar12 = logf(*(float *)pFVar10);
        *(float *)pFVar10 = fVar12 * this->Scalar * fVar8 + fVar5;
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      param_1->FinalValue = 1.0;
      break;
    }
    goto LAB_14b2c1dd5;
  case Sin:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        fVar12 = sinf(*(float *)pFVar10 * fVar1);
        *(float *)pFVar10 = fVar12 - fVar5;
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      param_1->FinalValue = 1.0;
      break;
    }
    goto LAB_14b2c1dd5;
  case Sin_Full:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        fVar12 = sinf(*(float *)pFVar10 * fVar7);
        *(float *)pFVar10 = fVar12;
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    param_1->FinalValue = 0.0;
    break;
  case SCurve:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        fVar12 = sinf(*(float *)pFVar10 * fVar13 - fVar1);
        *(float *)pFVar10 = fVar12 * fVar5;
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
LAB_14b2c1dd5:
    param_1->FinalValue = 1.0;
    break;
  case Shared:
    if ((this->CurveShared).field0_0x0.DebugPtr != (UCurveFloat *)0x0) {
      if (0 < (int)uStack_a0) {
        uVar11 = (ulonglong)uStack_a0;
        pFVar10 = local_a8;
        do {
          fVar12 = FRichCurve::Eval(&((this->CurveShared).field0_0x0.DebugPtr)->FloatCurve,
                                    *(float *)pFVar10,0.0);
          *(float *)pFVar10 = fVar12;
          pFVar10 = pFVar10 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      fVar12 = FRichCurve::Eval(&((this->CurveShared).field0_0x0.DebugPtr)->FloatCurve,fVar4,0.0);
      param_1->FinalValue = fVar12;
    }
    break;
  case Custom:
    if (0 < (int)uStack_a0) {
      uVar11 = (ulonglong)uStack_a0;
      pFVar10 = local_a8;
      do {
        fVar12 = FRichCurve::Eval(&this->CurveCustom,*(float *)pFVar10,0.0);
        *(float *)pFVar10 = fVar12;
        pFVar10 = pFVar10 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    fVar12 = FRichCurve::Eval(&this->CurveCustom,fVar4,0.0);
    param_1->FinalValue = fVar12;
    break;
  case File:
    SampleWaveTableData(this,param_1);
  }
  local_88.DataPtr = (float *)local_a8;
  local_88._8_8_ = uVar3;
  Audio::ArrayClampInPlace(&local_88,__real_bf800000,fVar4);
  return;
}

// SampleCurveUnipolar @ 14b2c1eb0

void __thiscall
FWaveTableTransform::SampleCurveUnipolar(FWaveTableTransform *this,FWaveTableData *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  FScriptContainerElement *local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  undefined4 local_7c;
  
  if ((param_1->BitDepth != IEEE_Float) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutTableData.GetBitDepth() == EWaveTableBitDepth::IEEE_Float",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableTransform.cpp"
                         ,0xb7,L"Curve sampling only supports IEEE 32-bit float bit depth"), bVar8))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b8 = (FScriptContainerElement *)0x0;
  uStack_b0 = 0;
  if (param_1->BitDepth == IEEE_Float) {
    local_b8 = (param_1->Data).AllocatorInstance.Data;
    uStack_b0 = (uint)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 2);
    if (((int)uStack_b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_ac = local_7c;
  }
  fVar4 = __real_3f800000;
  uVar3._4_4_ = uStack_ac;
  uVar3._0_4_ = uStack_b0;
  local_a8.DataPtr = (float *)local_b8;
  local_a8._8_8_ = uVar3;
  Audio::ArrayClampInPlace(&local_a8,0.0,__real_3f800000);
  fVar7 = __real_3ede5bd8;
  fVar6 = __real_40c90fdb;
  uVar11 = __xmm_80000000800000008000000080000000;
  fVar5 = __real_40490fdb;
  fVar14 = __real_3fc90fdb;
  fVar1 = __real_3f000000;
  fVar13 = __real_41200000;
  switch(this->Curve) {
  case Linear:
    break;
  case Linear_Inv:
    uVar11 = 0;
    pFVar10 = local_b8;
    if (0 < (int)uStack_b0) {
      do {
        uVar9 = 0;
        if ((int)uVar11 < (int)uStack_b0) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = uVar11 + 1;
        *(float *)pFVar10 = fVar4 - *(float *)pFVar10;
        pFVar10 = pFVar10 + 4;
      } while ((int)uVar11 < (int)uStack_b0);
      param_1->FinalValue = 0.0;
      goto switchD_14b2c1fc4_default;
    }
    goto LAB_14b2c22c4;
  case Exp:
    if (0 < (int)uStack_b0) {
      uVar12 = (ulonglong)uStack_b0;
      pFVar10 = local_b8;
      do {
        fVar1 = *(float *)pFVar10;
        fVar14 = powf(fVar13,(fVar1 - fVar4) * this->Scalar);
        *(float *)pFVar10 = fVar14 * fVar1;
        pFVar10 = pFVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      param_1->FinalValue = 1.0;
      goto switchD_14b2c1fc4_default;
    }
    break;
  case Exp_Inverse:
    if (0 < (int)uStack_b0) {
      uVar12 = (ulonglong)uStack_b0;
      pFVar10 = local_b8;
      do {
        fVar1 = *(float *)pFVar10;
        fVar14 = powf(fVar13,(float)((uint)(fVar1 * this->Scalar) ^ uVar11));
        *(float *)pFVar10 = fVar14 * (fVar1 - fVar4) + fVar4;
        pFVar10 = pFVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      param_1->FinalValue = 0.0;
      goto switchD_14b2c1fc4_default;
    }
    goto LAB_14b2c22c4;
  case Log:
    if (0 < (int)uStack_b0) {
      uVar12 = (ulonglong)uStack_b0;
      pFVar10 = local_b8;
      do {
        fVar13 = logf(*(float *)pFVar10);
        *(float *)pFVar10 = fVar13 * this->Scalar * fVar7 + fVar4;
        pFVar10 = pFVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      param_1->FinalValue = 1.0;
      goto switchD_14b2c1fc4_default;
    }
    break;
  case Sin:
    if (0 < (int)uStack_b0) {
      uVar12 = (ulonglong)uStack_b0;
      pFVar10 = local_b8;
      do {
        fVar13 = sinf(*(float *)pFVar10 * fVar14);
        *(float *)pFVar10 = fVar13;
        pFVar10 = pFVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      param_1->FinalValue = 1.0;
      goto switchD_14b2c1fc4_default;
    }
    break;
  case Sin_Full:
    if (0 < (int)uStack_b0) {
      uVar12 = (ulonglong)uStack_b0;
      pFVar10 = local_b8;
      do {
        fVar13 = sinf(*(float *)pFVar10 * fVar6);
        *(float *)pFVar10 = (fVar13 + fVar4) * fVar1;
        pFVar10 = pFVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
LAB_14b2c22c4:
    param_1->FinalValue = 0.0;
    goto switchD_14b2c1fc4_default;
  case SCurve:
    if (0 < (int)uStack_b0) {
      uVar12 = (ulonglong)uStack_b0;
      pFVar10 = local_b8;
      do {
        fVar13 = sinf(*(float *)pFVar10 * fVar5 - fVar14);
        *(float *)pFVar10 = (fVar13 + fVar4) * fVar1;
        pFVar10 = pFVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case Shared:
    if ((this->CurveShared).field0_0x0.DebugPtr != (UCurveFloat *)0x0) {
      if (0 < (int)uStack_b0) {
        uVar12 = (ulonglong)uStack_b0;
        pFVar10 = local_b8;
        do {
          fVar13 = FRichCurve::Eval(&((this->CurveShared).field0_0x0.DebugPtr)->FloatCurve,
                                    *(float *)pFVar10,0.0);
          *(float *)pFVar10 = fVar13;
          pFVar10 = pFVar10 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      fVar13 = FRichCurve::Eval(&((this->CurveShared).field0_0x0.DebugPtr)->FloatCurve,fVar4,0.0);
      param_1->FinalValue = fVar13;
    }
    goto switchD_14b2c1fc4_default;
  case Custom:
    if (0 < (int)uStack_b0) {
      uVar12 = (ulonglong)uStack_b0;
      pFVar10 = local_b8;
      do {
        fVar13 = FRichCurve::Eval(&this->CurveCustom,*(float *)pFVar10,0.0);
        *(float *)pFVar10 = fVar13;
        pFVar10 = pFVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    fVar13 = FRichCurve::Eval(&this->CurveCustom,fVar4,0.0);
    param_1->FinalValue = fVar13;
    goto switchD_14b2c1fc4_default;
  case File:
    SampleWaveTableData(this,param_1);
  default:
    goto switchD_14b2c1fc4_default;
  }
  param_1->FinalValue = 1.0;
switchD_14b2c1fc4_default:
  local_98.DataPtr = (float *)local_b8;
  local_98._8_8_ = uVar3;
  Audio::ArrayClampInPlace(&local_98,0.0,fVar4);
  return;
}

// SampleWaveTableData @ 14b2c2370

void __thiscall
FWaveTableTransform::SampleWaveTableData(FWaveTableTransform *this,FWaveTableData *param_1)

{
  EWaveTableBitDepth EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<short_const_,int> local_78;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  
  if ((param_1->BitDepth != IEEE_Float) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutTableData.GetBitDepth() == EWaveTableBitDepth::IEEE_Float",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableTransform.cpp"
                         ,0x144,L"WaveTable resampling only supports IEEE 32-bit float bit depth"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_c8 = (FScriptContainerElement *)0x0;
  iStack_c0 = 0;
  if (param_1->BitDepth == IEEE_Float) {
    local_c8 = (param_1->Data).AllocatorInstance.Data;
    iStack_c0 = (int)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 2);
    if ((iStack_c0 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_bc = local_3c;
  }
  iVar5 = (this->TableData).Data.ArrayNum;
  if (iVar5 == 0) {
    local_b8._12_4_ = uStack_bc;
    local_b8.ArrayNum = iStack_c0;
    local_b8.DataPtr = (float *)local_c8;
    Audio::ArraySetToConstantInplace(&local_b8,0.0);
    param_1->FinalValue = 0.0;
  }
  else {
    EVar1 = (this->TableData).BitDepth;
    if (EVar1 == PCM_16) {
      pFVar2 = (this->TableData).Data.AllocatorInstance.Data;
      iVar5 = (int)((ulonglong)(longlong)iVar5 >> 1);
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_78._12_4_ = local_4c;
      local_78.ArrayNum = iVar5;
      local_b8._12_4_ = uStack_bc;
      local_b8.ArrayNum = iStack_c0;
      local_88.ArrayNum = iStack_c0;
      local_88._12_4_ = uStack_bc;
      local_b8.DataPtr = (float *)local_c8;
      local_88.DataPtr = (float *)local_c8;
      local_78.DataPtr = (short *)pFVar2;
      WaveTable::UtilitiesPrivate::MaxValueIndexInterpolator<short>
                (&local_78,&local_88,__real_38000100);
    }
    else if (EVar1 == IEEE_Float) {
      pFVar2 = (this->TableData).Data.AllocatorInstance.Data;
      iVar5 = (int)((ulonglong)(longlong)iVar5 >> 2);
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_a8._12_4_ = uStack_bc;
      local_a8.ArrayNum = iStack_c0;
      local_b8._12_4_ = local_5c;
      local_b8.ArrayNum = iVar5;
      local_98.ArrayNum = iVar5;
      local_98._12_4_ = local_5c;
      local_b8.DataPtr = (float *)pFVar2;
      local_a8.DataPtr = (float *)local_c8;
      local_98.DataPtr = (float *)pFVar2;
      WaveTable::UtilitiesPrivate::MaxValueIndexInterpolator<float>
                (&local_98,&local_a8,__real_3f800000);
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                         ,0x96,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar6 = (this->TableData).FinalValue;
    if ((float)((uint)(fVar6 - __real_00800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) {
      fVar6 = FWaveTableData::GetLastValue(&this->TableData);
    }
    param_1->FinalValue = fVar6;
  }
  return;
}

// SetFinalValue @ 14b2c2b80

void __thiscall FWaveTableTransform::SetFinalValue(FWaveTableTransform *this,float param_1)

{
  return;
}

