// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// StaticClass @ 1476d8e10

UClass * __cdecl UCollisionProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCollisionProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CollisionProfile",
               &Z_Registration_Info_UClass_UCollisionProfile.InnerSingleton,
               StaticRegisterNativesUCollisionProfile,0x178,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCollisionProfile>,
               InternalVTableHelperCtorCaller<UCollisionProfile>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCollisionProfile.InnerSingleton;
}

// UCollisionProfile @ 1476e8530

UCollisionProfile * __thiscall
UCollisionProfile::UCollisionProfile(UCollisionProfile *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UCollisionProfile__6B_;
  (this->Profiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Profiles).ArrayNum = 0;
  (this->Profiles).ArrayMax = 0;
  (this->DefaultChannelResponses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultChannelResponses).ArrayNum = 0;
  (this->DefaultChannelResponses).ArrayMax = 0;
  (this->EditProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditProfiles).ArrayNum = 0;
  (this->EditProfiles).ArrayMax = 0;
  (this->ProfileRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileRedirects).ArrayNum = 0;
  (this->ProfileRedirects).ArrayMax = 0;
  (this->CollisionChannelRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionChannelRedirects).ArrayNum = 0;
  (this->CollisionChannelRedirects).ArrayMax = 0;
  *(undefined8 *)&this->OnLoadProfileConfig = 0;
  *(undefined8 *)&(this->OnLoadProfileConfig).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadProfileConfig).field_0x10 = 0;
  *(undefined8 *)&this->ProfileRedirectsMap = 0;
  *(undefined8 *)&(this->ProfileRedirectsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProfileRedirectsMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnLoadProfileConfig).field_0x18 = 2;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x34 = 0;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ProfileRedirectsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x48 = 0;
  *(undefined8 *)&this->CollisionChannelRedirectsMap = 0;
  *(undefined8 *)&(this->CollisionChannelRedirectsMap).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionChannelRedirectsMap).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x34 = 0;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CollisionChannelRedirectsMap).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x48 = 0;
  (this->ChannelDisplayNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelDisplayNames).ArrayNum = 0;
  (this->ChannelDisplayNames).ArrayMax = 0;
  (this->ObjectTypeMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectTypeMapping).ArrayNum = 0;
  (this->ObjectTypeMapping).ArrayMax = 0;
  (this->TraceTypeMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceTypeMapping).ArrayNum = 0;
  (this->TraceTypeMapping).ArrayMax = 0;
  return this;
}

// UCollisionProfile @ 1476e8660

UCollisionProfile * __thiscall
UCollisionProfile::UCollisionProfile(UCollisionProfile *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UCollisionProfile__6B_;
  *(undefined8 *)&(this->OnLoadProfileConfig).field_0x18 = 2;
  (this->Profiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Profiles).ArrayNum = 0;
  (this->Profiles).ArrayMax = 0;
  (this->DefaultChannelResponses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultChannelResponses).ArrayNum = 0;
  (this->DefaultChannelResponses).ArrayMax = 0;
  (this->EditProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditProfiles).ArrayNum = 0;
  (this->EditProfiles).ArrayMax = 0;
  (this->ProfileRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileRedirects).ArrayNum = 0;
  (this->ProfileRedirects).ArrayMax = 0;
  (this->CollisionChannelRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionChannelRedirects).ArrayNum = 0;
  (this->CollisionChannelRedirects).ArrayMax = 0;
  *(undefined8 *)&this->OnLoadProfileConfig = 0;
  *(undefined8 *)&(this->OnLoadProfileConfig).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadProfileConfig).field_0x10 = 0;
  *(undefined8 *)&this->ProfileRedirectsMap = 0;
  *(undefined8 *)&(this->ProfileRedirectsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProfileRedirectsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProfileRedirectsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x48 = 0;
  *(undefined8 *)&this->CollisionChannelRedirectsMap = 0;
  *(undefined8 *)&(this->CollisionChannelRedirectsMap).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionChannelRedirectsMap).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x34 = 0;
  *(undefined8 *)&(this->CollisionChannelRedirectsMap).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x48 = 0;
  (this->ChannelDisplayNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelDisplayNames).ArrayNum = 0;
  (this->ChannelDisplayNames).ArrayMax = 0;
  (this->ObjectTypeMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectTypeMapping).ArrayNum = 0;
  (this->ObjectTypeMapping).ArrayMax = 0;
  (this->TraceTypeMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceTypeMapping).ArrayNum = 0;
  (this->TraceTypeMapping).ArrayMax = 0;
  ::FName::FName(local_res8,L"Collision");
  this->_padding_ = (longlong)local_res8[0];
  return this;
}

// ~UCollisionProfile @ 1476e9220

void __thiscall UCollisionProfile::~UCollisionProfile(UCollisionProfile *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UCollisionProfile__6B_;
  pFVar1 = (this->TraceTypeMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectTypeMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChannelDisplayNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CollisionChannelRedirectsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionChannelRedirectsMap);
  *(undefined4 *)&(this->ProfileRedirectsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ProfileRedirectsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProfileRedirectsMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoadProfileConfig).field_0x8,*(int *)&(this->OnLoadProfileConfig).field_0x10
            );
  pvVar2 = *(void **)&(this->OnLoadProfileConfig).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadProfileConfig);
  pFVar1 = (this->CollisionChannelRedirects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProfileRedirects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomProfile,int>
            ((FCustomProfile *)(this->EditProfiles).AllocatorInstance.Data,
             (this->EditProfiles).ArrayNum);
  pFVar1 = (this->EditProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultChannelResponses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCollisionResponseTemplate,int>
            ((FCollisionResponseTemplate *)(this->Profiles).AllocatorInstance.Data,
             (this->Profiles).ArrayNum);
  pFVar1 = (this->Profiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// AddChannelRedirect @ 1476eb370

void __thiscall
UCollisionProfile::AddChannelRedirect(UCollisionProfile *this,FName param_1,FName param_2)

{
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this_00;
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  uint *puVar12;
  FName local_res10;
  int local_res18;
  ulonglong local_res20;
  undefined8 local_a8;
  undefined8 uStack_a0;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  if (param_1 != param_2) {
    this_00 = &this->CollisionChannelRedirectsMap;
    local_res10 = param_1;
    uVar6 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    uVar6 = uVar6 + param_1.Number;
    if (*(int *)&(this->CollisionChannelRedirectsMap).field_0x8 !=
        *(int *)&(this->CollisionChannelRedirectsMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->CollisionChannelRedirectsMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->CollisionChannelRedirectsMap).field_0x38;
      }
      iVar11 = *(int *)(puVar10 +
                       (ulonglong)
                       (*(int *)&(this->CollisionChannelRedirectsMap).field_0x48 - 1U & uVar6) * 4);
      if (iVar11 != -1) {
        do {
          lVar9 = *(longlong *)this_00 + (longlong)iVar11 * 0x18;
          if (*(FName *)(*(longlong *)this_00 + (longlong)iVar11 * 0x18) == local_res10) {
            if (lVar9 != 0) {
              pFVar8 = (FName *)(lVar9 + 8);
              goto LAB_1476eb42e;
            }
            break;
          }
          iVar11 = *(int *)(lVar9 + 0x10);
        } while (iVar11 != -1);
      }
    }
    pFVar8 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::EmplaceByHash<FName_const_&>
                       ((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)this_00,uVar6,&local_res10);
LAB_1476eb42e:
    *pFVar8 = param_2;
    piVar1 = &(this->CollisionChannelRedirects).ArrayMax;
    iVar11 = 0;
    (this->CollisionChannelRedirects).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->CollisionChannelRedirects).AllocatorInstance,0,piVar1);
    }
    iVar7 = *(int *)&(this->CollisionChannelRedirectsMap).field_0x28;
    local_88 = &(this->CollisionChannelRedirectsMap).field_0x10;
    local_res20 = CONCAT44(local_res20._4_4_,1);
    iStack_90 = 0;
    local_78 = 0;
    iStack_7c = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->CollisionChannelRedirectsMap).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_88;
      }
      uVar6 = *puVar12;
      while (uVar6 == 0) {
        lVar9 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1476eb4f1;
        uVar6 = puVar12[lVar9 + 1];
      }
      local_res20 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = local_res20 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iStack_7c = local_78 + -1 + local_res18;
      if (iVar7 < iStack_7c) {
        iStack_7c = iVar7;
      }
    }
LAB_1476eb4f1:
    uStack_8c = (undefined4)local_res20;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    uStack_80 = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    local_98 = this_00;
    iStack_74 = iStack_7c;
    local_68 = this_00;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
    TStack_60.CurrentBitIndex = iStack_7c;
    if (iStack_7c < *(int *)&(this->CollisionChannelRedirectsMap).field_0x28) {
      do {
        local_a8 = *(undefined8 *)
                    (*(longlong *)local_68 + (longlong)TStack_60.CurrentBitIndex * 0x18);
        uStack_a0 = *(undefined8 *)
                     (*(longlong *)local_68 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
        pFVar3 = (this->CollisionChannelRedirects).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (this->CollisionChannelRedirects).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&(this->CollisionChannelRedirects).AllocatorInstance,piVar1);
        }
        (this->CollisionChannelRedirects).ArrayNum = iVar7 + 1;
        pFVar3 = (this->CollisionChannelRedirects).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar3 = local_a8;
        *(undefined8 *)(pFVar3 + 8) = uStack_a0;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    for (; (-1 < iVar11 && (iVar11 < (this->Profiles).ArrayNum)); iVar11 = iVar11 + 1) {
      if ((iVar11 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SaveCustomResponses(this,(FCollisionResponseTemplate *)
                               ((this->Profiles).AllocatorInstance.Data + (longlong)iVar11 * 0x48));
    }
    DestructItems<FString,int>((FString *)0x0,0);
  }
  return;
}

// AddProfileRedirect @ 1476ec530

void __thiscall
UCollisionProfile::AddProfileRedirect(UCollisionProfile *this,FName param_1,FName param_2)

{
  TArray<FRedirector,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this_00;
  ulonglong uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  FName local_res10;
  int local_res18;
  undefined8 local_98;
  undefined8 uStack_90;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  if (param_1 != param_2) {
    this_00 = &this->ProfileRedirectsMap;
    local_res10 = param_1;
    uVar8 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    uVar8 = uVar8 + param_1.Number;
    if (*(int *)&(this->ProfileRedirectsMap).field_0x8 !=
        *(int *)&(this->ProfileRedirectsMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->ProfileRedirectsMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->ProfileRedirectsMap).field_0x38;
      }
      iVar12 = *(int *)(puVar11 +
                       (ulonglong)(*(int *)&(this->ProfileRedirectsMap).field_0x48 - 1U & uVar8) * 4
                       );
      if (iVar12 != -1) {
        do {
          lVar10 = *(longlong *)this_00 + (longlong)iVar12 * 0x18;
          if (*(FName *)(*(longlong *)this_00 + (longlong)iVar12 * 0x18) == local_res10) {
            if (lVar10 != 0) {
              pFVar9 = (FName *)(lVar10 + 8);
              goto LAB_1476ec5ee;
            }
            break;
          }
          iVar12 = *(int *)(lVar10 + 0x10);
        } while (iVar12 != -1);
      }
    }
    pFVar9 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::EmplaceByHash<FName_const_&>
                       ((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)this_00,uVar8,&local_res10);
LAB_1476ec5ee:
    *pFVar9 = param_2;
    iVar12 = 0;
    pTVar1 = &this->ProfileRedirects;
    piVar2 = &(this->ProfileRedirects).ArrayMax;
    (this->ProfileRedirects).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    iVar4 = *(int *)&(this->ProfileRedirectsMap).field_0x28;
    local_78 = &(this->ProfileRedirectsMap).field_0x10;
    uStack_7c = 1;
    local_68 = 0;
    iStack_6c = 0;
    if (iVar4 != 0) {
      puVar13 = *(uint **)&(this->ProfileRedirectsMap).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_78;
      }
      uVar8 = *puVar13;
      local_68 = 0;
      while (uVar8 == 0) {
        lVar10 = (longlong)iVar12;
        local_68 = local_68 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_6c = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1476ec69e;
        uVar8 = puVar13[lVar10 + 1];
      }
      uStack_7c = -uVar8 & uVar8;
      uVar3 = (ulonglong)uStack_7c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      iStack_6c = local_68 + -1 + local_res18;
      if (iVar4 < iStack_6c) {
        iStack_6c = iVar4;
      }
    }
LAB_1476ec69e:
    TStack_50._padding_ = CONCAT44(uStack_7c,iVar12);
    uStack_70 = 0xffffffff;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50._28_4_ = iStack_6c;
    TStack_50.BaseBitIndex = local_68;
    local_88 = this_00;
    iStack_80 = iVar12;
    iStack_64 = iStack_6c;
    local_58 = this_00;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
    TStack_50.CurrentBitIndex = iStack_6c;
    if (iStack_6c < *(int *)&(this->ProfileRedirectsMap).field_0x28) {
      do {
        local_98 = *(undefined8 *)
                    (*(longlong *)local_58 + (longlong)TStack_50.CurrentBitIndex * 0x18);
        uStack_90 = *(undefined8 *)
                     (*(longlong *)local_58 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 < pFVar5 + (longlong)*piVar2 * 0x10)) &&
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
        iVar12 = (this->ProfileRedirects).ArrayNum;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->ProfileRedirects).ArrayNum = iVar12 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(undefined8 *)pFVar5 = local_98;
        *(undefined8 *)(pFVar5 + 8) = uStack_90;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
    DestructItems<FString,int>((FString *)0x0,0);
  }
  return;
}

// CheckRedirect @ 1476f72b0

bool __thiscall
UCollisionProfile::CheckRedirect
          (UCollisionProfile *this,FName param_1,FBodyInstance *param_2,
          FCollisionResponseTemplate *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  
  bVar2 = FBodyInstance::IsValidCollisionProfileName(param_1);
  if ((!bVar2) ||
     (pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)&this->ProfileRedirectsMap,param_1), pFVar4 == (FName *)0x0)) {
    return false;
  }
  param_2->CollisionProfileName = *pFVar4;
  if ((*pFVar4 != (FName)0x0) &&
     ((bVar2 = FindProfileData(this,&this->Profiles,*pFVar4,param_3), !bVar2 &&
      (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("bSuccessfullyFoundProfileData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\CollisionProfile.cpp"
                          ,0x98,L""), bVar2)))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// ConvertToCollisionChannel @ 1476f9550

ECollisionChannel __thiscall
UCollisionProfile::ConvertToCollisionChannel(UCollisionProfile *this,bool param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ECollisionChannel EVar3;
  uint uVar4;
  
  if (-1 < param_2) {
    if (param_1) {
      if (param_2 < (this->TraceTypeMapping).ArrayNum) {
        uVar4 = 0;
        if (param_2 < (this->TraceTypeMapping).ArrayNum) {
          uVar4 = (uint)~param_2 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
        }
        return *(ECollisionChannel *)
                ((this->TraceTypeMapping).AllocatorInstance.Data + (longlong)param_2 * 4);
      }
    }
    else if (param_2 < (this->ObjectTypeMapping).ArrayNum) {
      uVar4 = 0;
      if (param_2 < (this->ObjectTypeMapping).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          EVar3 = (*pcVar1)();
          return EVar3;
        }
      }
      return *(ECollisionChannel *)
              ((this->ObjectTypeMapping).AllocatorInstance.Data + (longlong)param_2 * 4);
    }
  }
  return ECC_MAX;
}

// ConvertToObjectType @ 1476f9660

EObjectTypeQuery __thiscall
UCollisionProfile::ConvertToObjectType(UCollisionProfile *this,ECollisionChannel param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  EObjectTypeQuery EVar4;
  undefined1 local_res10 [8];
  
  if ((int)param_1 < 0x21) {
    pFVar3 = (this->ObjectTypeMapping).AllocatorInstance.Data;
    EVar4 = ObjectTypeQuery1;
    iVar2 = (this->ObjectTypeMapping).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ObjectTypeMapping).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_ECollisionChannel_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) goto LAB_1476f96be;
      if (*(ECollisionChannel *)pFVar3 == param_1) break;
      EVar4 = EVar4 + ObjectTypeQuery2;
      pFVar3 = pFVar3 + 4;
    }
  }
  else {
LAB_1476f96be:
    EVar4 = ObjectTypeQuery_MAX;
  }
  return EVar4;
}

// ConvertToTraceType @ 1476f96f0

ETraceTypeQuery __thiscall
UCollisionProfile::ConvertToTraceType(UCollisionProfile *this,ECollisionChannel param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ETraceTypeQuery EVar4;
  undefined1 local_res10 [8];
  
  if ((int)param_1 < 0x21) {
    pFVar3 = (this->TraceTypeMapping).AllocatorInstance.Data;
    EVar4 = TraceTypeQuery1;
    iVar2 = (this->TraceTypeMapping).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->TraceTypeMapping).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_ECollisionChannel_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) goto LAB_1476f974e;
      if (*(ECollisionChannel *)pFVar3 == param_1) break;
      EVar4 = EVar4 + TraceTypeQuery2;
      pFVar3 = pFVar3 + 4;
    }
  }
  else {
LAB_1476f974e:
    EVar4 = TraceTypeQuery_MAX;
  }
  return EVar4;
}

// FillProfileData @ 147704190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCollisionProfile::FillProfileData
          (UCollisionProfile *this,
          TArray<FCollisionResponseTemplate,TSizedDefaultAllocator<32>_> *param_1,UEnum *param_2,
          TArray<FCustomProfile,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  UEnum *pUVar7;
  TArray<FCustomProfile,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  FCollisionResponseTemplate *this_00;
  undefined1 local_res10 [8];
  UEnum *local_res18;
  TArray<FCustomProfile,TSizedDefaultAllocator<32>_> *local_res20;
  uint local_a8;
  longlong local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  uVar19 = param_1->ArrayNum - 1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (-1 < (int)uVar19) {
    lVar18 = (longlong)(int)uVar19;
    do {
      uVar13 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (param_1->AllocatorInstance).Data;
      uVar13 = uVar19 - 1;
      lVar1 = lVar18 * 0x48;
      if (-1 < (int)uVar13) {
        lVar17 = (longlong)(int)uVar13 * 0x48;
        do {
          uVar5 = ~uVar13 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar13 < param_1->ArrayNum) {
            uVar10 = uVar5;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)(pFVar14 + lVar1);
          if ((lVar3 != 0) && (lVar3 == *(longlong *)((param_1->AllocatorInstance).Data + lVar17)))
          {
            uVar10 = 0;
            if ((int)uVar13 < param_1->ArrayNum) {
              uVar10 = uVar5;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar15 = (param_1->AllocatorInstance).Data + lVar17;
            if (*(void **)(pFVar15 + 0x38) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar15 + 0x38));
            }
            iVar11 = param_1->ArrayNum + ~uVar13;
            if (iVar11 != 0) {
              memmove(pFVar15,pFVar15 + 0x48,(longlong)iVar11 * 0x48);
            }
            param_1->ArrayNum = param_1->ArrayNum + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
            uVar19 = uVar19 - 1;
            lVar18 = lVar18 + -1;
            uVar13 = uVar13 - 1;
            lVar17 = lVar17 + -0x48;
          }
          lVar17 = lVar17 + -0x48;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
      lVar18 = lVar18 + -1;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
  }
  iVar11 = param_1->ArrayNum;
  local_a8 = 0;
  if (0 < iVar11) {
    local_98 = 0;
    do {
      uVar13 = ~local_a8 >> 0x1f;
      uVar19 = 0;
      if ((int)local_a8 < iVar11) {
        uVar19 = uVar13;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (FCollisionResponseTemplate *)((param_1->AllocatorInstance).Data + local_98);
      if (this_00->ObjectTypeName == (FName)0x0) {
LAB_1477044a1:
        pUVar7 = local_res18;
        uVar6 = FCollisionResponseContainer::DefaultResponseContainer.field0_0x0._8_8_;
        *(undefined8 *)&(this_00->ResponseToChannels).field0_0x0 =
             FCollisionResponseContainer::DefaultResponseContainer.field0_0x0._0_8_;
        *(undefined8 *)((longlong)&(this_00->ResponseToChannels).field0_0x0 + 8) = uVar6;
        uVar6 = FCollisionResponseContainer::DefaultResponseContainer.field0_0x0._24_8_;
        *(undefined8 *)((longlong)&(this_00->ResponseToChannels).field0_0x0 + 0x10) =
             FCollisionResponseContainer::DefaultResponseContainer.field0_0x0._16_8_;
        *(undefined8 *)((longlong)&(this_00->ResponseToChannels).field0_0x0 + 0x18) = uVar6;
        LoadCustomResponses(this,this_00,local_res18,&this_00->CustomResponses);
        pTVar8 = local_res20;
        uVar19 = 0;
        while( true ) {
          if (((int)uVar19 < 0) || (pTVar8->ArrayNum <= (int)uVar19)) goto LAB_14770478e;
          if (((int)uVar19 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(FName *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x18) ==
              this_00->Name) break;
          uVar19 = uVar19 + 1;
        }
        uVar13 = 0;
        if ((int)uVar19 < pTVar8->ArrayNum) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LoadCustomResponses(this,this_00,pUVar7,
                            (TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *)
                            ((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x18 + 8));
      }
      else {
        iVar11 = ReturnContainerIndexFromChannelName(this,&this_00->ObjectTypeName);
        if (iVar11 == -1) {
          if (2 < (byte)LogCollisionProfile._0_1_) {
            ::FName::ToString(&this_00->ObjectTypeName,&local_58);
            ::FName::ToString((FName *)this_00,&local_68);
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
            FVar12.Data = local_58.Data.AllocatorInstance.Data;
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
              FVar12.Data = local_58.Data.AllocatorInstance.Data;
            }
            goto LAB_1477045d8;
          }
        }
        else {
          if (iVar11 < 0x21) {
            iVar16 = 0;
            pFVar15 = (this->ObjectTypeMapping).AllocatorInstance.Data;
            iVar2 = (this->ObjectTypeMapping).ArrayNum;
            pFVar14 = pFVar15 + (longlong)iVar2 * 4;
            while( true ) {
              if ((this->ObjectTypeMapping).ArrayNum != iVar2) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<enum_ECollisionChannel_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (pFVar15 == pFVar14) goto LAB_147704566;
              if (*(int *)pFVar15 == iVar11) break;
              iVar16 = iVar16 + 1;
              pFVar15 = pFVar15 + 4;
            }
            if (iVar16 != 0x20) {
              (this_00->ObjectType).Value = (uchar)iVar11;
              goto LAB_1477044a1;
            }
          }
LAB_147704566:
          if (2 < (byte)LogCollisionProfile._0_1_) {
            ::FName::ToString(&this_00->ObjectTypeName,&local_78);
            ::FName::ToString((FName *)this_00,&local_88);
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
            FVar12.Data = local_78.Data.AllocatorInstance.Data;
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
              FVar12.Data = local_78.Data.AllocatorInstance.Data;
            }
LAB_1477045d8:
            if (FVar12.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar12.Data);
            }
          }
        }
        uVar19 = 0;
        if ((int)local_a8 < param_1->ArrayNum) {
          uVar19 = uVar13;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (param_1->AllocatorInstance).Data + local_98;
        if (*(void **)(pFVar14 + 0x38) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar14 + 0x38));
        }
        iVar11 = param_1->ArrayNum + ~local_a8;
        if (iVar11 != 0) {
          memmove(pFVar14,pFVar14 + 0x48,(longlong)iVar11 * 0x48);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        local_a8 = local_a8 - 1;
        local_98 = local_98 + -0x48;
      }
LAB_14770478e:
      iVar11 = param_1->ArrayNum;
      local_a8 = local_a8 + 1;
      local_98 = local_98 + 0x48;
    } while ((int)local_a8 < iVar11);
  }
  return;
}

// FindProfileData @ 147704e60

bool __thiscall
UCollisionProfile::FindProfileData
          (UCollisionProfile *this,
          TArray<FCollisionResponseTemplate,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FCollisionResponseTemplate *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 != (FName)0x0) {
    for (uVar6 = 0; (-1 < (int)uVar6 && ((int)uVar6 < param_1->ArrayNum)); uVar6 = uVar6 + 1) {
      if (((int)uVar6 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(FName *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x48) == param_2) {
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pFVar5 = (FName *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x48);
        param_3->Name = *pFVar5;
        (param_3->CollisionEnabled).Value = (uchar)pFVar5[1].ComparisonIndex.Value;
        (param_3->ObjectType).Value = *(uchar *)((longlong)&pFVar5[1].ComparisonIndex.Value + 1);
        param_3->bCanModify = *(bool *)((longlong)&pFVar5[1].ComparisonIndex.Value + 2);
        uVar2 = *(undefined8 *)((longlong)&pFVar5[2].ComparisonIndex.Value + 3);
        *(undefined8 *)&(param_3->ResponseToChannels).field0_0x0 =
             *(undefined8 *)((longlong)&pFVar5[1].ComparisonIndex.Value + 3);
        *(undefined8 *)((longlong)&(param_3->ResponseToChannels).field0_0x0 + 8) = uVar2;
        uVar2 = *(undefined8 *)((longlong)&pFVar5[4].ComparisonIndex.Value + 3);
        *(undefined8 *)((longlong)&(param_3->ResponseToChannels).field0_0x0 + 0x10) =
             *(undefined8 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 3);
        *(undefined8 *)((longlong)&(param_3->ResponseToChannels).field0_0x0 + 0x18) = uVar2;
        param_3->ObjectTypeName = *(FName *)&pFVar5[5].Number;
        TArray<FResponseChannel,TSizedDefaultAllocator<32>_>::operator=
                  (&param_3->CustomResponses,
                   (TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *)(pFVar5 + 7));
        return true;
      }
    }
  }
  return false;
}

// Get @ 147706780

UCollisionProfile * __cdecl UCollisionProfile::Get(void)

{
  UCollisionProfile *this;
  UClass *this_00;
  
  this_00 = StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (UCollisionProfile *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (::bInitialized == false) {
    LoadProfileConfig(this,false);
    ::bInitialized = true;
  }
  return this;
}

// GetChannelAndResponseParams @ 147706ed0

bool __cdecl
UCollisionProfile::GetChannelAndResponseParams
          (FName param_1,ECollisionChannel *param_2,FCollisionResponseParams *param_3)

{
  UCollisionProfile *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *this_00;
  FName *pFVar4;
  FCollisionResponseContainer *this_01;
  FCollisionResponseTemplate local_98;
  FCollisionResponseContainer local_48;
  FCollisionResponseContainer local_28;
  
  this_00 = StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (UCollisionProfile *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (::bInitialized == false) {
    LoadProfileConfig(this,false);
    ::bInitialized = true;
  }
  if (this == (UCollisionProfile *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CollisionProfile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\CollisionProfile.cpp"
                       ,0x65,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_98.bCanModify = true;
  local_98.Name.ComparisonIndex.Value = 0;
  local_98.Name.Number = 0;
  local_98.CollisionEnabled.Value = '\0';
  local_98.ObjectType.Value = '\0';
  FCollisionResponseContainer::FCollisionResponseContainer(&local_98.ResponseToChannels);
  local_98.ObjectTypeName.ComparisonIndex.Value = 0;
  local_98.ObjectTypeName.Number = 0;
  local_98.CustomResponses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.CustomResponses.ArrayNum = 0;
  local_98.CustomResponses.ArrayMax = 0;
  if (param_1 == (FName)0x0) {
LAB_147706fad:
    pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)&this->ProfileRedirectsMap,param_1);
    if ((pFVar4 != (FName *)0x0) && (*pFVar4 != (FName)0x0)) {
      bVar2 = FindProfileData(this,&this->Profiles,*pFVar4,&local_98);
      if (bVar2) {
        this_01 = &local_28;
        goto LAB_147706fe5;
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = FindProfileData(this,&this->Profiles,param_1,&local_98);
    if (!bVar2) goto LAB_147706fad;
    this_01 = &local_48;
LAB_147706fe5:
    *param_2 = (uint)local_98.ObjectType.Value;
    FCollisionResponseContainer::FCollisionResponseContainer(this_01);
    bVar2 = true;
    *(undefined8 *)&(param_3->CollisionResponse).field0_0x0 =
         local_98.ResponseToChannels.field0_0x0._0_8_;
    *(undefined8 *)((longlong)&(param_3->CollisionResponse).field0_0x0 + 8) =
         local_98.ResponseToChannels.field0_0x0._8_8_;
    *(undefined8 *)((longlong)&(param_3->CollisionResponse).field0_0x0 + 0x10) =
         local_98.ResponseToChannels.field0_0x0._16_8_;
    *(undefined8 *)((longlong)&(param_3->CollisionResponse).field0_0x0 + 0x18) =
         local_98.ResponseToChannels.field0_0x0._24_8_;
  }
  if (local_98.CustomResponses.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.CustomResponses.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14770a2b0

UClass * __cdecl UCollisionProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCollisionProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CollisionProfile",
               &Z_Registration_Info_UClass_UCollisionProfile.InnerSingleton,
               StaticRegisterNativesUCollisionProfile,0x178,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCollisionProfile>,
               InternalVTableHelperCtorCaller<UCollisionProfile>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCollisionProfile.InnerSingleton;
}

// GetProfileByIndex @ 14770a370

FCollisionResponseTemplate * __thiscall
UCollisionProfile::GetProfileByIndex(UCollisionProfile *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCollisionResponseTemplate *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Profiles).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Profiles).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCollisionResponseTemplate *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FCollisionResponseTemplate *)
           ((this->Profiles).AllocatorInstance.Data + (longlong)param_1 * 0x48);
  }
  return (FCollisionResponseTemplate *)0x0;
}

// GetProfileNames @ 14770a400

void __cdecl
UCollisionProfile::GetProfileNames(TArray<TSharedPtr<FName,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  UCollisionProfile *this;
  TSharedPtr<FName,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *this_00;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  FName *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  TRawPtrProxy<FName> local_res10;
  TSharedPtr<FName,1> local_38;
  
  this_00 = StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (UCollisionProfile *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (::bInitialized == false) {
    LoadProfileConfig(this,false);
    ::bInitialized = true;
  }
  if ((this == (UCollisionProfile *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CollisionProfile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\CollisionProfile.cpp"
                         ,0x53,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = (this->Profiles).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  DestructItems<TSharedPtr<FName,1>,int>
            ((TSharedPtr<FName,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  uVar9 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar12 = uVar9;
  if (0 < (int)uVar2) {
    do {
      pFVar10 = (FName *)0x0;
      uVar11 = (uint)uVar9;
      if ((int)uVar11 < (this->Profiles).ArrayNum) {
        uVar6 = 0;
        if ((int)uVar11 < (this->Profiles).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = (FName *)((this->Profiles).AllocatorInstance.Data + uVar12);
        if (pFVar10 == (FName *)0x0) goto LAB_14770a539;
      }
      else {
LAB_14770a539:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProfileTemplate",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\CollisionProfile.cpp"
                           ,0x5c,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_res10.Object = ::operator_new(8);
      if (local_res10.Object == (FName *)0x0) {
        local_res10.Object = (FName *)0x0;
      }
      else {
        *local_res10.Object = *pFVar10;
      }
      TSharedPtr<FName,1>::TSharedPtr<FName,1><FName>(&local_38,&local_res10);
      pTVar3 = (TSharedPtr<FName,1> *)(param_1->AllocatorInstance).Data;
      if (((pTVar3 <= &local_38) && (&local_38 < pTVar3 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(FName **)pFVar8 = local_38.Object;
      *(TReferenceControllerBase<1> **)(pFVar8 + 8) =
           local_38.SharedReferenceCount.ReferenceController;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_38.Object = (FName *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar9 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar12 + 0x48;
    } while ((int)(uVar11 + 1) < (int)uVar2);
  }
  return;
}

// GetProfileTemplate @ 14770a6a0

bool __thiscall
UCollisionProfile::GetProfileTemplate
          (UCollisionProfile *this,FName param_1,FCollisionResponseTemplate *param_2)

{
  bool bVar1;
  
  if (param_1 != (FName)0x0) {
    bVar1 = FindProfileData(this,&this->Profiles,param_1,param_2);
    return bVar1;
  }
  return false;
}

// LoadCustomResponses @ 1477189d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UCollisionProfile::LoadCustomResponses
          (UCollisionProfile *this,FCollisionResponseTemplate *param_1,UEnum *param_2,
          TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *param_3)

{
  FName *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_48;
  FString local_38;
  
  iVar5 = 0;
  iVar3 = iVar5;
  while( true ) {
    if ((iVar5 < 0) || (param_3->ArrayNum <= iVar5)) {
      return (int)(iVar3 == param_3->ArrayNum);
    }
    if ((iVar5 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    this_00 = (FName *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 0xc);
    iVar4 = ReturnContainerIndexFromChannelName(this,this_00);
    if (iVar4 == -1) {
      if (2 < (byte)LogCollisionProfile._0_1_) {
        ::FName::ToString(this_00,&local_38);
        ::FName::ToString(&param_1->Name,&local_48);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      iVar5 = iVar5 + 1;
    }
    else {
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 1;
      (param_1->ResponseToChannels).field0_0x0.EnumArray[iVar4] =
           (uchar)this_00[1].ComparisonIndex.Value;
    }
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

// LoadProfileConfig @ 147718b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UCollisionProfile::LoadProfileConfig(UCollisionProfile *this,bool param_1)

{
  TArray<FCustomChannelSetup,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  void *pvVar9;
  FName FVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  code *pcVar13;
  FField *pFVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  UScriptStruct *pUVar20;
  UEnum *pUVar21;
  UEnum *pUVar22;
  FName *pFVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  undefined1 *puVar27;
  int iVar28;
  TSparseSetElement<TTuple<FName,FName>_> *pTVar29;
  uint uVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  TArray<ECollisionChannel,TSizedDefaultAllocator<32>_> *pTVar34;
  TSparseSetElement<TTuple<FName,FName>_> *pTVar35;
  uint uVar36;
  TArray<ECollisionChannel,TSizedDefaultAllocator<32>_> *pTVar37;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  int local_res20 [2];
  uint local_218;
  uint local_214;
  uint local_210 [2];
  longlong local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  UEnum *local_1e0;
  FName local_1d8;
  TFieldIterator<FField> local_1d0;
  FString local_1b8;
  FString local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  FName local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  FString local_160;
  FSparseArrayAllocationInfo local_150;
  FCollisionResponseTemplate local_138;
  FDestructionSentinel local_e8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FName local_40;
  
  FConfigCacheIni::GetSection(GConfig,L"/Script/Engine.CollisionProfile",false,&GEngineIni);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnLoadProfileConfig,
             (FWriteAccessScope *)&local_e8);
  puVar12 = &(this->OnLoadProfileConfig).field_0x1c;
  *(int *)puVar12 = *(int *)puVar12 + 1;
  bVar17 = false;
  iVar28 = *(int *)&(this->OnLoadProfileConfig).field_0x10 + -1;
  if (-1 < iVar28) {
    lVar31 = (longlong)iVar28 << 4;
    bVar17 = false;
    do {
      if ((*(int *)&(this->OnLoadProfileConfig).field_0x10 <= iVar28) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar33 = *(longlong *)&(this->OnLoadProfileConfig).field_0x8;
      if (((*(int *)(lVar31 + 8 + lVar33) == 0) ||
          (plVar7 = *(longlong **)(lVar31 + lVar33), plVar7 == (longlong *)0x0)) ||
         (cVar16 = (**(code **)(*plVar7 + 0x68))(), cVar16 == '\0')) {
        bVar17 = true;
      }
      lVar31 = lVar31 + -0x10;
      iVar28 = iVar28 + -1;
    } while (-1 < iVar28);
  }
  puVar12 = &(this->OnLoadProfileConfig).field_0x1c;
  *(int *)puVar12 = *(int *)puVar12 + -1;
  if (bVar17) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnLoadProfileConfig,
               false);
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  for (iVar28 = 0; (-1 < iVar28 && (iVar28 < (this->Profiles).ArrayNum)); iVar28 = iVar28 + 1) {
    if (*(FName *)((this->Profiles).AllocatorInstance.Data + (longlong)iVar28 * 0x48) ==
        CustomCollisionProfileName) {
      if (1 < (byte)LogCollisionProfile._0_1_) {
        ::FName::ToString(&CustomCollisionProfileName,&local_50);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      if (((this->Profiles).ArrayNum <= iVar28) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar8 = (this->Profiles).AllocatorInstance.Data;
      pFVar32 = pFVar8 + (longlong)iVar28 * 0x48;
      pvVar9 = *(void **)(pFVar8 + (longlong)iVar28 * 0x48 + 0x38);
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
      iVar18 = ((this->Profiles).ArrayNum - iVar28) + -1;
      if (iVar18 != 0) {
        memmove(pFVar32,pFVar32 + 0x48,(longlong)iVar18 * 0x48);
      }
      iVar18 = (this->Profiles).ArrayNum + -1;
      (this->Profiles).ArrayNum = iVar18;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,&(this->Profiles).AllocatorInstance,iVar18,&(this->Profiles).ArrayMax);
    }
  }
  ::FString::FString(&local_60,L"EngineTraceChannel");
  ::FString::FString(&local_70,L"GameTraceChannel");
  local_1e0 = StaticEnum<enum_ECollisionChannel>();
  if ((local_1e0 == (UEnum *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Enum",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\CollisionProfile.cpp"
                          ,0x12a,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pUVar20 = FCollisionResponseContainer::StaticStruct();
  if ((pUVar20 == (UScriptStruct *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Struct",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\CollisionProfile.cpp"
                          ,300,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar25 = (ulonglong)_tls_index;
  lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8);
  if ((*(int *)(lVar31 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&DisplayNameKey,L"DisplayName");
    atexit(`UCollisionProfile::LoadProfileConfig'::__l2::
           _dynamic_atexit_destructor_for__DisplayNameKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar31 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&ScriptNameKey,L"ScriptName");
    atexit(`UCollisionProfile::LoadProfileConfig'::__l2::
           _dynamic_atexit_destructor_for__ScriptNameKey__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar31 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&TraceType,L"TraceQuery");
    atexit(`UCollisionProfile::LoadProfileConfig'::__l2::_dynamic_atexit_destructor_for__TraceType__
          );
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(lVar31 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FString::FString(&TraceValue,L"1");
    atexit(`UCollisionProfile::LoadProfileConfig'::__l2::
           _dynamic_atexit_destructor_for__TraceValue__);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x9d4c) < ::_TSS4)
     && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FString::FString(&HiddenMeta,L"Hidden");
    atexit(`UCollisionProfile::LoadProfileConfig'::__l2::
           _dynamic_atexit_destructor_for__HiddenMeta__);
    _Init_thread_footer(&::_TSS4);
  }
  uVar36 = (local_1e0->Names).NumValues;
  lVar31 = (longlong)(int)uVar36;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
  }
  piVar2 = &(this->ChannelDisplayNames).ArrayMax;
  piVar3 = &(this->ChannelDisplayNames).ArrayNum;
  *piVar3 = 0;
  if (*piVar2 != uVar36) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar36,&(this->ChannelDisplayNames).AllocatorInstance,0,piVar2);
  }
  iVar28 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,4,uVar36,&(this->ChannelDisplayNames).AllocatorInstance,piVar3,piVar2);
  memset((this->ChannelDisplayNames).AllocatorInstance.Data + (longlong)iVar28 * 8,0,lVar31 << 3);
  piVar2 = &(this->TraceTypeMapping).ArrayMax;
  (this->TraceTypeMapping).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TraceTypeMapping).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->ObjectTypeMapping).ArrayMax;
  (this->ObjectTypeMapping).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ObjectTypeMapping).AllocatorInstance,0,piVar2);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x9d4c) < ::_TSS5)
     && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FString::FString(&Prefix,L"ECC_");
    atexit(`UCollisionProfile::LoadProfileConfig'::__l2::_dynamic_atexit_destructor_for__Prefix__);
    _Init_thread_footer(&::_TSS5);
  }
  pUVar21 = StaticEnum<enum_EObjectTypeQuery>();
  pUVar22 = StaticEnum<enum_ETraceTypeQuery>();
  if (((pUVar21 == (UEnum *)0x0) || (pUVar22 == (UEnum *)0x0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ObjectTypeEnum && TraceTypeEnum",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\CollisionProfile.cpp"
                          ,0x140,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar30 = 0;
  lVar33 = 0;
  local_208 = lVar31;
  if (0 < (int)uVar36) {
    pTVar34 = &this->ObjectTypeMapping;
    pTVar37 = &this->TraceTypeMapping;
    do {
      UEnum::GetNameStringByIndex(local_1e0,&local_1b8,uVar30);
      if (Prefix.Data.ArrayNum == 0) {
        iVar28 = 0;
      }
      else {
        iVar28 = Prefix.Data.ArrayNum + -1;
      }
      ::FString::RemoveAt(&local_1b8,0,iVar28,No);
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_1b8.Data.ArrayNum != 0) {
        FVar26.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_1f0,(wchar_t *)FVar26.Data);
      FVar10 = local_1f0;
      if (uVar30 - 8 < 0x18) {
        if (local_1f0 != (FName)0x0) {
          if (pUVar20 == (UScriptStruct *)0x0) {
            local_1d0.Field = (FField *)0x0;
          }
          else {
            local_1d0.Field = (FField *)pUVar20->_padding_;
          }
          local_1d0.InterfaceIndex = -1;
          local_1d0.bIncludeSuper = true;
          local_1d0.bIncludeDeprecated = true;
          local_1d0.bIncludeInterface = false;
          local_1d0.Struct = (UStruct *)pUVar20;
          TFieldIterator<FField>::IterateToNext(&local_1d0);
          pFVar14 = local_1d0.Field;
          while (local_1d0.Field = pFVar14, pFVar14 != (FField *)0x0) {
            bVar17 = IsThisNotNull(pFVar14,"FField::GetFName");
            if (bVar17) {
              local_1f8 = pFVar14->NamePrivate;
            }
            else {
              local_1f8.ComparisonIndex.Value = 0;
              local_1f8.Number = 0;
            }
            if (local_1f8 == FVar10) {
              if (pFVar14 != (FField *)0x0) goto LAB_14771945f;
              break;
            }
            local_1d0.Field = pFVar14->Next;
            TFieldIterator<FField>::IterateToNext(&local_1d0);
            pFVar14 = local_1d0.Field;
          }
        }
        if (1 < (byte)LogCollisionProfile._0_1_) {
          ::FName::ToString(&local_1f0,&local_d0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_218 = uVar30;
        if (uVar30 - 3 < 2) {
          CollisionQueryFlag.AllObjectQueryFlag =
               CollisionQueryFlag.AllObjectQueryFlag & ~(1 << (uVar30 & 0x1f));
          CollisionQueryFlag.AllStaticObjectQueryFlag =
               CollisionQueryFlag.AllStaticObjectQueryFlag & CollisionQueryFlag.AllObjectQueryFlag;
          pFVar32 = (pTVar37->AllocatorInstance).Data;
          if (((pFVar32 <= (FScriptContainerElement *)&local_218) &&
              ((FScriptContainerElement *)&local_218 <
               pFVar32 + (longlong)(this->TraceTypeMapping).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar28 = (this->TraceTypeMapping).ArrayNum;
          if (iVar28 == (this->TraceTypeMapping).ArrayMax) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar37->AllocatorInstance,&(this->TraceTypeMapping).ArrayMax
                               );
          }
          (this->TraceTypeMapping).ArrayNum = iVar28 + 1;
          pFVar32 = (pTVar37->AllocatorInstance).Data;
        }
        else {
          if (0x1f < (int)uVar30) goto LAB_14771945f;
          pFVar32 = (pTVar34->AllocatorInstance).Data;
          if (((pFVar32 <= (FScriptContainerElement *)&local_218) &&
              ((FScriptContainerElement *)&local_218 <
               pFVar32 + (longlong)(this->ObjectTypeMapping).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar28 = (this->ObjectTypeMapping).ArrayNum;
          if (iVar28 == (this->ObjectTypeMapping).ArrayMax) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar34->AllocatorInstance,
                                &(this->ObjectTypeMapping).ArrayMax);
          }
          (this->ObjectTypeMapping).ArrayNum = iVar28 + 1;
          pFVar32 = (pTVar34->AllocatorInstance).Data;
        }
        *(uint *)(pFVar32 + (longlong)iVar28 * 4) = local_218;
      }
LAB_14771945f:
      FVar10 = local_1f0;
      uVar36 = 0;
      if ((int)uVar30 < (this->ChannelDisplayNames).ArrayNum) {
        uVar36 = ~uVar30 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(FName *)((this->ChannelDisplayNames).AllocatorInstance.Data + lVar33 * 8) = FVar10;
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      uVar30 = uVar30 + 1;
      lVar33 = lVar33 + 1;
    } while (lVar33 < local_208);
  }
  FCollisionResponseContainer::SetAllChannels
            (&FCollisionResponseContainer::DefaultResponseContainer,ECR_Block);
  FCollisionResponseContainer::SetResponse
            (&FCollisionResponseContainer::DefaultResponseContainer,ECC_EngineTraceChannel1,
             ECR_Ignore);
  pTVar1 = &this->DefaultChannelResponses;
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FCustomChannelSetup,int,FIdentityFunctor,TDereferenceWrapper<FCustomChannelSetup,_UCollisionProfile::LoadProfileConfig_::__l2::<lambda_1>_>_>
            ((FCustomChannelSetup *)(pTVar1->AllocatorInstance).Data,
             (this->DefaultChannelResponses).ArrayNum,local_res8,(<lambda_1> *)local_res18);
  uVar36 = 0;
  if ((this->DefaultChannelResponses).ArrayNum < 1) {
LAB_147719a86:
    pTVar4 = &this->CollisionChannelRedirectsMap;
    bVar17 = 1 < *(int *)&(this->CollisionChannelRedirectsMap).field_0x48;
    if (!bVar17) {
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                      *)pTVar4);
    }
    pTVar35 = (TSparseSetElement<TTuple<FName,FName>_> *)0x0;
    puVar12 = &(this->CollisionChannelRedirectsMap).field_0xc;
    *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x8 = 0;
    if (*(int *)puVar12 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)pTVar4,0,(int *)puVar12);
    }
    *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x34 = 0;
    iVar28 = *(int *)&(this->CollisionChannelRedirectsMap).field_0x2c;
    *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x28 = 0;
    if ((iVar28 < 0) || (0x80 < iVar28)) {
      *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->CollisionChannelRedirectsMap).field_0x10,0);
    }
    pTVar29 = pTVar35;
    if (bVar17) {
      *(undefined4 *)&(this->CollisionChannelRedirectsMap).field_0x48 = 1;
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Rehash((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)pTVar4);
    }
    while( true ) {
      iVar28 = (int)pTVar29;
      if ((iVar28 < 0) || ((this->CollisionChannelRedirects).ArrayNum <= iVar28)) {
        FillProfileData(this,&this->Profiles,local_1e0,&this->EditProfiles);
        pTVar4 = &this->ProfileRedirectsMap;
        bVar17 = 1 < *(int *)&(this->ProfileRedirectsMap).field_0x48;
        if (!bVar17) {
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                            *)pTVar4);
        }
        puVar12 = &(this->ProfileRedirectsMap).field_0xc;
        *(undefined4 *)&(this->ProfileRedirectsMap).field_0x8 = 0;
        if (*(int *)puVar12 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,0,(ForAnyElementType *)pTVar4,0,(int *)puVar12);
        }
        *(undefined4 *)&(this->ProfileRedirectsMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->ProfileRedirectsMap).field_0x34 = 0;
        iVar28 = *(int *)&(this->ProfileRedirectsMap).field_0x2c;
        *(undefined4 *)&(this->ProfileRedirectsMap).field_0x28 = 0;
        if ((iVar28 < 0) || (0x80 < iVar28)) {
          *(undefined4 *)&(this->ProfileRedirectsMap).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProfileRedirectsMap).field_0x10
                     ,0);
        }
        if (bVar17) {
          *(undefined4 *)&(this->ProfileRedirectsMap).field_0x48 = 1;
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    *)pTVar4);
        }
        pTVar4 = &this->ProfileRedirectsMap;
        pTVar29 = pTVar35;
        while( true ) {
          iVar28 = (int)pTVar29;
          if ((iVar28 < 0) || ((this->ProfileRedirects).ArrayNum <= iVar28)) {
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            return;
          }
          local_1d8 = *(FName *)((this->ProfileRedirects).AllocatorInstance.Data +
                                (longlong)iVar28 * 0x10);
          if (((this->ProfileRedirects).ArrayNum <= iVar28) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) break;
          local_178 = 0;
          local_200 = *(FName *)((this->ProfileRedirects).AllocatorInstance.Data +
                                (longlong)iVar28 * 0x10 + 8);
          if ((local_1d8 != (FName)0x0) && (local_170 = 0, local_200 != (FName)0x0)) {
            local_138.Name.ComparisonIndex.Value = 0;
            local_138.Name.Number = 0;
            local_138.CollisionEnabled.Value = '\0';
            local_138.ObjectType.Value = '\0';
            local_138.bCanModify = true;
            FCollisionResponseContainer::FCollisionResponseContainer(&local_138.ResponseToChannels);
            local_138.ObjectTypeName.ComparisonIndex.Value = 0;
            local_138.ObjectTypeName.Number = 0;
            local_138.CustomResponses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_138.CustomResponses.ArrayNum = 0;
            local_138.CustomResponses.ArrayMax = 0;
            bVar17 = FindProfileData(this,&this->Profiles,local_200,&local_138);
            if (bVar17) {
              iVar18 = *(int *)&(this->ProfileRedirectsMap).field_0x34;
              if (iVar18 == 0) {
                iVar19 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x18,4,1,(ForAnyElementType *)pTVar4,
                                    (int *)&(this->ProfileRedirectsMap).field_0x8,
                                    (int *)&(this->ProfileRedirectsMap).field_0xc);
                TBitArray<FDefaultBitArrayAllocator>::Add
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &(this->ProfileRedirectsMap).field_0x10,false);
              }
              else {
                iVar19 = *(int *)&(this->ProfileRedirectsMap).field_0x30;
                iVar18 = iVar18 + -1;
                iVar6 = *(int *)(*(longlong *)&pTVar4->field_0x0 + 4 + (longlong)iVar19 * 0x18);
                *(int *)&(this->ProfileRedirectsMap).field_0x30 = iVar6;
                *(int *)&(this->ProfileRedirectsMap).field_0x34 = iVar18;
                if (iVar18 != 0) {
                  *(undefined4 *)(*(longlong *)&pTVar4->field_0x0 + (longlong)iVar6 * 0x18) =
                       0xffffffff;
                }
              }
              TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)pTVar4,&local_150,iVar19);
              pTVar29 = pTVar35;
              if (local_150.Pointer != (TSparseSetElement<TTuple<FName,FName>_> *)0x0) {
                *(FName *)local_150.Pointer = local_1d8;
                *(FName *)((longlong)local_150.Pointer + 8) = local_200;
                *(undefined4 *)((longlong)local_150.Pointer + 0x10) = 0xffffffff;
                pTVar29 = local_150.Pointer;
              }
              uVar11 = *(undefined8 *)pTVar29;
              local_res20[0] = local_150.Index;
              uVar36 = ::GetTypeHash((FNameEntryId)(uint)uVar11);
              uVar36 = (int)((ulonglong)uVar11 >> 0x20) + uVar36;
              bVar17 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                       ::TryReplaceExisting
                                 ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                                   *)pTVar4,uVar36,pTVar29,local_res20,(bool *)0x0);
              if (!bVar17) {
                uVar30 = *(int *)&(this->ProfileRedirectsMap).field_0x8 -
                         *(int *)&(this->ProfileRedirectsMap).field_0x34;
                if (uVar30 < 4) {
                  iVar18 = 1;
                }
                else {
                  uVar25 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
                  lVar31 = 0x3f;
                  if (uVar25 != 0) {
                    for (; uVar25 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                    }
                  }
                  local_168 = (undefined4)lVar31;
                  iVar18 = 1 << ((byte)lVar31 & 0x1f);
                }
                if (((int)uVar30 < 1) || (iVar18 <= *(int *)&(this->ProfileRedirectsMap).field_0x48)
                   ) {
                  uVar36 = *(int *)&(this->ProfileRedirectsMap).field_0x48 - 1U & uVar36;
                  *(uint *)&pTVar29->field_0x14 = uVar36;
                  puVar12 = *(undefined1 **)&(this->ProfileRedirectsMap).field_0x40;
                  puVar27 = &(this->ProfileRedirectsMap).field_0x38;
                  if (puVar12 != (undefined1 *)0x0) {
                    puVar27 = puVar12;
                  }
                  uVar25 = (longlong)*(int *)&(this->ProfileRedirectsMap).field_0x48 - 1U &
                           (longlong)(int)uVar36;
                  *(undefined4 *)&pTVar29->field_0x10 = *(undefined4 *)(puVar27 + uVar25 * 4);
                  *(int *)(puVar27 + uVar25 * 4) = local_res20[0];
                }
                else {
                  *(int *)&(this->ProfileRedirectsMap).field_0x48 = iVar18;
                  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                  ::Rehash((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                            *)pTVar4);
                }
              }
            }
            else if (2 < (byte)LogCollisionProfile._0_1_) {
              ::FName::ToString(&local_200,&local_80);
              ::FName::ToString(&local_200,&local_90);
              ::FName::ToString(&local_1d8,&local_a0);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
            }
            if (local_138.CustomResponses.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_138.CustomResponses.AllocatorInstance.Data);
            }
          }
          pTVar29 = (TSparseSetElement<TTuple<FName,FName>_> *)(ulonglong)(iVar28 + 1);
        }
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_1e8 = *(FName *)((this->CollisionChannelRedirects).AllocatorInstance.Data +
                            (longlong)iVar28 * 0x10);
      if (((this->CollisionChannelRedirects).ArrayNum <= iVar28) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) break;
      local_190 = 0;
      local_180 = *(FName *)((this->CollisionChannelRedirects).AllocatorInstance.Data +
                            (longlong)iVar28 * 0x10 + 8);
      if ((local_1e8 == (FName)0x0) || (local_188 = 0, local_180 == (FName)0x0)) {
        if (2 < (byte)LogCollisionProfile._0_1_) {
          ::FName::ToString(&local_180,&local_b0);
          ::FName::ToString(&local_1e8,&local_c0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        pTVar29 = (TSparseSetElement<TTuple<FName,FName>_> *)(ulonglong)(iVar28 + 1);
      }
      else {
        TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
        Emplace<FName_const_&,FName_const_&>
                  ((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                    *)&this->CollisionChannelRedirectsMap,&local_1e8,&local_180);
        pTVar29 = (TSparseSetElement<TTuple<FName,FName>_> *)(ulonglong)(iVar28 + 1);
      }
    }
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar34 = &this->TraceTypeMapping;
  pTVar37 = &this->ObjectTypeMapping;
  local_208 = 0;
LAB_147719551:
  lVar31 = local_208;
  uVar30 = 0;
  if ((int)uVar36 < (this->DefaultChannelResponses).ArrayNum) {
    uVar30 = ~uVar36 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar32 = (pTVar1->AllocatorInstance).Data + lVar31;
  FVar5 = *pFVar32;
  uVar30 = (uint)(byte)FVar5;
  if ((byte)FVar5 - 8 < 0x18) {
    local_198 = 0;
    if (*(longlong *)(pFVar32 + 4) == 0) {
      if (2 < (byte)LogCollisionProfile._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
      }
    }
    else {
      if (((this->ChannelDisplayNames).ArrayNum <= (int)uVar30) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      ::FName::ToString((FName *)((this->ChannelDisplayNames).AllocatorInstance.Data +
                                 (longlong)(int)(uint)(byte)FVar5 * 8),&local_160);
      ::FName::ToString((FName *)(pFVar32 + 4),&local_1a8);
      pFVar24 = (pTVar34->AllocatorInstance).Data;
      pFVar8 = pFVar24 + (longlong)(this->TraceTypeMapping).ArrayNum * 4;
      for (; pFVar24 != pFVar8; pFVar24 = pFVar24 + 4) {
        if (*(uint *)pFVar24 == (uint)(byte)FVar5) goto LAB_147719744;
      }
      pFVar24 = (pTVar37->AllocatorInstance).Data;
      pFVar8 = pFVar24 + (longlong)(this->ObjectTypeMapping).ArrayNum * 4;
      for (; pFVar24 != pFVar8; pFVar24 = pFVar24 + 4) {
        if (*(uint *)pFVar24 == uVar30) goto LAB_147719744;
      }
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar26.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      pFVar23 = ::FName::FName(&local_40,(wchar_t *)FVar26.Data);
      FVar10 = *pFVar23;
      if (((this->ChannelDisplayNames).ArrayNum <= (int)uVar30) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(FName *)((this->ChannelDisplayNames).AllocatorInstance.Data + (ulonglong)(byte)FVar5 * 8) =
           FVar10;
      uVar30 = (uint)(byte)*pFVar32;
      if (pFVar32[2] == (FScriptContainerElement)0x0) {
        pFVar8 = (pTVar37->AllocatorInstance).Data;
        local_210[0] = uVar30;
        if (((pFVar8 <= (FScriptContainerElement *)local_210) &&
            ((FScriptContainerElement *)local_210 <
             pFVar8 + (longlong)(this->ObjectTypeMapping).ArrayMax * 4)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar28 = (this->ObjectTypeMapping).ArrayNum;
        if (iVar28 == (this->ObjectTypeMapping).ArrayMax) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar37->AllocatorInstance,&(this->ObjectTypeMapping).ArrayMax)
          ;
        }
        (this->ObjectTypeMapping).ArrayNum = iVar28 + 1;
        *(uint *)((pTVar37->AllocatorInstance).Data + (longlong)iVar28 * 4) = local_210[0];
        if (pFVar32[3] != (FScriptContainerElement)0x0) {
          if ((byte)*pFVar32 < 0x20) {
            CollisionQueryFlag.AllStaticObjectQueryFlag =
                 CollisionQueryFlag.AllStaticObjectQueryFlag | 1 << ((byte)*pFVar32 & 0x1f);
          }
          else {
            bVar17 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_1801633184606060156>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CollisionQueryParams.h"
                                ,0x184,"(int32)NewChannel < 32");
            if (bVar17) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
        }
      }
      else {
        if (uVar30 < 0x20) {
          CollisionQueryFlag.AllObjectQueryFlag =
               CollisionQueryFlag.AllObjectQueryFlag & ~(1 << (uVar30 & 0x1f));
          CollisionQueryFlag.AllStaticObjectQueryFlag =
               CollisionQueryFlag.AllStaticObjectQueryFlag & CollisionQueryFlag.AllObjectQueryFlag;
        }
        else {
          bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1801633184606060148>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CollisionQueryParams.h"
                              ,0x18c,"(int32)NewChannel < 32");
          if (bVar17) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        pFVar8 = (pTVar34->AllocatorInstance).Data;
        local_214 = (uint)(byte)*pFVar32;
        if (((pFVar8 <= (FScriptContainerElement *)&local_214) &&
            ((FScriptContainerElement *)&local_214 <
             pFVar8 + (longlong)(this->TraceTypeMapping).ArrayMax * 4)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar28 = (this->TraceTypeMapping).ArrayNum;
        if (iVar28 == (this->TraceTypeMapping).ArrayMax) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar34->AllocatorInstance,&(this->TraceTypeMapping).ArrayMax);
        }
        (this->TraceTypeMapping).ArrayNum = iVar28 + 1;
        *(uint *)((pTVar34->AllocatorInstance).Data + (longlong)iVar28 * 4) = local_214;
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    FCollisionResponseContainer::SetResponse
              (&FCollisionResponseContainer::DefaultResponseContainer,(uint)(byte)FVar5,
               (uint)(byte)pFVar32[1]);
    lVar31 = local_208;
  }
  else if (2 < (byte)LogCollisionProfile._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Default_Setup_d_151765c00,
               (FLogCategoryBase *)&LogCollisionProfile);
  }
  goto LAB_147719a66;
LAB_147719744:
  if (2 < (byte)LogCollisionProfile._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCollisionProfile);
  }
  uVar30 = 0;
  if ((int)uVar36 < (this->DefaultChannelResponses).ArrayNum) {
    uVar30 = ~uVar36 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar32 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar36 * 0xc;
  iVar28 = ((this->DefaultChannelResponses).ArrayNum - uVar36) + -1;
  if (iVar28 != 0) {
    memmove(pFVar32,pFVar32 + 0xc,(longlong)iVar28 * 0xc);
  }
  iVar28 = (this->DefaultChannelResponses).ArrayNum + -1;
  (this->DefaultChannelResponses).ArrayNum = iVar28;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,&pTVar1->AllocatorInstance,iVar28,&(this->DefaultChannelResponses).ArrayMax);
  uVar36 = uVar36 - 1;
  lVar31 = local_208 + -0xc;
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
LAB_147719a66:
  local_208 = lVar31 + 0xc;
  uVar36 = uVar36 + 1;
  if ((this->DefaultChannelResponses).ArrayNum <= (int)uVar36) goto LAB_147719a86;
  goto LAB_147719551;
}

// LookForProfileRedirect @ 14771a4c0

FName * __thiscall UCollisionProfile::LookForProfileRedirect(UCollisionProfile *this,FName param_1)

{
  FName *pFVar1;
  
  pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->ProfileRedirectsMap,param_1);
  return pFVar1;
}

// PostReloadConfig @ 1477214a0

void __thiscall UCollisionProfile::PostReloadConfig(UCollisionProfile *this,FProperty *param_1)

{
  if ((this->_padding_ & 0x10) != 0) {
    LoadProfileConfig(this,false);
    return;
  }
  return;
}

// ReadConfig @ 147722950

bool __thiscall
UCollisionProfile::ReadConfig(UCollisionProfile *this,FName param_1,FBodyInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  FCollisionResponseTemplate local_58;
  
  local_58.bCanModify = true;
  local_58.Name.ComparisonIndex.Value = 0;
  local_58.Name.Number = 0;
  local_58.CollisionEnabled.Value = '\0';
  local_58.ObjectType.Value = '\0';
  FCollisionResponseContainer::FCollisionResponseContainer(&local_58.ResponseToChannels);
  local_58.ObjectTypeName.ComparisonIndex.Value = 0;
  local_58.ObjectTypeName.Number = 0;
  local_58.CustomResponses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.CustomResponses.ArrayNum = 0;
  local_58.CustomResponses.ArrayMax = 0;
  bVar2 = FBodyInstance::IsValidCollisionProfileName(param_1);
  if (bVar2) {
    pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)&this->ProfileRedirectsMap,param_1);
    if (pFVar4 == (FName *)0x0) goto LAB_1477229ff;
    param_2->CollisionProfileName = *pFVar4;
    if (*pFVar4 != (FName)0x0) {
      bVar2 = FindProfileData(this,&this->Profiles,*pFVar4,&local_58);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccessfullyFoundProfileData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\CollisionProfile.cpp"
                           ,0x98,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
    }
LAB_147722a1c:
    (param_2->CollisionEnabled).Value = local_58.CollisionEnabled.Value;
    (param_2->ObjectType).Value = local_58.ObjectType.Value;
    FCollisionResponse::SetCollisionResponseContainer
              (&param_2->CollisionResponses,&local_58.ResponseToChannels);
    FBodyInstance::UpdatePhysicsFilterData(param_2);
    bVar2 = true;
  }
  else {
LAB_1477229ff:
    if (param_1 != (FName)0x0) {
      bVar2 = FindProfileData(this,&this->Profiles,param_1,&local_58);
      if (bVar2) goto LAB_147722a1c;
    }
    bVar2 = false;
  }
  if (local_58.CustomResponses.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CustomResponses.AllocatorInstance.Data);
  }
  return bVar2;
}

// ReturnChannelNameFromContainerIndex @ 147725700

FName __thiscall
UCollisionProfile::ReturnChannelNameFromContainerIndex(UCollisionProfile *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint uVar4;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if ((-1 < (int)in_R8D) && ((int)in_R8D < (this->ChannelDisplayNames).ArrayNum)) {
    uVar4 = 0;
    if ((int)in_R8D < (this->ChannelDisplayNames).ArrayNum) {
      uVar4 = ~in_R8D >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    *(undefined8 *)FVar3 =
         *(undefined8 *)
          ((this->ChannelDisplayNames).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
    return FVar3;
  }
  *(undefined8 *)FVar3 = 0;
  return FVar3;
}

// ReturnContainerIndexFromChannelName @ 1477257b0

int __thiscall
UCollisionProfile::ReturnContainerIndexFromChannelName(UCollisionProfile *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  
  pFVar1 = (FName *)(this->ChannelDisplayNames).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (this->ChannelDisplayNames).ArrayNum) {
    pFVar4 = pFVar1;
    do {
      if (*pFVar4 == *param_1) {
        iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 3);
        if (iVar3 != -1) {
          return iVar3;
        }
        goto LAB_1477257f5;
      }
      pFVar4 = pFVar4 + 1;
    } while (pFVar4 != pFVar1 + (this->ChannelDisplayNames).ArrayNum);
  }
  iVar3 = -1;
LAB_1477257f5:
  pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->CollisionChannelRedirectsMap,*param_1);
  if (pFVar1 == (FName *)0x0) {
    return iVar3;
  }
  *param_1 = *pFVar1;
  pFVar4 = (FName *)(this->ChannelDisplayNames).AllocatorInstance.Data;
  if (pFVar4 != pFVar4 + (this->ChannelDisplayNames).ArrayNum) {
    pFVar2 = pFVar4;
    do {
      if (*pFVar2 == *pFVar1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar4 >> 3);
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar4 + (this->ChannelDisplayNames).ArrayNum);
  }
  return -1;
}

// SaveCustomResponses @ 147725bc0

void __thiscall
UCollisionProfile::SaveCustomResponses(UCollisionProfile *this,FCollisionResponseTemplate *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FCollisionResponseContainer *pFVar11;
  longlong local_38;
  undefined4 local_30;
  
  uVar9 = 0;
  piVar1 = &(param_1->CustomResponses).ArrayMax;
  (param_1->CustomResponses).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(param_1->CustomResponses).AllocatorInstance,0,piVar1);
  }
  pFVar11 = &param_1->ResponseToChannels;
  uVar10 = uVar9;
  do {
    uVar8 = (uint)uVar9;
    if ((pFVar11->field0_0x0)._s_0.WorldStatic !=
        *(uchar *)((longlong)pFVar11 + (0x1551f5235 - (longlong)param_1))) {
      if (((this->ChannelDisplayNames).ArrayNum <= (int)uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)((this->ChannelDisplayNames).AllocatorInstance.Data + uVar10);
      if (uVar8 < 8) {
LAB_147725cb7:
        pFVar2 = (param_1->CustomResponses).AllocatorInstance.Data;
        local_30 = CONCAT31(local_30._1_3_,(pFVar11->field0_0x0)._s_0.WorldStatic);
        local_38 = lVar3;
        if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)*piVar1 * 0xc)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (param_1->CustomResponses).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&(param_1->CustomResponses).AllocatorInstance,piVar1);
        }
        (param_1->CustomResponses).ArrayNum = iVar6 + 1;
        pFVar2 = (param_1->CustomResponses).AllocatorInstance.Data;
        *(longlong *)(pFVar2 + (longlong)iVar6 * 0xc) = local_38;
        *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_30;
      }
      else {
        pFVar7 = (this->DefaultChannelResponses).AllocatorInstance.Data;
        pFVar2 = pFVar7 + (longlong)(this->DefaultChannelResponses).ArrayNum * 0xc;
        for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 0xc) {
          if (*(longlong *)(pFVar7 + 4) == lVar3) goto LAB_147725cb7;
        }
      }
    }
    uVar9 = (ulonglong)(uVar8 + 1);
    uVar10 = uVar10 + 8;
    pFVar11 = (FCollisionResponseContainer *)((pFVar11->field0_0x0).EnumArray + 1);
    if (0x1f < (int)(uVar8 + 1)) {
      return;
    }
  } while( true );
}

// StaticRegisterNativesUCollisionProfile @ 14772bf40

void __cdecl UCollisionProfile::StaticRegisterNativesUCollisionProfile(void)

{
  return;
}

