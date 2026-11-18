// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 28

// StaticClass @ 1461e3790

UClass * __cdecl UMovieSceneFolder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneFolder",
               &Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton,
               StaticRegisterNativesUMovieSceneFolder,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneFolder>,
               InternalVTableHelperCtorCaller<UMovieSceneFolder>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton;
}

// UMovieSceneFolder @ 1461fdad0

UMovieSceneFolder * __thiscall
UMovieSceneFolder::UMovieSceneFolder(UMovieSceneFolder *this,FVTableHelper *param_1)

{
  UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneFolder__6B_;
  (this->FolderName).ComparisonIndex = 0;
  (this->FolderName).Number = 0;
  (this->ChildFolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildFolders).ArrayNum = 0;
  (this->ChildFolders).ArrayMax = 0;
  (this->ChildTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTracks).ArrayNum = 0;
  (this->ChildTracks).ArrayMax = 0;
  (this->ChildObjectBindingStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildObjectBindingStrings).ArrayNum = 0;
  (this->ChildObjectBindingStrings).ArrayMax = 0;
  (this->ChildObjectBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildObjectBindings).ArrayNum = 0;
  (this->ChildObjectBindings).ArrayMax = 0;
  return this;
}

// UMovieSceneFolder @ 1461fdb40

UMovieSceneFolder * __thiscall
UMovieSceneFolder::UMovieSceneFolder(UMovieSceneFolder *this,FObjectInitializer *param_1)

{
  UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneFolder__6B_;
  (this->FolderName).ComparisonIndex = 0;
  (this->FolderName).Number = 0;
  (this->ChildFolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildFolders).ArrayNum = 0;
  (this->ChildFolders).ArrayMax = 0;
  (this->ChildTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTracks).ArrayNum = 0;
  (this->ChildTracks).ArrayMax = 0;
  (this->ChildObjectBindingStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildObjectBindingStrings).ArrayNum = 0;
  (this->ChildObjectBindingStrings).ArrayMax = 0;
  (this->ChildObjectBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildObjectBindings).ArrayNum = 0;
  (this->ChildObjectBindings).ArrayMax = 0;
  return this;
}

// ~UMovieSceneFolder @ 1461ffba0

void __thiscall UMovieSceneFolder::~UMovieSceneFolder(UMovieSceneFolder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneFolder__6B_;
  pFVar1 = (this->ChildObjectBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ChildObjectBindingStrings).AllocatorInstance.Data,
             (this->ChildObjectBindingStrings).ArrayNum);
  pFVar1 = (this->ChildObjectBindingStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildFolders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  return;
}

// AddChildFolder @ 146204c80

void __thiscall
UMovieSceneFolder::AddChildFolder(UMovieSceneFolder *this,UMovieSceneFolder *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneFolder>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneFolder *local_18 [2];
  
  pTVar2 = &this->ChildFolders;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneFolder *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->ChildFolders).ArrayMax * 8)) {
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
  iVar6 = (this->ChildFolders).ArrayNum;
  piVar1 = &(this->ChildFolders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChildFolders).ArrayNum = iVar6 + 1;
  *(UMovieSceneFolder **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneFolder *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// AddChildObjectBinding @ 146204d70

void __thiscall UMovieSceneFolder::AddChildObjectBinding(UMovieSceneFolder *this,FGuid *param_1)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FGuid *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  
  pTVar2 = &this->ChildObjectBindings;
  pFVar4 = (FGuid *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->ChildObjectBindings).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->ChildObjectBindings).ArrayNum;
  piVar1 = &(this->ChildObjectBindings).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChildObjectBindings).ArrayNum = iVar8 + 1;
  uVar6 = *(undefined8 *)&param_1->C;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar3 + 8) = uVar6;
  return;
}

// AddChildTrack @ 146204e30

void __thiscall UMovieSceneFolder::AddChildTrack(UMovieSceneFolder *this,UMovieSceneTrack *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneTrack *local_18 [2];
  
  pTVar2 = &this->ChildTracks;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->ChildTracks).ArrayMax * 8)) {
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
  iVar6 = (this->ChildTracks).ArrayNum;
  piVar1 = &(this->ChildTracks).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChildTracks).ArrayNum = iVar6 + 1;
  *(UMovieSceneTrack **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// CalculateFolderPath @ 146209810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneFolder::CalculateFolderPath
          (UMovieSceneFolder *param_1,TArrayView<UMovieSceneFolder_*_const,int> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  UMovieSceneFolder **ppUVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  UMovieSceneFolder **ppUVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_128 [32];
  FName local_d8;
  undefined8 local_d0;
  UMovieSceneFolder *local_c8;
  TPairInitializer<UMovieSceneFolder_*_const_&,UMovieSceneFolder_*_const_&> local_c0;
  UMovieSceneFolder **local_b0;
  UMovieSceneFolder ***local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  ppUVar11 = param_2->DataPtr;
  pFVar13 = (FScriptContainerElement *)0x0;
  ppUVar1 = ppUVar11 + param_2->ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  for (; ppUVar11 != ppUVar1; ppUVar11 = ppUVar11 + 1) {
    local_c0.Value = (UMovieSceneFolder **)*ppUVar11;
    iVar7 = (((UMovieSceneFolder *)local_c0.Value)->ChildFolders).ArrayNum;
    pFVar10 = (((UMovieSceneFolder *)local_c0.Value)->ChildFolders).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = pFVar10 + (longlong)iVar7 * 8;
    if (pFVar10 != pFVar2) {
      local_b0 = &local_c8;
      local_a8 = &local_c0.Value;
      do {
        local_c8 = *(UMovieSceneFolder **)pFVar10;
        TSet<TTuple<UMovieSceneFolder_*,UMovieSceneFolder_*>,TDefaultMapHashableKeyFuncs<UMovieSceneFolder_*,UMovieSceneFolder_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UMovieSceneFolder_*_const_&,UMovieSceneFolder_*_const_&>_>
                  ((TSet<TTuple<UMovieSceneFolder_*,UMovieSceneFolder_*>,TDefaultMapHashableKeyFuncs<UMovieSceneFolder_*,UMovieSceneFolder_*,0>,FDefaultSetAllocator>
                    *)local_98,&local_c0,(bool *)&local_b0);
        TraverseFolder(local_c8,(TMap<UMovieSceneFolder_*,UMovieSceneFolder_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieSceneFolder_*,UMovieSceneFolder_*,0>_>
                                 *)local_98);
        pFVar10 = pFVar10 + 8;
      } while (pFVar10 != pFVar2);
    }
  }
  local_d8 = param_1->FolderName;
  pFVar4 = (FName *)(param_3->AllocatorInstance).Data;
  if (((pFVar4 <= &local_d8) && (&local_d8 < pFVar4 + param_3->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = param_3->ArrayNum;
  if (iVar7 == param_3->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar7 + 1;
  *(FName *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_d8;
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (local_98._8_4_ != local_64) {
    FVar8 = (ForElementType<FSetElementId>)local_60;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_58;
    }
    lVar3 = (ulonglong)(local_50 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4;
    for (iVar7 = *(int *)(lVar3 + (longlong)FVar8); iVar7 != -1;
        iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x18 + 0x10)) {
      if (*(UMovieSceneFolder **)(local_98._0_8_ + (longlong)iVar7 * 0x18) == param_1) {
        FVar8 = (ForElementType<FSetElementId>)local_60;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_58;
        }
        iVar7 = *(int *)(lVar3 + (longlong)FVar8);
        pFVar10 = pFVar13;
        if (iVar7 == -1) goto LAB_146209ab4;
        goto LAB_146209a90;
      }
    }
  }
  goto LAB_146209cbb;
  while (iVar7 = *(int *)(pFVar10 + 0x10), pFVar10 = pFVar13, iVar7 != -1) {
LAB_146209a90:
    pFVar10 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar7 * 0x18);
    if (*(UMovieSceneFolder **)(local_98._0_8_ + (longlong)iVar7 * 0x18) == param_1) {
      if (pFVar10 != (FScriptContainerElement *)0x0) goto LAB_146209ade;
      break;
    }
  }
LAB_146209ab4:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_146209ade:
  uVar12 = *(ulonglong *)(pFVar10 + 8);
  if (uVar12 != 0) {
    while( true ) {
      local_d0 = *(undefined8 *)(uVar12 + 0x74);
      pFVar10 = (param_3->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar10 + (longlong)param_3->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == param_3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      param_3->ArrayNum = iVar7 + 1;
      memmove(pFVar10 + 8,pFVar10,(longlong)iVar7 << 3);
      *(undefined8 *)(param_3->AllocatorInstance).Data = local_d0;
      uVar9 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (local_98._8_4_ == local_64) break;
      FVar8 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = local_58;
      }
      lVar3 = (ulonglong)(local_50 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4;
      iVar7 = *(int *)(lVar3 + (longlong)FVar8);
      while( true ) {
        if (iVar7 == -1) goto LAB_146209cbb;
        if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x18) == uVar12) break;
        iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x18 + 0x10);
      }
      FVar8 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = local_58;
      }
      iVar7 = *(int *)(lVar3 + (longlong)FVar8);
      while (pFVar10 = pFVar13, iVar7 != -1) {
        pFVar10 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar7 * 0x18);
        if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x18) == uVar12) {
          if (pFVar10 != (FScriptContainerElement *)0x0) goto LAB_146209cae;
          break;
        }
        iVar7 = *(int *)(pFVar10 + 0x10);
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_146209cae:
      uVar12 = *(ulonglong *)(pFVar10 + 8);
      if (uVar12 == 0) break;
    }
  }
LAB_146209cbb:
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar7 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// ClearChildObjectBindings @ 14620b300

void __thiscall UMovieSceneFolder::ClearChildObjectBindings(UMovieSceneFolder *this)

{
  int *piVar1;
  
  piVar1 = &(this->ChildObjectBindings).ArrayMax;
  (this->ChildObjectBindings).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->ChildObjectBindings).AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearChildTracks @ 14620b340

void __thiscall UMovieSceneFolder::ClearChildTracks(UMovieSceneFolder *this)

{
  int *piVar1;
  
  piVar1 = &(this->ChildTracks).ArrayMax;
  (this->ChildTracks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ChildTracks).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindFolderContaining @ 146211610

UMovieSceneFolder * __thiscall
UMovieSceneFolder::FindFolderContaining(UMovieSceneFolder *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneFolder *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChildObjectBindings).ArrayNum;
  pFVar5 = (this->ChildObjectBindings).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ChildObjectBindings).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if ((((uint)((ulonglong)*(undefined8 *)(pFVar5 + 8) >> 0x20) == param_1->D &&
         (uint)((ulonglong)*(undefined8 *)pFVar5 >> 0x20) == param_1->B) &&
        (uint)*(undefined8 *)(pFVar5 + 8) == param_1->C) &&
        (uint)*(undefined8 *)pFVar5 == param_1->A) {
      return this;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar5 = (this->ChildFolders).AllocatorInstance.Data;
  iVar1 = (this->ChildFolders).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UMovieSceneFolder *)(*pcVar2)();
    return pUVar4;
  }
  pFVar6 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if (pFVar5 == pFVar6) {
      return (UMovieSceneFolder *)0x0;
    }
    pUVar4 = FindFolderContaining(*(UMovieSceneFolder **)pFVar5,param_1);
    if (pUVar4 != (UMovieSceneFolder *)0x0) break;
    pFVar5 = pFVar5 + 8;
  }
  return pUVar4;
}

// FindFolderContaining @ 146211710

UMovieSceneFolder * __thiscall
UMovieSceneFolder::FindFolderContaining(UMovieSceneFolder *this,UMovieSceneTrack *param_1)

{
  int iVar1;
  code *pcVar2;
  UMovieSceneFolder *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar5 = (this->ChildTracks).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)(this->ChildTracks).ArrayNum * 8;
  while( true ) {
    if (pFVar5 == pFVar4) {
      pFVar4 = (this->ChildFolders).AllocatorInstance.Data;
      iVar1 = (this->ChildFolders).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pUVar3 = (UMovieSceneFolder *)(*pcVar2)();
        return pUVar3;
      }
      pFVar5 = pFVar4 + (longlong)iVar1 * 8;
      while( true ) {
        if (pFVar4 == pFVar5) {
          return (UMovieSceneFolder *)0x0;
        }
        pUVar3 = FindFolderContaining(*(UMovieSceneFolder **)pFVar4,param_1);
        if (pUVar3 != (UMovieSceneFolder *)0x0) break;
        pFVar4 = pFVar4 + 8;
      }
      return pUVar3;
    }
    if (*(UMovieSceneTrack **)pFVar5 == (UMovieSceneTrack *)0x0) {
      bVar6 = param_1 == (UMovieSceneTrack *)0x0;
    }
    else {
      bVar6 = *(UMovieSceneTrack **)pFVar5 == param_1;
    }
    if (bVar6) break;
    pFVar5 = pFVar5 + 8;
  }
  return this;
}

// GetChildFolders @ 1462172c0

TArrayView<UMovieSceneFolder_*_const,int> * __thiscall
UMovieSceneFolder::GetChildFolders
          (UMovieSceneFolder *this,TArrayView<UMovieSceneFolder_*_const,int> *__return_storage_ptr__
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UMovieSceneFolder_*_const,int> *pTVar4;
  
  iVar1 = (this->ChildFolders).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (UMovieSceneFolder **)(this->ChildFolders).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UMovieSceneFolder_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetChildObjectBindings @ 146217330

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneFolder::GetChildObjectBindings(UMovieSceneFolder *this)

{
  return &this->ChildObjectBindings;
}

// GetChildTracks @ 146217340

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneFolder::GetChildTracks(UMovieSceneFolder *this)

{
  return (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)&this->ChildTracks;
}

// GetFolderName @ 1462188c0

FName __thiscall UMovieSceneFolder::GetFolderName(UMovieSceneFolder *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FolderName;
  return in_RDX;
}

// GetFolderWithPath @ 1462188e0

UMovieSceneFolder * __cdecl
UMovieSceneFolder::GetFolderWithPath
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<UMovieSceneFolder_*_const,int> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieSceneFolder *pUVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<UMovieSceneFolder_*_const,int> local_38;
  
  pFVar6 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMovieSceneFolder_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    local_38.DataPtr = param_3->DataPtr;
    local_38.ArrayNum = param_3->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
    pUVar3 = *(UMovieSceneFolder **)pFVar6;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    CalculateFolderPath(pUVar3,&local_38,&local_48);
    FVar4.Data = local_48.AllocatorInstance.Data;
    if ((local_48.ArrayNum == param_1->ArrayNum) &&
       (bVar5 = CompareItems<FName,int>
                          ((FName *)local_48.AllocatorInstance.Data,
                           (FName *)(param_1->AllocatorInstance).Data,local_48.ArrayNum), bVar5)) {
      if ((FName *)FVar4.Data != (FName *)0x0) {
        FMemory::Free(FVar4.Data);
      }
      return pUVar3;
    }
    if ((FName *)FVar4.Data != (FName *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    pFVar6 = pFVar6 + 8;
  }
  return (UMovieSceneFolder *)0x0;
}

// GetPrivateStaticClass @ 14621b9f0

UClass * __cdecl UMovieSceneFolder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneFolder",
               &Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton,
               StaticRegisterNativesUMovieSceneFolder,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneFolder>,
               InternalVTableHelperCtorCaller<UMovieSceneFolder>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton;
}

// MakeUniqueChildFolderName @ 146224090

FName __thiscall UMovieSceneFolder::MakeUniqueChildFolderName(UMovieSceneFolder *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ulonglong in_R8;
  ulonglong uVar8;
  undefined8 local_res8;
  
  iVar6 = (this->ChildFolders).ArrayNum;
  pFVar7 = (this->ChildFolders).AllocatorInstance.Data;
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar5 = (FName)(*pcVar3)();
    return FVar5;
  }
  uVar8 = in_R8 >> 0x20;
  pFVar1 = pFVar7 + (longlong)iVar6 * 8;
  bVar4 = false;
  if (pFVar7 == pFVar1) {
    *(ulonglong *)param_1 = in_R8;
  }
  else {
    do {
      uVar2 = *(ulonglong *)(*(longlong *)pFVar7 + 0x74);
      iVar6 = (int)(uVar2 >> 0x20);
      if ((int)in_R8 == (int)uVar2) {
        if (iVar6 < (int)uVar8) {
          iVar6 = (int)uVar8;
        }
        uVar8 = (ulonglong)(iVar6 + 1);
      }
      if (in_R8 == uVar2) {
        bVar4 = true;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1);
    local_res8._4_4_ = (undefined4)(in_R8 >> 0x20);
    if (bVar4) {
      local_res8._4_4_ = (undefined4)uVar8;
    }
    local_res8 = CONCAT44(local_res8._4_4_,(int)in_R8);
    *(undefined8 *)param_1 = local_res8;
  }
  return param_1;
}

// MakeUniqueChildFolderName @ 146224170

FName __cdecl
UMovieSceneFolder::MakeUniqueChildFolderName
          (FName param_1,TArrayView<UMovieSceneFolder_*_const,int> *param_2)

{
  longlong *plVar1;
  TArrayView<UMovieSceneFolder_*_const,int> *pTVar2;
  bool bVar3;
  int iVar4;
  longlong *in_R8;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 local_res10;
  
  plVar5 = (longlong *)*in_R8;
  bVar3 = false;
  uVar6 = (ulonglong)param_2 >> 0x20;
  plVar1 = plVar5 + (int)in_R8[1];
  if (plVar5 != plVar1) {
    local_res10._0_4_ = (int)param_2;
    do {
      pTVar2 = *(TArrayView<UMovieSceneFolder_*_const,int> **)(*plVar5 + 0x74);
      iVar4 = (int)((ulonglong)pTVar2 >> 0x20);
      if ((int)local_res10 == (int)pTVar2) {
        if (iVar4 < (int)uVar6) {
          iVar4 = (int)uVar6;
        }
        uVar6 = (ulonglong)(iVar4 + 1);
      }
      if (param_2 == pTVar2) {
        bVar3 = true;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    local_res10._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
    if (bVar3) {
      local_res10._4_4_ = (undefined4)uVar6;
    }
    *(undefined8 *)param_1 = local_res10;
    return param_1;
  }
  *(TArrayView<UMovieSceneFolder_*_const,int> **)param_1 = param_2;
  return param_1;
}

// PostLoad @ 146228800

void __thiscall UMovieSceneFolder::PostLoad(UMovieSceneFolder *this)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneFolder>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar7 = 0;
  if (0 < (this->ChildFolders).ArrayNum) {
    lVar8 = 0;
    pTVar2 = &this->ChildFolders;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (this->ChildFolders).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar8) == 0) {
        uVar5 = 0;
        if ((int)uVar7 < (this->ChildFolders).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 8;
        iVar6 = (this->ChildFolders).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
        }
        piVar1 = &(this->ChildFolders).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->ChildFolders).ArrayNum,
                   &(this->ChildFolders).ArrayMax);
      }
      else {
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      }
    } while ((int)uVar7 < (this->ChildFolders).ArrayNum);
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// RemoveChildFolder @ 14622f6f0

void __thiscall
UMovieSceneFolder::RemoveChildFolder(UMovieSceneFolder *this,UMovieSceneFolder *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UMovieSceneFolder *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UMovieSceneFolder *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneFolder *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ChildFolders).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->ChildFolders).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ChildFolders).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->ChildFolders).AllocatorInstance.Data;
    bVar4 = *(UMovieSceneFolder **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UMovieSceneFolder **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->ChildFolders).ArrayNum = iVar9;
  }
  return;
}

// RemoveChildObjectBinding @ 14622f8a0

void __thiscall UMovieSceneFolder::RemoveChildObjectBinding(UMovieSceneFolder *this,FGuid *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_>::Remove(&this->ChildObjectBindings,param_1);
  return;
}

// RemoveChildTrack @ 14622f8c0

void __thiscall
UMovieSceneFolder::RemoveChildTrack(UMovieSceneFolder *this,UMovieSceneTrack *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UMovieSceneTrack *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UMovieSceneTrack *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ChildTracks).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->ChildTracks).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ChildTracks).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->ChildTracks).AllocatorInstance.Data;
    bVar4 = *(UMovieSceneTrack **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UMovieSceneTrack **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->ChildTracks).ArrayNum = iVar9;
  }
  return;
}

// Serialize @ 146233bc0

/* WARNING: Removing unreachable block (ram,0x000146233e62) */

void __thiscall UMovieSceneFolder::Serialize(UMovieSceneFolder *this,FArchive *param_1)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FGuid *pFVar10;
  FScriptContainerElement *pFVar11;
  FGuid *pFVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_58;
  FGuid local_48;
  
  if ((param_1->field_0x28 & 1) == 0) {
    pTVar3 = &this->ChildObjectBindingStrings;
    DestructItems<FString,int>
              ((FString *)(pTVar3->AllocatorInstance).Data,
               (this->ChildObjectBindingStrings).ArrayNum);
    piVar1 = &(this->ChildObjectBindingStrings).ArrayMax;
    (this->ChildObjectBindingStrings).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
    iVar5 = (this->ChildObjectBindings).ArrayNum;
    pFVar10 = (FGuid *)(this->ChildObjectBindings).AllocatorInstance.Data;
    pFVar12 = pFVar10 + iVar5;
    while( true ) {
      if ((this->ChildObjectBindings).ArrayNum != iVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar10 == pFVar12) break;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar10,&local_58,Digits);
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->ChildObjectBindingStrings).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->ChildObjectBindingStrings).ArrayNum = iVar8 + 1;
      pFVar9 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_58.Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_58.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      pFVar10 = pFVar10 + 1;
    }
    UMovieSceneDecorationContainerObject::Serialize
              ((UMovieSceneDecorationContainerObject *)this,param_1);
  }
  else {
    UMovieSceneDecorationContainerObject::Serialize
              ((UMovieSceneDecorationContainerObject *)this,param_1);
    pTVar2 = &this->ChildObjectBindings;
    piVar1 = &(this->ChildObjectBindings).ArrayMax;
    (this->ChildObjectBindings).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar5 = (this->ChildObjectBindingStrings).ArrayNum;
    pFVar9 = (this->ChildObjectBindingStrings).AllocatorInstance.Data;
    pFVar11 = pFVar9 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((this->ChildObjectBindingStrings).ArrayNum != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar9 == pFVar11) break;
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
      FGuid::Parse((FString *)pFVar9,&local_48);
      pFVar10 = (FGuid *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar10 <= &local_48) && (&local_48 < pFVar10 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->ChildObjectBindings).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ChildObjectBindings).ArrayNum = iVar8 + 1;
      pFVar9 = pFVar9 + 0x10;
      pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar4 = local_48._0_8_;
      *(undefined8 *)(pFVar4 + 8) = local_48._8_8_;
    }
  }
  return;
}

// Serialize @ 146233ea0

void __thiscall
UMovieSceneFolder::Serialize(UMovieSceneFolder *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetFolderName @ 146234a30

void __thiscall UMovieSceneFolder::SetFolderName(UMovieSceneFolder *this,FName param_1)

{
  this->FolderName = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneFolder @ 146237be0

void __cdecl UMovieSceneFolder::StaticRegisterNativesUMovieSceneFolder(void)

{
  return;
}

