// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FBitWriter @ 1419cca60

FBitWriter * __thiscall FBitWriter::FBitWriter(FBitWriter *this,FBitWriter *param_1)

{
  FArchiveState::FArchiveState((FArchiveState *)this,(FArchiveState *)param_1);
  this->_padding_ = (longlong)&___7FBitWriter__6B_;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).AllocatorInstance.Data = (param_1->Buffer).AllocatorInstance.Data;
  (param_1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
  (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
  (param_1->Buffer).ArrayNum = 0;
  (param_1->Buffer).ArrayMax = 0;
  this->Num = param_1->Num;
  this->Max = param_1->Max;
  this->bAllowResize = param_1->bAllowResize;
  this->bAllowOverflow = param_1->bAllowOverflow;
  return this;
}

// FBitWriter @ 1419ccb10

FBitWriter * __thiscall FBitWriter::FBitWriter(FBitWriter *this,FBitWriter *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FArchiveState::FArchiveState((FArchiveState *)this,(FArchiveState *)param_1);
  pTVar2 = &this->Buffer;
  this->_padding_ = (longlong)&___7FBitWriter__6B_;
  piVar1 = &(this->Buffer).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Buffer).ArrayNum;
  _Src = (param_1->Buffer).AllocatorInstance.Data;
  (this->Buffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  this->Num = param_1->Num;
  this->Max = param_1->Max;
  this->bAllowResize = param_1->bAllowResize;
  this->bAllowOverflow = param_1->bAllowOverflow;
  return this;
}

// FBitWriter @ 1419ccc00

FBitWriter * __thiscall FBitWriter::FBitWriter(FBitWriter *this)

{
  byte *pbVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FBitArchive__6B_;
  pTVar2 = CVarMaxNetStringSize.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (!bVar3) goto LAB_1419ccc44;
  }
  lVar4 = 0;
LAB_1419ccc44:
  this->_padding_ = (longlong)*(int *)((longlong)pTVar2->ShadowedValue + lVar4);
  this->Num = 0;
  this->_padding_ = (longlong)&___7FBitWriter__6B_;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  this->Max = 0;
  this->bAllowResize = false;
  this->bAllowOverflow = false;
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x80;
  return this;
}

// FBitWriter @ 1419cccc0

FBitWriter * __thiscall FBitWriter::FBitWriter(FBitWriter *this,long64 param_1,bool param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  longlong lVar7;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FBitArchive__6B_;
  pTVar5 = CVarMaxNetStringSize.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar7 = 4;
    if (!bVar6) goto LAB_1419ccd17;
  }
  lVar7 = 0;
LAB_1419ccd17:
  piVar2 = &(this->Buffer).ArrayNum;
  this->_padding_ = (longlong)*(int *)((longlong)pTVar5->ShadowedValue + lVar7);
  this->_padding_ = (longlong)&___7FBitWriter__6B_;
  piVar3 = &(this->Buffer).ArrayMax;
  *piVar2 = 0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  this->Num = 0;
  this->Max = param_1;
  this->bAllowOverflow = false;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(int)(param_1 + 7 >> 3),&(this->Buffer).AllocatorInstance,piVar2,piVar3);
  iVar4 = (this->Buffer).ArrayNum;
  _Dst = (this->Buffer).AllocatorInstance.Data;
  this->bAllowResize = param_2;
  memset(_Dst,0,(longlong)iVar4);
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x80;
  return this;
}

// ~FBitWriter @ 1419d1fa0

void __thiscall FBitWriter::~FBitWriter(FBitWriter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBitWriter__6B_;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator= @ 1419d3ec0

FBitWriter * __thiscall FBitWriter::operator=(FBitWriter *this,FBitWriter *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  FArchiveState::operator=((FArchiveState *)this,(FArchiveState *)param_1);
  pTVar1 = &param_1->Buffer;
  pTVar2 = &this->Buffer;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
    (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
    (param_1->Buffer).ArrayNum = 0;
    (param_1->Buffer).ArrayMax = 0;
  }
  this->Num = param_1->Num;
  this->Max = param_1->Max;
  this->bAllowResize = param_1->bAllowResize;
  this->bAllowOverflow = param_1->bAllowOverflow;
  return this;
}

// operator= @ 1419d3f80

FBitWriter * __thiscall FBitWriter::operator=(FBitWriter *this,FBitWriter *param_1)

{
  FArchiveState::operator=((FArchiveState *)this,(FArchiveState *)param_1);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->Buffer,&param_1->Buffer);
  this->Num = param_1->Num;
  this->Max = param_1->Max;
  this->bAllowResize = param_1->bAllowResize;
  this->bAllowOverflow = param_1->bAllowOverflow;
  return this;
}

// AllowAppend @ 1419e0740

bool __thiscall FBitWriter::AllowAppend(FBitWriter *this,long64 param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  lVar5 = param_1 + this->Num;
  if (this->Max < lVar5) {
    if (this->bAllowResize == false) {
      return false;
    }
    lVar2 = this->Max * 2;
    if (lVar5 < lVar2) {
      lVar5 = lVar2;
    }
    this->Max = lVar5;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->Buffer,(int)(lVar5 + 7 >> 3) - (this->Buffer).ArrayNum);
    if (this->Max + 7 >> 3 != (longlong)(this->Buffer).ArrayNum) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Max+7)>>3== Buffer.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                         ,0xa5,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return true;
}

// CountMemory @ 1419e75e0

void __thiscall FBitWriter::CountMemory(FBitWriter *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Buffer).ArrayNum,(longlong)(this->Buffer).ArrayMax);
                    /* WARNING: Could not recover jumptable at 0x0001419e7613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0xb8,0xb8);
  return;
}

// Reset @ 141a1a1a0

void __thiscall FBitWriter::Reset(FBitWriter *this)

{
  byte *pbVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  
  FArchiveState::Reset((FArchiveState *)this);
  iVar2 = (this->Buffer).ArrayNum;
  _Dst = (this->Buffer).AllocatorInstance.Data;
  this->Num = 0;
  memset(_Dst,0,(longlong)iVar2);
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x80;
  pTVar3 = CVarMaxNetStringSize.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      iVar2 = pTVar3->ShadowedValue[1];
      goto LAB_141a1a21d;
    }
  }
  iVar2 = pTVar3->ShadowedValue[0];
LAB_141a1a21d:
  this->_padding_ = (longlong)iVar2;
  return;
}

// Serialize @ 141a1dfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBitWriter::Serialize(FBitWriter *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = param_2 * 8;
  bVar2 = AllowAppend(this,lVar1);
  if (bVar2) {
    appBitsCpy((uchar *)(this->Buffer).AllocatorInstance.Data,(int)this->Num,param_1,0,(int)lVar1);
    this->Num = this->Num + lVar1;
    return;
  }
  if ((this->bAllowOverflow == false) && (1 < (byte)LogNetSerialization._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
  }
  FArchiveState::SetError((FArchiveState *)this);
  return;
}

// SerializeBits @ 141a1e970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBitWriter::SerializeBits(FBitWriter *this,void *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = AllowAppend(this,param_2);
  if (!bVar4) {
    if ((this->bAllowOverflow == false) && (1 < (byte)LogNetSerialization._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
    }
    FArchiveState::SetError((FArchiveState *)this);
    return;
  }
  if (param_2 == 1) {
    if ((*(byte *)param_1 & 1) != 0) {
      uVar6 = (uint)(this->Num >> 3);
      bVar2 = GShift[(uint)this->Num & 7];
      uVar5 = 0;
      if ((int)uVar6 < (this->Buffer).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (this->Buffer).AllocatorInstance.Data + (int)uVar6;
      *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | bVar2);
    }
    this->Num = this->Num + 1;
    return;
  }
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (this->Num == 0) {
    memcpy(pFVar1,param_1,
           (longlong)((ulonglong)((uint)(param_2 + 7 >> 0x3f) & 7) + param_2 + 7) >> 3);
    this->Num = param_2;
    return;
  }
  appBitsCpy((uchar *)pFVar1,(int)this->Num,param_1,0,(int)param_2);
  this->Num = this->Num + param_2;
  return;
}

// SerializeBitsWithOffset @ 141a1ebb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBitWriter::SerializeBitsWithOffset(FBitWriter *this,void *param_1,int param_2,long64 param_3)

{
  bool bVar1;
  
  bVar1 = AllowAppend(this,param_3);
  if (bVar1) {
    appBitsCpy((uchar *)(this->Buffer).AllocatorInstance.Data,(int)this->Num,param_1,param_2,
               (int)param_3);
    this->Num = this->Num + param_3;
  }
  else {
    if ((this->bAllowOverflow == false) && (1 < (byte)LogNetSerialization._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
    }
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

// SerializeInt @ 141a1edc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBitWriter::SerializeInt(FBitWriter *this,uint *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uchar uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long64 lVar10;
  int iVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  uint *local_48;
  uint *local_40;
  
  local_res18[0] = param_2;
  if ((param_2 < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueMax >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\BitWriter.cpp"
                         ,0x90,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = 1;
  uVar7 = 1;
  if (local_res18[0] != 0) {
    uVar7 = local_res18[0];
  }
  uVar2 = (ulonglong)(uVar7 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  local_res10[0] = *param_1;
  iVar11 = (int)lVar4;
  local_res20 = iVar11;
  if (local_res18[0] <= local_res10[0]) {
    if (1 < (byte)LogSerialization._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
    local_48 = local_res10;
    local_40 = local_res18;
    `FBitWriter::SerializeInt'::__l12::<lambda_1>::operator()(&local_48);
    local_res10[0] = local_res18[0] - 1;
  }
  bVar6 = AllowAppend(this,(longlong)iVar11);
  if (!bVar6) {
    if ((this->bAllowOverflow == false) && (1 < (byte)LogNetSerialization._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
    }
    FArchiveState::SetError((FArchiveState *)this);
    return;
  }
  iVar11 = 0;
  lVar10 = this->Num;
  uVar7 = local_res18[0];
  if (1 < local_res18[0]) {
    do {
      if (uVar8 == 0) break;
      if ((local_res10[0] & uVar8) != 0) {
        uVar9 = (uint)(lVar10 >> 3);
        uVar3 = GShift[(uint)lVar10 & 7];
        uVar7 = 0;
        if ((int)uVar9 < (this->Buffer).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = (this->Buffer).AllocatorInstance.Data + (int)uVar9;
        *pFVar1 = (FScriptContainerElement)((char)*pFVar1 + uVar3);
        iVar11 = iVar11 + uVar8;
        uVar7 = local_res18[0];
      }
      uVar8 = uVar8 * 2;
      lVar10 = lVar10 + 1;
    } while (uVar8 + iVar11 < uVar7);
  }
  this->Num = lVar10;
  return;
}

// SerializeIntPacked @ 141a1f120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBitWriter::SerializeIntPacked(FBitWriter *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  bool bVar3;
  sbyte sVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement FVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auStack_68 [32];
  long64 local_48;
  FScriptContainerElement aFStack_38 [24];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar6 = 0;
  uVar8 = uVar6;
  uVar11 = *param_1;
  do {
    uVar7 = (int)uVar8 + 1;
    *(uint *)(aFStack_38 + uVar8 * 4) = (uint)((uVar11 & 0xffffff80) != 0) | (uVar11 & 0x7f) * 2;
    uVar5 = uVar11 >> 7;
    uVar8 = (ulonglong)uVar7;
    uVar11 = uVar11 >> 7;
  } while (uVar7 == 0 || uVar5 != 0);
  bVar3 = AllowAppend(this,(ulonglong)(uVar7 * 8));
  if (bVar3) {
    uVar11 = (uint)this->Num & 7;
    pFVar9 = (this->Buffer).AllocatorInstance.Data + (this->Num >> 3);
    sVar4 = (sbyte)uVar11;
    bVar12 = ('\x01' << sVar4) - 1;
    this->Num = this->Num + (ulonglong)(uVar7 * 8);
    if (uVar7 != 0) {
      if (uVar11 == 0) {
        do {
          lVar2 = uVar6 * 4;
          uVar11 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar11;
          *pFVar9 = aFStack_38[lVar2];
          pFVar9 = pFVar9 + 1;
        } while (uVar11 != uVar7);
      }
      else {
        FVar10 = *pFVar9;
        do {
          uVar11 = *(uint *)(aFStack_38 + uVar6 * 4);
          pFVar1 = pFVar9 + 1;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          *pFVar9 = (FScriptContainerElement)((byte)FVar10 & bVar12 | (char)uVar11 << sVar4);
          FVar10 = (FScriptContainerElement)
                   ((byte)(uVar11 >> (8U - sVar4 & 0x1f)) | (byte)*pFVar1 & ~bVar12);
          *pFVar1 = FVar10;
          pFVar9 = pFVar1;
        } while (uVar5 != uVar7);
      }
    }
  }
  else {
    if ((this->bAllowOverflow == false) && (1 < (byte)LogNetSerialization._0_1_)) {
      local_48 = this->Max;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
    }
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

// SetOverflowed @ 141a21140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBitWriter::SetOverflowed(FBitWriter *this,int param_1)

{
  if ((this->bAllowOverflow == false) && (1 < (byte)LogNetSerialization._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
  }
  FArchiveState::SetError((FArchiveState *)this);
  return;
}

// WriteBit @ 141a2ffd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBitWriter::WriteBit(FBitWriter *this,uchar param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = AllowAppend(this,1);
  if (!bVar4) {
    if ((this->bAllowOverflow == false) && (1 < (byte)LogNetSerialization._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
    }
    FArchiveState::SetError((FArchiveState *)this);
    return;
  }
  if (param_1 != '\0') {
    uVar6 = (uint)(this->Num >> 3);
    bVar2 = GShift[(uint)this->Num & 7];
    uVar5 = 0;
    if ((int)uVar6 < (this->Buffer).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->Buffer).AllocatorInstance.Data + (int)uVar6;
    *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | bVar2);
  }
  this->Num = this->Num + 1;
  return;
}

// WriteIntWrapped @ 141a32f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBitWriter::WriteIntWrapped(FBitWriter *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uchar uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((param_2 < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueMax >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\BitWriter.cpp"
                         ,0xb7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = 1;
  uVar7 = 1;
  if (param_2 != 0) {
    uVar7 = param_2;
  }
  uVar2 = (ulonglong)(uVar7 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  bVar6 = AllowAppend(this,(longlong)(int)lVar4);
  if (bVar6) {
    iVar9 = 0;
    if (1 < param_2) {
      do {
        if (uVar8 == 0) {
          return;
        }
        if ((param_1 & uVar8) != 0) {
          uVar10 = (uint)(this->Num >> 3);
          uVar3 = GShift[(uint)this->Num & 7];
          uVar7 = 0;
          if ((int)uVar10 < (this->Buffer).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar1 = (this->Buffer).AllocatorInstance.Data + (int)uVar10;
          *pFVar1 = (FScriptContainerElement)((char)*pFVar1 + uVar3);
          iVar9 = iVar9 + uVar8;
        }
        this->Num = this->Num + 1;
        uVar8 = uVar8 * 2;
      } while (uVar8 + iVar9 < param_2);
    }
    return;
  }
  if ((this->bAllowOverflow == false) && (1 < (byte)LogNetSerialization._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
  }
  FArchiveState::SetError((FArchiveState *)this);
  return;
}

// operator() @ 15047ff10

bool __thiscall `FBitWriter::SerializeInt'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3688161929735438182>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3688161929735438182>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

