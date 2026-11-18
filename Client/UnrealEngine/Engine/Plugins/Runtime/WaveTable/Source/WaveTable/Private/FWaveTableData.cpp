// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 26

// StaticStruct @ 14b2bab30

UScriptStruct * __cdecl FWaveTableData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWaveTableData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UScriptStruct_FWaveTableData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableData,(UObject *)pUVar1,L"WaveTableData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FWaveTableData.OuterSingleton;
}

// FWaveTableData @ 14b2bd4c0

FWaveTableData * __thiscall
FWaveTableData::FWaveTableData
          (FWaveTableData *this,TArrayView<short_const_,int> *param_1,float param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  short *_Src;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FWaveTableData *pFVar6;
  
  pTVar1 = &this->Data;
  iVar4 = param_1->ArrayNum * 2;
  _Src = param_1->DataPtr;
  this->BitDepth = PCM_16;
  if (iVar4 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FWaveTableData *)(*pcVar3)();
      return pFVar6;
    }
  }
  piVar2 = &(this->Data).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4);
  }
  this->FinalValue = param_2;
  return this;
}

// FWaveTableData @ 14b2bd590

FWaveTableData * __thiscall
FWaveTableData::FWaveTableData
          (FWaveTableData *this,TArrayView<float_const_,int> *param_1,float param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  float *_Src;
  code *pcVar4;
  bool bVar5;
  FWaveTableData *pFVar6;
  int iVar7;
  
  uVar3 = param_1->ArrayNum;
  pTVar1 = &this->Data;
  _Src = param_1->DataPtr;
  iVar7 = uVar3 << 2;
  this->BitDepth = IEEE_Float;
  if ((int)(uVar3 << 2) < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FWaveTableData *)(*pcVar4)();
      return pFVar6;
    }
  }
  piVar2 = &(this->Data).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = iVar7;
  if ((uVar3 & 0x3fffffff) == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar7);
  }
  this->FinalValue = param_2;
  return this;
}

// FWaveTableData @ 14b2bd670

FWaveTableData * __thiscall
FWaveTableData::FWaveTableData(FWaveTableData *this,EWaveTableBitDepth param_1)

{
  this->BitDepth = param_1;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  this->FinalValue = 1.1754944e-38;
  return this;
}

// operator= @ 14b2bd980

FWaveTableData * __thiscall FWaveTableData::operator=(FWaveTableData *this,FWaveTableData *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  this->BitDepth = param_1->BitDepth;
  pTVar1 = &this->Data;
  if (pTVar1 != &param_1->Data) {
    iVar3 = (this->Data).ArrayMax;
    piVar2 = &(this->Data).ArrayMax;
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar4 = (param_1->Data).ArrayNum;
    (this->Data).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4);
      }
    }
  }
  this->FinalValue = param_1->FinalValue;
  return this;
}

// ArrayMixIn @ 14b2bde90

void __thiscall
FWaveTableData::ArrayMixIn(FWaveTableData *this,TArrayView<float,int> *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<short_const_,int> local_48;
  undefined4 local_2c;
  undefined4 local_1c;
  
  iVar4 = GetNumSamples(this);
  if ((param_1->ArrayNum != iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutFloatBuffer.Num() == GetNumSamples()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                         ,0x9d,L"Float buffer size must match that of WaveTableData"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->BitDepth == PCM_16) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    iVar4 = (int)((ulonglong)(longlong)(this->Data).ArrayNum >> 1);
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_58.DataPtr = param_1->DataPtr;
    local_58.ArrayNum = param_1->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_48._12_4_ = local_1c;
    local_48.ArrayNum = iVar4;
    local_48.DataPtr = (short *)pFVar1;
    Audio::ArrayMixIn(&local_48,&local_58,param_2);
  }
  else if (this->BitDepth == IEEE_Float) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    iVar4 = (int)((ulonglong)(longlong)(this->Data).ArrayNum >> 2);
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_78.DataPtr = param_1->DataPtr;
    local_78.ArrayNum = param_1->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_68._12_4_ = local_2c;
    local_68.ArrayNum = iVar4;
    local_68.DataPtr = (float *)pFVar1;
    Audio::ArrayMixIn(&local_68,&local_78,param_2);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0xb3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Empty @ 14b2beec0

void __thiscall FWaveTableData::Empty(FWaveTableData *this)

{
  int *piVar1;
  
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Data).AllocatorInstance,0,piVar1);
  }
  this->FinalValue = 1.1754944e-38;
  return;
}

// GetBitDepth @ 14b2bf200

EWaveTableBitDepth __thiscall FWaveTableData::GetBitDepth(FWaveTableData *this)

{
  return this->BitDepth;
}

// GetDataView @ 14b2bf230

bool __thiscall FWaveTableData::GetDataView(FWaveTableData *this,TArrayView<short,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uStack_c;
  
  if (this->BitDepth != PCM_16) {
    return false;
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  iVar5 = (int)((ulonglong)(longlong)(this->Data).ArrayNum >> 1);
  if (iVar5 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  param_1->DataPtr = (short *)pFVar1;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar5);
  return true;
}

// GetDataView @ 14b2bf2a0

bool __thiscall FWaveTableData::GetDataView(FWaveTableData *this,TArrayView<float,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uStack_c;
  
  if (this->BitDepth != IEEE_Float) {
    return false;
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  iVar5 = (int)((ulonglong)(longlong)(this->Data).ArrayNum >> 2);
  if (iVar5 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  param_1->DataPtr = (float *)pFVar1;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar5);
  return true;
}

// GetDataView @ 14b2bf310

bool __thiscall
FWaveTableData::GetDataView(FWaveTableData *this,TArrayView<short_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uStack_c;
  
  if (this->BitDepth != PCM_16) {
    return false;
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  iVar5 = (int)((ulonglong)(longlong)(this->Data).ArrayNum >> 1);
  if (iVar5 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  param_1->DataPtr = (short *)pFVar1;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar5);
  return true;
}

// GetDataView @ 14b2bf380

bool __thiscall
FWaveTableData::GetDataView(FWaveTableData *this,TArrayView<float_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uStack_c;
  
  if (this->BitDepth != IEEE_Float) {
    return false;
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  iVar5 = (int)((ulonglong)(longlong)(this->Data).ArrayNum >> 2);
  if (iVar5 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  param_1->DataPtr = (float *)pFVar1;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar5);
  return true;
}

// GetFinalValue @ 14b2bf4e0

/* WARNING: Removing unreachable block (ram,0x00014b2bf664) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf694) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf75b) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf78b) */

float __thiscall FWaveTableData::GetFinalValue(FWaveTableData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  if (__real_322bcc77 <
      (float)((uint)(this->FinalValue - __real_00800000) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    return this->FinalValue;
  }
  iVar5 = (this->Data).ArrayNum;
  if (iVar5 == 0) {
    return 0.0;
  }
  if (this->BitDepth == PCM_16) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    iVar5 = (int)((ulonglong)(longlong)iVar5 >> 1);
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    uVar4 = iVar5 - 1;
    uVar6 = 0;
    if ((int)uVar4 < iVar5) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    fVar7 = (float)(int)*(short *)(pFVar1 + (longlong)(int)uVar4 * 2) * __real_38000100;
  }
  else if (this->BitDepth == IEEE_Float) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    iVar5 = (int)((ulonglong)(longlong)iVar5 >> 2);
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    uVar4 = iVar5 - 1;
    uVar6 = 0;
    if ((int)uVar4 < iVar5) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    fVar7 = *(float *)(pFVar1 + (longlong)(int)uVar4 * 4);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0x1b3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    fVar7 = 0.0;
  }
  return fVar7;
}

// GetLastValue @ 14b2bf560

/* WARNING: Removing unreachable block (ram,0x00014b2bf664) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf694) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf75b) */
/* WARNING: Removing unreachable block (ram,0x00014b2bf78b) */

float __thiscall FWaveTableData::GetLastValue(FWaveTableData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  iVar5 = (this->Data).ArrayNum;
  if (iVar5 == 0) {
    return 0.0;
  }
  if (this->BitDepth == PCM_16) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    iVar5 = (int)((ulonglong)(longlong)iVar5 >> 1);
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    uVar4 = iVar5 - 1;
    uVar6 = 0;
    if ((int)uVar4 < iVar5) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    fVar7 = (float)(int)*(short *)(pFVar1 + (longlong)(int)uVar4 * 2) * __real_38000100;
  }
  else if (this->BitDepth == IEEE_Float) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    iVar5 = (int)((ulonglong)(longlong)iVar5 >> 2);
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    uVar4 = iVar5 - 1;
    uVar6 = 0;
    if ((int)uVar4 < iVar5) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    fVar7 = *(float *)(pFVar1 + (longlong)(int)uVar4 * 4);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0x1b3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    fVar7 = 0.0;
  }
  return fVar7;
}

// GetNumSamples @ 14b2bf7a0

int __thiscall FWaveTableData::GetNumSamples(FWaveTableData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->BitDepth == PCM_16) {
    return (this->Data).ArrayNum / 2;
  }
  if (this->BitDepth != IEEE_Float) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0xcb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    return (this->Data).ArrayNum / 1;
  }
  return (this->Data).ArrayNum / 4;
}

// GetRawData @ 14b2bf8d0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FWaveTableData::GetRawData(FWaveTableData *this)

{
  return &this->Data;
}

// IsEmpty @ 14b2c0110

bool __thiscall FWaveTableData::IsEmpty(FWaveTableData *this)

{
  return (this->Data).ArrayNum == 0;
}

// Resample @ 14b2c1710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FWaveTableData::Resample(FWaveTableData *this,int param_1,int param_2,EInterpolationMode param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  EWaveTableBitDepth EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FWaveTableData local_108;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  FWaveTableSampler local_a8;
  undefined4 local_64;
  EInterpolationMode local_60;
  uint uStack_5c;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  if (param_1 == param_2) {
    bVar7 = false;
  }
  else {
    EVar2 = this->BitDepth;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    local_108.BitDepth = IEEE_Float;
    local_108.FinalValue = 1.1754944e-38;
    iVar9 = GetNumSamples(this);
    Zero(&local_108,(iVar9 * param_1) / param_2);
    FVar5.Data = local_108.Data.AllocatorInstance.Data;
    local_e8 = (FScriptContainerElement *)0x0;
    iStack_e0 = 0;
    if (local_108.BitDepth == IEEE_Float) {
      iVar9 = (int)((ulonglong)(longlong)local_108.Data.ArrayNum >> 2);
      if (iVar9 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
      }
      uStack_dc = local_64;
      local_e8 = FVar5.Data;
      iStack_e0 = iVar9;
    }
    uVar6 = uStack_5c;
    uStack_5c = uStack_5c & 0xffffff00;
    local_a8.Settings._16_8_ = CONCAT44(uVar6,param_3) & 0xffffff00ffffffff;
    local_58._12_4_ = uStack_dc;
    local_58.ArrayNum = iStack_e0;
    local_58.DataPtr = (float *)local_e8;
    local_d8 = 0;
    uStack_d0 = 0;
    local_48._8_8_ = (ulonglong)uStack_cc << 0x20;
    local_48.DataPtr = (float *)0x0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_38._8_8_ = (ulonglong)uStack_bc << 0x20;
    local_b8 = 0;
    uStack_b0 = 0;
    local_28._8_8_ = (ulonglong)uStack_ac << 0x20;
    local_38.DataPtr = (float *)0x0;
    local_a8.LastIndex = 0.0;
    local_a8.OneShotData.LastOutputIndex = -1.0;
    local_a8.OneShotData.IndexFinished = -1;
    local_a8.PhaseModScratch.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.PhaseModScratch.ArrayNum = 0;
    local_a8.PhaseModScratch.ArrayMax = 0;
    local_a8.Settings.Amplitude = ___xmm_000000003f800000000000003f800000;
    local_a8.Settings.Offset = _UNK_15076ae24;
    local_a8.Settings.Freq = _UNK_15076ae28;
    local_a8.Settings.Phase = _UNK_15076ae2c;
    local_28.DataPtr = (float *)0x0;
    local_60 = param_3;
    WaveTable::FWaveTableSampler::Process(&local_a8,this,&local_28,&local_38,&local_48,&local_58);
    if (local_a8.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.PhaseModScratch.AllocatorInstance.Data);
    }
    pTVar1 = &this->Data;
    this->BitDepth = local_108.BitDepth;
    if (pTVar1 != &local_108.Data) {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar1->AllocatorInstance).Data = local_108.Data.AllocatorInstance.Data;
      (this->Data).ArrayNum = local_108.Data.ArrayNum;
      (this->Data).ArrayMax = local_108.Data.ArrayMax;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    this->FinalValue = local_108.FinalValue;
    SetBitDepth(this,EVar2);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    bVar7 = true;
  }
  return bVar7;
}

// Reset @ 14b2c1920

void __thiscall FWaveTableData::Reset(FWaveTableData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (this->BitDepth == PCM_16) {
    iVar3 = 2;
  }
  else if (this->BitDepth == IEEE_Float) {
    iVar3 = 4;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0xcb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = 1;
  }
  uVar4 = iVar3 * param_1;
  if (-1 < (int)uVar4) {
    (this->Data).ArrayNum = 0;
    if ((this->Data).ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4,&(this->Data).AllocatorInstance,0,&(this->Data).ArrayMax);
    }
    this->FinalValue = 1.1754944e-38;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// SetBitDepth @ 14b2c26f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FWaveTableData::SetBitDepth(FWaveTableData *this,EWaveTableBitDepth param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<short_const_,int> local_68;
  TArrayView<short,int> local_58;
  TArrayView<float_const_,int> local_48;
  undefined4 local_2c;
  undefined4 local_1c;
  
  if (param_1 == this->BitDepth) {
    return false;
  }
  iVar5 = GetNumSamples(this);
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  if (param_1 == PCM_16) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_b8,iVar5 * 2,Default);
    local_a8 = (FScriptContainerElement *)0x0;
    iStack_a0 = 0;
    if (this->BitDepth == IEEE_Float) {
      pFVar1 = (this->Data).AllocatorInstance.Data;
      iVar5 = (int)((ulonglong)(longlong)(this->Data).ArrayNum >> 2);
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uStack_9c = local_1c;
      local_a8 = pFVar1;
      iStack_a0 = iVar5;
    }
    local_88 = local_b8.AllocatorInstance.Data;
    iStack_80 = local_b8.ArrayNum;
    if ((local_b8.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_58._12_4_ = uStack_7c;
    local_58.ArrayNum = iStack_80;
    local_48._12_4_ = uStack_9c;
    local_48.ArrayNum = iStack_a0;
    local_58.DataPtr = (short *)local_88;
    local_48.DataPtr = (float *)local_a8;
    Audio::ArrayFloatToPcm16(&local_48,&local_58);
  }
  else if (param_1 == IEEE_Float) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_b8,iVar5 * 4,Default);
    local_a8 = (FScriptContainerElement *)0x0;
    iStack_a0 = 0;
    if (this->BitDepth == PCM_16) {
      pFVar1 = (this->Data).AllocatorInstance.Data;
      iVar5 = (int)((ulonglong)(longlong)(this->Data).ArrayNum >> 1);
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uStack_9c = local_2c;
      local_a8 = pFVar1;
      iStack_a0 = iVar5;
    }
    local_98 = local_b8.AllocatorInstance.Data;
    iStack_90 = local_b8.ArrayNum;
    if ((local_b8.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_78._12_4_ = uStack_8c;
    local_78.ArrayNum = iStack_90;
    local_68._12_4_ = uStack_9c;
    local_68.ArrayNum = iStack_a0;
    local_78.DataPtr = (float *)local_98;
    local_68.DataPtr = (short *)local_a8;
    Audio::ArrayPcm16ToFloat(&local_68,&local_78);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this->BitDepth = param_1;
  pTVar6 = &this->Data;
  if (pTVar6 != &local_b8) {
    pFVar1 = (pTVar6->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar6->AllocatorInstance).Data = local_b8.AllocatorInstance.Data;
    (this->Data).ArrayNum = local_b8.ArrayNum;
    (this->Data).ArrayMax = local_b8.ArrayMax;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return true;
}

// SetData @ 14b2c2970

void __thiscall
FWaveTableData::SetData(FWaveTableData *this,TArrayView<short_const_,int> *param_1,bool param_2)

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  TArrayView<unsigned_char,int> local_18;
  
  local_18.DataPtr = (uchar *)param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum * 2;
  if (local_18.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char,int>
            (&this->Data,&local_18);
  iVar2 = param_1->ArrayNum;
  this->BitDepth = PCM_16;
  if (iVar2 == 0) {
    fVar6 = 0.0;
  }
  else {
    if (param_2) {
      if (iVar2 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      sVar1 = *param_1->DataPtr;
    }
    else {
      uVar5 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar5 = ~(iVar2 - 1U) >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      sVar1 = param_1->DataPtr[(longlong)param_1->ArrayNum + -1];
    }
    fVar6 = (float)(int)sVar1 * __real_38000100;
  }
  this->FinalValue = fVar6;
  return;
}

// SetData @ 14b2c2ab0

void __thiscall
FWaveTableData::SetData(FWaveTableData *this,TArrayView<float_const_,int> *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  TArrayView<unsigned_char,int> local_18;
  
  local_18.DataPtr = (uchar *)param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum << 2;
  if (param_1->ArrayNum << 2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char,int>
            (&this->Data,&local_18);
  iVar1 = param_1->ArrayNum;
  this->BitDepth = IEEE_Float;
  if (iVar1 == 0) {
    fVar5 = 0.0;
  }
  else {
    if (param_2) {
      pfVar4 = TArrayView<float_const_,int>::operator[](param_1,0);
    }
    else {
      pfVar4 = TArrayView<float_const_,int>::Last(param_1,0);
    }
    fVar5 = *pfVar4;
  }
  this->FinalValue = fVar5;
  return;
}

// SetFinalValue @ 14b2c2b70

void __thiscall FWaveTableData::SetFinalValue(FWaveTableData *this,float param_1)

{
  this->FinalValue = param_1;
  return;
}

// SetRawData @ 14b2c2be0

void __thiscall
FWaveTableData::SetRawData
          (FWaveTableData *this,EWaveTableBitDepth param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->Data;
  this->BitDepth = param_1;
  if (pTVar1 != param_2) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Data).ArrayNum = param_2->ArrayNum;
    (this->Data).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  return;
}

// SetRawData @ 14b2c2c40

void __thiscall
FWaveTableData::SetRawData
          (FWaveTableData *this,EWaveTableBitDepth param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uchar *_Src;
  
  iVar2 = param_2->ArrayNum;
  iVar3 = (this->Data).ArrayMax;
  piVar1 = &(this->Data).ArrayMax;
  _Src = param_2->DataPtr;
  (this->Data).ArrayNum = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
    this->BitDepth = param_1;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,iVar3,&(this->Data).AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((this->Data).AllocatorInstance.Data,_Src,(longlong)iVar2);
    }
    this->BitDepth = param_1;
  }
  return;
}

// Zero @ 14b2c2e40

void __thiscall FWaveTableData::Zero(FWaveTableData *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement local_18 [16];
  
  if (param_1 < 0) {
    iVar5 = (this->Data).ArrayNum;
    piVar1 = &(this->Data).ArrayMax;
    if (*piVar1 != iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,&(this->Data).AllocatorInstance,iVar5,piVar1);
    }
    memset((this->Data).AllocatorInstance.Data,0,(longlong)(this->Data).ArrayNum);
    return;
  }
  if (this->BitDepth == PCM_16) {
    iVar5 = 2;
  }
  else if (this->BitDepth == IEEE_Float) {
    iVar5 = 4;
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0xcb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = 1;
  }
  uVar6 = iVar5 * param_1;
  uVar7 = (ulonglong)uVar6;
  local_18[0] = (FScriptContainerElement)0x0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar1 != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar6,&(this->Data).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar6) {
    do {
      pFVar2 = (this->Data).AllocatorInstance.Data;
      if (((pFVar2 <= local_18) && (local_18 < pFVar2 + *piVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->Data).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(this->Data).AllocatorInstance,piVar1);
      }
      (this->Data).ArrayNum = iVar5 + 1;
      (this->Data).AllocatorInstance.Data[iVar5] = local_18[0];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

