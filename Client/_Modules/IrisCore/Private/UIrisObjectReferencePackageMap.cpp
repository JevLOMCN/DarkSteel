// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 14

// StaticClass @ 1443221e0

UClass * __cdecl UIrisObjectReferencePackageMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"IrisObjectReferencePackageMap",
               &Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.InnerSingleton,
               StaticRegisterNativesUIrisObjectReferencePackageMap,0x100,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIrisObjectReferencePackageMap>,
               InternalVTableHelperCtorCaller<UIrisObjectReferencePackageMap>,local_res8,
               UPackageMap::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.InnerSingleton;
}

// UIrisObjectReferencePackageMap @ 144326ee0

UIrisObjectReferencePackageMap * __thiscall
UIrisObjectReferencePackageMap::UIrisObjectReferencePackageMap
          (UIrisObjectReferencePackageMap *this,FVTableHelper *param_1)

{
  UPackageMap::UPackageMap((UPackageMap *)this,param_1);
  this->_padding_ = (longlong)&___7UIrisObjectReferencePackageMap__6B_;
  this->PackageMapExportsForReading = (FIrisPackageMapExports *)0x0;
  this->PackageMapExportsForWriting = (FIrisPackageMapExports *)0x0;
  (this->NetTokenResolveContext).NetTokenStore = (FNetTokenStore *)0x0;
  (this->NetTokenResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  return this;
}

// UIrisObjectReferencePackageMap @ 144326f30

UIrisObjectReferencePackageMap * __thiscall
UIrisObjectReferencePackageMap::UIrisObjectReferencePackageMap
          (UIrisObjectReferencePackageMap *this,FObjectInitializer *param_1)

{
  UPackageMap::UPackageMap((UPackageMap *)this,param_1);
  this->_padding_ = (longlong)&___7UIrisObjectReferencePackageMap__6B_;
  this->PackageMapExportsForReading = (FIrisPackageMapExports *)0x0;
  this->PackageMapExportsForWriting = (FIrisPackageMapExports *)0x0;
  (this->NetTokenResolveContext).NetTokenStore = (FNetTokenStore *)0x0;
  (this->NetTokenResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  return this;
}

// ~UIrisObjectReferencePackageMap @ 144327340

void __thiscall
UIrisObjectReferencePackageMap::~UIrisObjectReferencePackageMap
          (UIrisObjectReferencePackageMap *this)

{
  this->_padding_ = (longlong)&___7UIrisObjectReferencePackageMap__6B_;
  UPackageMap::~UPackageMap((UPackageMap *)this);
  return;
}

// GetNetTokenResolveContext @ 1443306a0

FNetTokenResolveContext * __thiscall
UIrisObjectReferencePackageMap::GetNetTokenResolveContext(UIrisObjectReferencePackageMap *this)

{
  return &this->NetTokenResolveContext;
}

// GetPrivateStaticClass @ 144330b50

UClass * __cdecl UIrisObjectReferencePackageMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"IrisObjectReferencePackageMap",
               &Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.InnerSingleton,
               StaticRegisterNativesUIrisObjectReferencePackageMap,0x100,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIrisObjectReferencePackageMap>,
               InternalVTableHelperCtorCaller<UIrisObjectReferencePackageMap>,local_res8,
               UPackageMap::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.InnerSingleton;
}

// InitForRead @ 144332660

void __thiscall
UIrisObjectReferencePackageMap::InitForRead
          (UIrisObjectReferencePackageMap *this,FIrisPackageMapExports *param_1,
          FNetTokenResolveContext *param_2)

{
  FNetTokenStoreState *pFVar1;
  
  this->PackageMapExportsForReading = param_1;
  pFVar1 = param_2->RemoteNetTokenStoreState;
  (this->NetTokenResolveContext).NetTokenStore = param_2->NetTokenStore;
  (this->NetTokenResolveContext).RemoteNetTokenStoreState = pFVar1;
  return;
}

// InitForWrite @ 144332c80

void __thiscall
UIrisObjectReferencePackageMap::InitForWrite
          (UIrisObjectReferencePackageMap *this,FIrisPackageMapExports *param_1)

{
  bool bVar1;
  undefined1 local_res8 [32];
  
  this->PackageMapExportsForWriting = param_1;
  if (param_1 == (FIrisPackageMapExports *)0x0) {
    bVar1 = `UIrisObjectReferencePackageMap::InitForWrite'::__l3::<lambda_1>::operator()(local_res8)
    ;
    if (!bVar1) {
      return;
    }
  }
  UE::Net::FIrisPackageMapExports::Reset(this->PackageMapExportsForWriting);
  return;
}

// SerializeName @ 14433e370

bool __thiscall
UIrisObjectReferencePackageMap::SerializeName
          (UIrisObjectReferencePackageMap *this,FArchive *param_1,FName *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  ForElementType<FName> *pFVar7;
  ForElementType<FName> FVar8;
  byte bVar9;
  ForElementType<FName> FVar10;
  ForElementType<FName> FVar11;
  uint local_res10 [2];
  int local_res20 [2];
  ForElementType<FName> local_28;
  uint *local_20;
  ForElementType<FName> *local_18;
  
  bVar9 = param_1->field_0x28 & 4;
  lVar6 = 0xe8;
  if (bVar9 == 0) {
    lVar6 = 0xe0;
  }
  lVar6 = *(longlong *)((longlong)&this->_padding_ + lVar6);
  if (!UE::Net::bEnableIrisPackageMapNameExports) {
    bVar3 = UPackageMap::SerializeName((UPackageMap *)this,param_1,param_2);
    return bVar3;
  }
  if (lVar6 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5087294423155343427>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\IrisObjectReferencePackageMap.cpp"
                       ,0x43,"PackageMapExports");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    FVar10 = (ForElementType<FName>)(lVar6 + 0x30);
    local_28 = FVar10;
    if (bVar9 != 0) {
      FVar8 = *(ForElementType<FName> *)(lVar6 + 0x50);
      FVar11 = FVar8;
      if (FVar8 == (ForElementType<FName>)0x0) {
        FVar11 = FVar10;
      }
      if (FVar11 != (ForElementType<FName>)
                    (((ForElementType<FName> *)FVar11)->InlineData +
                    (longlong)*(int *)(lVar6 + 0x58) * 8)) {
        pFVar7 = (ForElementType<FName> *)FVar11;
        do {
          if (*(FName *)pFVar7->InlineData == *param_2) {
            local_res20[0] = (int)((longlong)pFVar7 - (longlong)FVar11 >> 3);
            if (local_res20[0] != -1) goto LAB_14433e4e2;
            break;
          }
          pFVar7 = (ForElementType<FName> *)(pFVar7->InlineData + 8);
        } while (pFVar7 != (ForElementType<FName> *)
                           (((ForElementType<FName> *)FVar11)->InlineData +
                           (longlong)*(int *)(lVar6 + 0x58) * 8));
      }
      if (FVar8 == (ForElementType<FName>)0x0) {
        FVar8 = FVar10;
      }
      if ((((ulonglong)FVar8 <= param_2) &&
          (param_2 < (FName *)(((ForElementType<FName> *)FVar8)->InlineData +
                              (longlong)*(int *)(lVar6 + 0x5c) * 8))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_res20[0] = *(int *)(lVar6 + 0x58);
      if (local_res20[0] == *(int *)(lVar6 + 0x5c)) {
        local_res20[0] =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                       (0x408,(ForElementType<FName> *)FVar10,(int *)(lVar6 + 0x5c));
      }
      *(int *)(lVar6 + 0x58) = local_res20[0] + 1;
      FVar8 = (ForElementType<FName>)*(ForElementType<FName> **)(lVar6 + 0x50);
      if (*(ForElementType<FName> **)(lVar6 + 0x50) == (ForElementType<FName> *)0x0) {
        FVar8 = FVar10;
      }
      *(FName *)(((ForElementType<FName> *)FVar8)->InlineData + (longlong)local_res20[0] * 8) =
           *param_2;
LAB_14433e4e2:
      (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res20);
      return true;
    }
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
    FVar10 = local_28;
    if ((-1 < (int)local_res10[0]) &&
       (iVar1 = *(int *)((ForElementType<FName> *)((longlong)local_28 + 0x28))->InlineData,
       (int)local_res10[0] < iVar1)) {
      uVar5 = 0;
      if ((int)local_res10[0] < iVar1) {
        uVar5 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FVar8 = *(ForElementType<FName> *)((longlong)FVar10 + 0x20);
      if (FVar8 == (ForElementType<FName>)0x0) {
        FVar8 = FVar10;
      }
      *param_2 = *(FName *)((longlong)FVar8 + (longlong)(int)local_res10[0] * 8);
      return true;
    }
    local_20 = local_res10;
    local_18 = &local_28;
    `UIrisObjectReferencePackageMap::SerializeName'::__l21::<lambda_1>::operator()(&local_20);
  }
  return false;
}

// SerializeObject @ 14433e5f0

bool __thiscall
UIrisObjectReferencePackageMap::SerializeObject
          (UIrisObjectReferencePackageMap *this,FArchive *param_1,UClass *param_2,UObject **param_3,
          FNetworkGUID *param_4)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  ForElementType<TObjectPtr<UObject>_> FVar7;
  byte bVar8;
  ForElementType<TObjectPtr<UObject>_> FVar9;
  uint local_res10 [2];
  int local_38 [2];
  UObject *local_30;
  ForElementType<TObjectPtr<UObject>_> local_28;
  uint *local_20;
  ForElementType<TObjectPtr<UObject>_> *local_18;
  
  bVar8 = param_1->field_0x28 & 4;
  lVar6 = 0xe8;
  if (bVar8 == 0) {
    lVar6 = 0xe0;
  }
  local_28 = *(ForElementType<TObjectPtr<UObject>_> *)((longlong)&this->_padding_ + lVar6);
  if (local_28 == (ForElementType<TObjectPtr<UObject>_>)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5087294423155343381>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\IrisObjectReferencePackageMap.cpp"
                       ,0x15,"PackageMapExports");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = false;
  }
  else if (bVar8 == 0) {
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
    FVar9 = local_28;
    if (((int)local_res10[0] < 0) || (*(int *)((longlong)local_28 + 0x28) <= (int)local_res10[0])) {
      local_20 = local_res10;
      local_18 = &local_28;
      `UIrisObjectReferencePackageMap::SerializeObject'::__l18::<lambda_1>::operator()(&local_20);
      bVar3 = false;
    }
    else {
      uVar5 = 0;
      if ((int)local_res10[0] < *(int *)((longlong)local_28 + 0x28)) {
        uVar5 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FVar7 = *(ForElementType<TObjectPtr<UObject>_> *)((longlong)FVar9 + 0x20);
      bVar3 = true;
      if (FVar7 == (ForElementType<TObjectPtr<UObject>_>)0x0) {
        FVar7 = FVar9;
      }
      *param_3 = *(UObject **)((longlong)FVar7 + (longlong)(int)local_res10[0] * 8);
    }
  }
  else {
    pUVar1 = *param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FVar9 = *(ForElementType<TObjectPtr<UObject>_> *)((longlong)local_28 + 0x20);
    if (*(ForElementType<TObjectPtr<UObject>_> *)((longlong)local_28 + 0x20) ==
        (ForElementType<TObjectPtr<UObject>_>)0x0) {
      FVar9 = local_28;
    }
    for (FVar7 = FVar9;
        FVar7 != (ForElementType<TObjectPtr<UObject>_>)
                 ((longlong)FVar9 + (longlong)*(int *)((longlong)local_28 + 0x28) * 8);
        FVar7 = (ForElementType<TObjectPtr<UObject>_>)((longlong)FVar7 + 8)) {
      if (*(UObject **)FVar7 == pUVar1) {
        local_38[0] = (int)((longlong)FVar7 - (longlong)FVar9 >> 3);
        if (local_38[0] != -1) goto LAB_14433e7b7;
        break;
      }
    }
    local_30 = *param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_30);
    }
    FVar9 = local_28;
    FVar7 = *(ForElementType<TObjectPtr<UObject>_> *)((longlong)local_28 + 0x20);
    if (*(ForElementType<TObjectPtr<UObject>_> *)((longlong)local_28 + 0x20) ==
        (ForElementType<TObjectPtr<UObject>_>)0x0) {
      FVar7 = local_28;
    }
    if ((((ulonglong)FVar7 <= &local_30) &&
        (&local_30 <
         (UObject **)((longlong)FVar7 + (longlong)*(int *)((longlong)local_28 + 0x2c) * 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_38[0] = *(int *)((longlong)FVar9 + 0x28);
    if (local_38[0] == *(int *)((longlong)FVar9 + 0x2c)) {
      local_38[0] = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
                              (0x808,(ForElementType<TObjectPtr<UObject>_> *)FVar9,
                               (int *)((longlong)FVar9 + 0x2c));
    }
    *(int *)((longlong)FVar9 + 0x28) = local_38[0] + 1;
    FVar7 = *(ForElementType<TObjectPtr<UObject>_> *)((longlong)FVar9 + 0x20);
    if (*(ForElementType<TObjectPtr<UObject>_> *)((longlong)FVar9 + 0x20) ==
        (ForElementType<TObjectPtr<UObject>_>)0x0) {
      FVar7 = FVar9;
    }
    *(UObject **)((longlong)FVar7 + (longlong)local_38[0] * 8) = local_30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_30);
    }
LAB_14433e7b7:
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_38);
    bVar3 = true;
  }
  return bVar3;
}

// StaticRegisterNativesUIrisObjectReferencePackageMap @ 14433ee30

void __cdecl
UIrisObjectReferencePackageMap::StaticRegisterNativesUIrisObjectReferencePackageMap(void)

{
  return;
}

// operator() @ 1504bc850

bool __thiscall
`UIrisObjectReferencePackageMap::InitForWrite'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5087294423155343470>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5087294423155343470>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bcb20

bool __thiscall
`UIrisObjectReferencePackageMap::SerializeObject'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5087294423155343408>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5087294423155343408>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504bcb80

bool __thiscall
`UIrisObjectReferencePackageMap::SerializeName'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5087294423155343453>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5087294423155343453>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

