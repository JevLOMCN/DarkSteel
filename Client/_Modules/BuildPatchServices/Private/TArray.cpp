// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 23

// CopyToEmpty<unsigned_char,int> @ 1431adef0

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_char,int>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,uchar *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2);
  }
  return;
}

// CopyToEmptyWithSlack<wchar_t,int> @ 1431adf80

void __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,wchar_t *param_1,int param_2,
          int param_3,int param_4)

{
  uint uVar1;
  
  this->ArrayNum = param_2;
  if (((param_2 == 0) && (param_4 == 0)) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  uVar1 = param_2 + param_4;
  if (param_2 <= (int)uVar1) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar1,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
    if (param_2 != 0) {
      memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// RemoveAt @ 1431f0180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FChunkBackingStore::FBackingStoreFreeSpan,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FChunkBackingStore::FBackingStoreFreeSpan,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 1431f0250

void __thiscall
TArray<TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 1431fa860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FEvent_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FEvent_*,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// CopyToEmpty<BuildPatchServices::FChunkPart,int> @ 143215540

void __thiscall
TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>::
CopyToEmpty<BuildPatchServices::FChunkPart,int>
          (TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *this,
          FChunkPart *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x18);
  }
  return;
}

// CopyToEmpty<BuildPatchServices::FFileManifest,int> @ 1432155d0

void __thiscall
TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>::
CopyToEmpty<BuildPatchServices::FFileManifest,int>
          (TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_> *this,
          FFileManifest *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<BuildPatchServices::FFileManifest,BuildPatchServices::FFileManifest,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> @ 14321f7f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> * __thiscall
TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_>::
TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_>
          (TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_> *this,
          initializer_list<BuildPatchServices::FBuildPatchInstallerAction> *param_1)

{
  FBuildPatchInstallerAction *pFVar1;
  longlong lVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  lVar2 = (longlong)param_1->_Last - (longlong)pFVar1;
  lVar2 = lVar2 / 0x56 + (lVar2 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)(lVar2 >> 2) - (int)(lVar2 >> 0x3f);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x158,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int>
            ((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// Append @ 143233d10

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Append
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,uchar *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 == (uchar *)0x0) && (param_2 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data + iVar3,param_1,(longlong)param_2);
  }
  return;
}

// Empty @ 14324aac0

void __thiscall
TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>::Empty
          (TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// InsertUninitializedImpl @ 143258560

void __thiscall
TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 1432585e0

void __thiscall
TArray<TUniquePtr<BuildPatchServices::FDeltaScannerEntry,TDefaultDelete<BuildPatchServices::FDeltaScannerEntry>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TUniquePtr<BuildPatchServices::FDeltaScannerEntry,TDefaultDelete<BuildPatchServices::FDeltaScannerEntry>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  memmove(_Src + (longlong)param_2 * 8,_Src,(longlong)(iVar1 - param_1) << 3);
  return;
}

// RemoveAt @ 1432624a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<double,FGuid>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<double,FGuid>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x18,(longlong)iVar4 * 0x18);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 143262580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  pvVar1 = *(void **)(_Dst + 0x20);
  while (pvVar1 != (void *)0x0) {
    *(undefined8 *)(_Dst + 0x28) = *(undefined8 *)((longlong)pvVar1 + 0x18);
    *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
    ::operator_delete(pvVar1,0x20);
    pvVar1 = *(void **)(_Dst + 0x28);
    *(void **)(_Dst + 0x20) = pvVar1;
  }
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x30,(longlong)iVar5 * 0x30);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 1432626b0

void __thiscall
TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMatchEntry *_Dst;
  
  _Dst = (FMatchEntry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<BuildPatchServices::FMatchEntry,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Append<unsigned___int64,TSizedDefaultAllocator<32>_> @ 1432716c0

void __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
Append<unsigned___int64,TSizedDefaultAllocator<32>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// CopyToEmpty<float,int> @ 1432732d0

void __thiscall
TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
          (TArray<float,TSizedDefaultAllocator<32>_> *this,float *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 2);
  }
  return;
}

// CopyToEmpty<unsigned___int64,int> @ 143273360

void __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned___int64,int>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,ulong64 *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// IndexOfByKey<FGuid> @ 14327a800

int __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::IndexOfByKey<FGuid>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if (((param_1->D == *(uint *)(pFVar2 + 0xc) && param_1->C == *(uint *)(pFVar2 + 8)) &&
          param_1->B == *(uint *)(pFVar2 + 4)) && param_1->A == *(uint *)pFVar2) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return -1;
}

// operator= @ 1432896a0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// Insert @ 1432db510

int __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,FGuid *param_1,int param_2)

{
  FGuid *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (FGuid *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x10;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  uVar3 = *(undefined8 *)&param_1->C;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x10;
  *(undefined8 *)pFVar6 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar6 + 8) = uVar3;
  return param_2;
}

// SetNum @ 1432edc40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FGuid,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// RemoveAtSwapImpl @ 143326640

void __thiscall
TArray<TSharedRef<BuildPatchServices::FFakeHttpRequest,1>,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<TSharedRef<BuildPatchServices::FFakeHttpRequest,1>,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

