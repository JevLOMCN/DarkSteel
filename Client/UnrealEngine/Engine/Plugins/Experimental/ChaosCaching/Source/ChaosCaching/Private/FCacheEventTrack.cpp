// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 13

// StaticStruct @ 14dadaad0

UScriptStruct * __cdecl FCacheEventTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventTrack,(UObject *)pUVar1,
                         L"CacheEventTrack");
  }
  return Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton;
}

// FCacheEventTrack @ 14dae6760

FCacheEventTrack * __thiscall
FCacheEventTrack::FCacheEventTrack(FCacheEventTrack *this,FCacheEventTrack *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_char_*,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UScriptStruct *pUVar5;
  FScriptContainerElement *pFVar6;
  
  this->Name = param_1->Name;
  pUVar5 = (param_1->Struct).field0_0x0.DebugPtr;
  (this->Struct).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &this->TimeStamps;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TimeStamps).ArrayMax;
  iVar4 = (param_1->TimeStamps).ArrayNum;
  pFVar6 = (param_1->TimeStamps).AllocatorInstance.Data;
  (this->TimeStamps).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->EventData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->EventData).ArrayMax;
  iVar4 = (param_1->EventData).ArrayNum;
  pFVar6 = (param_1->EventData).AllocatorInstance.Data;
  (this->EventData).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 3);
  }
  this->TransientVersion = param_1->TransientVersion;
  return this;
}

// FCacheEventTrack @ 14dae6870

FCacheEventTrack * __thiscall
FCacheEventTrack::FCacheEventTrack(FCacheEventTrack *this,FName param_1,UScriptStruct *param_2)

{
  this->Name = param_1;
  (this->Struct).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->TimeStamps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeStamps).ArrayNum = 0;
  (this->TimeStamps).ArrayMax = 0;
  (this->EventData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventData).ArrayNum = 0;
  (this->EventData).ArrayMax = 0;
  return this;
}

// FCacheEventTrack @ 14dae68c0

FCacheEventTrack * __thiscall FCacheEventTrack::FCacheEventTrack(FCacheEventTrack *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->TimeStamps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeStamps).ArrayNum = 0;
  (this->TimeStamps).ArrayMax = 0;
  (this->EventData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventData).ArrayNum = 0;
  (this->EventData).ArrayMax = 0;
  return this;
}

// ~FCacheEventTrack @ 14dae8870

void __thiscall FCacheEventTrack::~FCacheEventTrack(FCacheEventTrack *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
    if (((this->EventData).ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EventData.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheEvents.cpp"
                           ,0x2d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    this->TransientVersion = this->TransientVersion + 1;
    pFVar7 = (this->EventData).AllocatorInstance.Data;
    iVar1 = (this->EventData).ArrayNum;
    pFVar4 = pFVar7 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->EventData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar4) break;
      pUVar2 = (this->Struct).field0_0x0.DebugPtr;
      pvVar3 = *(void **)pFVar7;
      (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,pvVar3);
      FMemory::Free(pvVar3);
      pFVar7 = pFVar7 + 8;
    }
    (this->EventData).ArrayNum = 0;
    if ((this->EventData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->EventData).AllocatorInstance,0,&(this->EventData).ArrayMax);
    }
    (this->TimeStamps).ArrayNum = 0;
    if ((this->TimeStamps).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->TimeStamps).AllocatorInstance,0,&(this->TimeStamps).ArrayMax);
    }
  }
  pFVar4 = (this->EventData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->TimeStamps).AllocatorInstance.Data;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar4);
  return;
}

// DestroyAll @ 14daef0e0

void __thiscall FCacheEventTrack::DestroyAll(FCacheEventTrack *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
    if (((this->EventData).ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EventData.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheEvents.cpp"
                           ,0x2d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    this->TransientVersion = this->TransientVersion + 1;
    pFVar7 = (this->EventData).AllocatorInstance.Data;
    iVar2 = (this->EventData).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->EventData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar1) break;
      pUVar3 = (this->Struct).field0_0x0.DebugPtr;
      pvVar4 = *(void **)pFVar7;
      (**(code **)(pUVar3->_padding_ + 0x300))(pUVar3,pvVar4);
      FMemory::Free(pvVar4);
      pFVar7 = pFVar7 + 8;
    }
    (this->EventData).ArrayNum = 0;
    if ((this->EventData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->EventData).AllocatorInstance,0,&(this->EventData).ArrayMax);
    }
    (this->TimeStamps).ArrayNum = 0;
    if ((this->TimeStamps).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->TimeStamps).AllocatorInstance,0,&(this->TimeStamps).ArrayMax);
    }
  }
  return;
}

// GetEventHandle @ 14daf7ed0

FHandle * __thiscall
FCacheEventTrack::GetEventHandle(FCacheEventTrack *this,FHandle *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->Index = -1;
  __return_storage_ptr__->Track = (FCacheEventTrack *)0x0;
  __return_storage_ptr__->Version = 0;
  if ((-1 < param_1) && (param_1 < (this->EventData).ArrayNum)) {
    __return_storage_ptr__->Version = this->TransientVersion;
    __return_storage_ptr__->Track = this;
    __return_storage_ptr__->Index = param_1;
  }
  return __return_storage_ptr__;
}

// GetTransientVersion @ 14daf8a90

int __thiscall FCacheEventTrack::GetTransientVersion(FCacheEventTrack *this)

{
  return this->TransientVersion;
}

// LoadEventsFromArchive @ 14dafa810

void __thiscall FCacheEventTrack::LoadEventsFromArchive(FCacheEventTrack *this,FArchive *param_1)

{
  uint uVar1;
  FTokenizedMessage *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  FMessageLog *this_01;
  FText *pFVar6;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  TSharedRef<FTextToken,1> *pTVar8;
  int iVar9;
  UScriptStruct *this_02;
  ulonglong uVar10;
  FName local_res8;
  void *local_b8;
  TSharedRef<IMessageToken,1> local_b0;
  TSharedRef<FTokenizedMessage,1> local_a0;
  TSharedRef<FTextToken,1> local_90;
  FText local_80;
  TSharedRef<FTokenizedMessage,1> local_70;
  FText local_60;
  FMessageLog local_50;
  
  this_02 = (this->Struct).field0_0x0.DebugPtr;
  if (this_02 == (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventBase,(UObject *)pUVar5,
                           L"CacheEventBase");
    }
    this_02 = Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton;
    ::FName::FName(&local_res8,"LoadErrors");
    this_01 = FMessageLog::FMessageLog(&local_50,&local_res8);
    pFVar6 = FText::FText(&local_60);
    pTVar7 = FMessageLog::Error(this_01,&local_70,pFVar6);
    this_00 = pTVar7->Object;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_80,L"ChaosCache",L"StructLoadError",
                        L"Failed to load Chaos cache event track as the underlying struct was unavailable."
                       );
    pTVar8 = FTextToken::Create(&local_90,pFVar6,true);
    local_b0.Object = (IMessageToken *)pTVar8->Object;
    local_b0.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this_00,&local_a0,&local_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_50);
  }
  uVar1 = (this->TimeStamps).ArrayNum;
  if (0 < (int)uVar1) {
    uVar10 = (ulonglong)uVar1;
    do {
      iVar9 = (int)*(short *)((longlong)&this_02->_padding_ + 4);
      local_b8 = FMemory::Malloc((longlong)((int)this_02->_padding_ + -1 + iVar9 & -iVar9),0);
      (**(code **)(this_02->_padding_ + 0x2f8))(this_02,local_b8,1);
      UScriptStruct::SerializeItem(this_02,param_1,local_b8,(void *)0x0);
      pFVar2 = (this->EventData).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)(this->EventData).ArrayMax * 8)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (this->EventData).ArrayNum;
      if (iVar9 == (this->EventData).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->EventData).AllocatorInstance,&(this->EventData).ArrayMax);
      }
      (this->EventData).ArrayNum = iVar9 + 1;
      *(void **)((this->EventData).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_b8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// Merge @ 14dafaa80

void __thiscall FCacheEventTrack::Merge(FCacheEventTrack *this,FCacheEventTrack *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint local_res10;
  
  if ((param_1->TimeStamps).ArrayNum != 0) {
    param_1->TransientVersion = param_1->TransientVersion + 1;
    this->TransientVersion = this->TransientVersion + 1;
    lVar12 = (longlong)(param_1->TimeStamps).ArrayNum;
    local_res10 = 0;
    if (0 < lVar12) {
      pTVar1 = &this->TimeStamps;
      pTVar2 = &this->EventData;
      lVar17 = 0;
      do {
        piVar15 = &(this->EventData).ArrayMax;
        uVar18 = ~local_res10 >> 0x1f;
        uVar9 = 0;
        if ((int)local_res10 < (param_1->TimeStamps).ArrayNum) {
          uVar9 = uVar18;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = (this->TimeStamps).ArrayNum;
        iVar11 = 0;
        if ((int)uVar9 < 1) {
LAB_14dafab87:
          if ((int)uVar9 <= iVar11) goto LAB_14dafad7f;
          uVar9 = 0;
          if ((int)local_res10 < (param_1->TimeStamps).ArrayNum) {
            uVar9 = uVar18;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (pTVar1->AllocatorInstance).Data;
          pFVar4 = (param_1->TimeStamps).AllocatorInstance.Data + lVar17 * 4;
          if (((pFVar6 <= pFVar4) && (pFVar4 < pFVar6 + (longlong)(this->TimeStamps).ArrayMax * 4))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (this->TimeStamps).ArrayNum;
          piVar15 = &(this->TimeStamps).ArrayMax;
          if (iVar10 == *piVar15) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,piVar15);
          }
          lVar16 = (longlong)iVar11;
          (this->TimeStamps).ArrayNum = iVar10 + 1;
          pFVar6 = (pTVar1->AllocatorInstance).Data + lVar16 * 4;
          memmove(pFVar6 + 4,pFVar6,(longlong)(iVar10 - iVar11) << 2);
          *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16 * 4) = *(undefined4 *)pFVar4;
          uVar9 = 0;
          if ((int)local_res10 < (param_1->EventData).ArrayNum) {
            uVar9 = uVar18;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          piVar15 = &(this->EventData).ArrayMax;
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          pFVar4 = (param_1->EventData).AllocatorInstance.Data + lVar17 * 8;
          if (((pFVar6 <= pFVar4) && (pFVar4 < pFVar6 + (longlong)*piVar15 * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (this->EventData).ArrayNum;
          if (iVar10 == *piVar15) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar15);
          }
          (this->EventData).ArrayNum = iVar10 + 1;
          pFVar6 = (pTVar2->AllocatorInstance).Data + lVar16 * 8;
          memmove(pFVar6 + 8,pFVar6,(longlong)(iVar10 - iVar11) << 3);
          *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar16 * 8) = *(undefined8 *)pFVar4;
        }
        else {
          fVar5 = *(float *)((param_1->TimeStamps).AllocatorInstance.Data + lVar17 * 4);
          uVar13 = uVar9;
          do {
            uVar14 = uVar13 >> 1;
            pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)(int)(uVar14 + iVar11) * 4;
            if (*(float *)pFVar4 <= fVar5 && fVar5 != *(float *)pFVar4) {
              iVar11 = uVar14 + iVar11 + (uVar13 & 1);
            }
            uVar13 = uVar14;
          } while (uVar14 != 0);
          if (-1 < iVar11) goto LAB_14dafab87;
LAB_14dafad7f:
          uVar9 = 0;
          if ((int)local_res10 < (param_1->TimeStamps).ArrayNum) {
            uVar9 = uVar18;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (pTVar1->AllocatorInstance).Data;
          pFVar4 = (param_1->TimeStamps).AllocatorInstance.Data + lVar17 * 4;
          if (((pFVar6 <= pFVar4) && (pFVar4 < pFVar6 + (longlong)(this->TimeStamps).ArrayMax * 4))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = (this->TimeStamps).ArrayNum;
          piVar3 = &(this->TimeStamps).ArrayMax;
          if (iVar11 == *piVar3) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,piVar3);
          }
          (this->TimeStamps).ArrayNum = iVar11 + 1;
          *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 4) =
               *(undefined4 *)pFVar4;
          uVar9 = 0;
          if ((int)local_res10 < (param_1->EventData).ArrayNum) {
            uVar9 = uVar18;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          pFVar4 = (param_1->EventData).AllocatorInstance.Data + lVar17 * 8;
          if (((pFVar6 <= pFVar4) && (pFVar4 < pFVar6 + (longlong)*piVar15 * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = (this->EventData).ArrayNum;
          if (iVar11 == *piVar15) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar15);
          }
          (this->EventData).ArrayNum = iVar11 + 1;
          *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) =
               *(undefined8 *)pFVar4;
        }
        local_res10 = local_res10 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar12);
    }
    (param_1->TimeStamps).ArrayNum = 0;
    if ((param_1->TimeStamps).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(param_1->TimeStamps).AllocatorInstance,0,&(param_1->TimeStamps).ArrayMax);
    }
    (param_1->EventData).ArrayNum = 0;
    if ((param_1->EventData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(param_1->EventData).AllocatorInstance,0,&(param_1->EventData).ArrayMax);
    }
  }
  return;
}

// PushEventInternal @ 14daff2c0

void __thiscall
FCacheEventTrack::PushEventInternal(FCacheEventTrack *this,float param_1,void *param_2)

{
  int *piVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_res10 [2];
  void *local_18 [2];
  
  pUVar2 = (this->Struct).field0_0x0.DebugPtr;
  iVar6 = (int)*(short *)((longlong)&pUVar2->_padding_ + 4);
  local_res10[0] = param_1;
  local_18[0] = FMemory::Malloc((longlong)((int)pUVar2->_padding_ + -1 + iVar6 & -iVar6),0);
  pUVar2 = (this->Struct).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2,local_18[0],1);
  UScriptStruct::CopyScriptStruct((this->Struct).field0_0x0.DebugPtr,local_18[0],param_2,1);
  pFVar3 = (this->TimeStamps).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->TimeStamps).ArrayMax * 4))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TimeStamps).ArrayNum;
  piVar1 = &(this->TimeStamps).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->TimeStamps).AllocatorInstance,piVar1);
  }
  (this->TimeStamps).ArrayNum = iVar6 + 1;
  *(float *)((this->TimeStamps).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res10[0];
  pFVar3 = (this->EventData).AllocatorInstance.Data;
  if (pFVar3 <= (FScriptContainerElement *)local_18) {
    if ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->EventData).ArrayMax * 8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->EventData).ArrayNum;
  piVar1 = &(this->EventData).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->EventData).AllocatorInstance,piVar1);
  }
  (this->EventData).ArrayNum = iVar6 + 1;
  *(void **)((this->EventData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
  this->TransientVersion = this->TransientVersion + 1;
  return;
}

// SaveEventsToArchive @ 14db03ad0

void __thiscall FCacheEventTrack::SaveEventsToArchive(FCacheEventTrack *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FTokenizedMessage *this_00;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  FMessageLog *this_01;
  FText *pFVar6;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  TSharedRef<FTextToken,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  UScriptStruct *this_02;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  TSharedRef<IMessageToken,1> local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  TSharedRef<FTextToken,1> local_98;
  FText local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  this_02 = (this->Struct).field0_0x0.DebugPtr;
  if (this_02 == (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventBase,(UObject *)pUVar5,
                           L"CacheEventBase");
    }
    this_02 = Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton;
    ::FName::FName(local_res18,"SaveErrors");
    this_01 = FMessageLog::FMessageLog(&local_58,local_res18);
    pFVar6 = FText::FText(&local_68);
    pTVar7 = FMessageLog::Error(this_01,&local_78,pFVar6);
    this_00 = pTVar7->Object;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"ChaosCache",L"StructSaveError",
                        L"Failed to save Chaos cache event track as the underlying struct was unavailable."
                       );
    pTVar8 = FTextToken::Create(&local_98,pFVar6,true);
    local_b8.Object = (IMessageToken *)pTVar8->Object;
    local_b8.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this_00,&local_a8,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_58);
  }
  if ((this->EventData).ArrayNum != (this->TimeStamps).ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventData.Num() == TimeStamps.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheEvents.cpp"
                       ,0xad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = (this->EventData).AllocatorInstance.Data;
  iVar2 = (this->EventData).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EventData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) break;
    UScriptStruct::SerializeItem(this_02,param_1,*(void **)pFVar9,(void *)0x0);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// Serialize @ 14db03eb0

bool __thiscall FCacheEventTrack::Serialize(FCacheEventTrack *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventTrack,(UObject *)pUVar1,
                           L"CacheEventTrack");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton,param_1,
               (uchar *)this,(UStruct *)(this->Struct).field0_0x0.DebugPtr,(uchar *)0x0,
               (UObject *)0x0);
  }
  if ((param_1->field_0x28 & 4) != 0) {
    SaveEventsToArchive(this,param_1);
    return true;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    LoadEventsFromArchive(this,param_1);
  }
  return true;
}

