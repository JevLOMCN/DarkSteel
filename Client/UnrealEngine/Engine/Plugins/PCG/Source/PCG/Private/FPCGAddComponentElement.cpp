// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// AddComponents @ 149af3680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149af3e82) */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPCGAddComponentElement::AddComponents
          (FPCGAddComponentElement *this,FPCGAddComponentContext *param_1,
          IPCGAttributeAccessor *param_2,IPCGAttributeAccessorKeys *param_3,
          IPCGAttributeAccessor *param_4,IPCGAttributeAccessorKeys *param_5,
          IPCGAttributeAccessor *param_6,IPCGAttributeAccessorKeys *param_7,
          IPCGAttributeAccessor *param_8,IPCGAttributeAccessorKeys *param_9)

{
  FSoftObjectPtr *this_00;
  void *_Src;
  FScriptContainerElement *pFVar1;
  AActor *pAVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  UClass *pUVar11;
  UPCGManagedResource *pUVar12;
  longlong lVar13;
  AActor *pAVar14;
  AActor *pAVar15;
  USceneComponent *this_01;
  longlong *plVar16;
  ForElementType<FSoftObjectPath> FVar17;
  int iVar18;
  size_t _Size;
  undefined8 *puVar19;
  int iVar20;
  FSoftObjectPath *pFVar21;
  AActor *pAVar22;
  uint uVar23;
  TTransform<double> *pTVar24;
  AActor *this_02;
  undefined1 auStackY_c458 [32];
  UPCGComponent *local_c408;
  uint local_c3f8;
  int local_c3e8;
  longlong local_c3e0;
  longlong local_c3d8;
  longlong local_c3d0;
  FSoftObjectPath local_c3c8;
  EObjectFlags local_c3a8;
  int local_c3a4;
  int local_c3a0;
  IPCGAttributeAccessorKeys *local_c398;
  ForElementType<FSoftObjectPath> local_c390;
  undefined8 local_c388;
  undefined8 uStack_c380;
  undefined8 local_c378;
  undefined8 local_c370;
  FName local_c368;
  undefined8 local_c360;
  undefined8 local_c358;
  undefined8 local_c350;
  UPCGManagedResource *local_c348;
  FSoftObjectPath local_c340;
  IPCGAttributeAccessor *local_c320;
  ForElementType<UE::Math::TTransform<double>_> local_c318;
  FPCGAddComponentContext *local_c308;
  USceneComponent *local_c300;
  IPCGAttributeAccessorKeys *local_c2f8;
  IPCGAttributeAccessor *local_c2f0;
  IPCGAttributeAccessorKeys *local_c2e8;
  ForElementType<FSoftObjectPath> local_c2d8;
  int iStack_c2d0;
  undefined4 uStack_c2cc;
  ForElementType<FSoftObjectPath> local_c2c8;
  int iStack_c2c0;
  undefined4 uStack_c2bc;
  IPCGAttributeAccessor *local_c2b8;
  IPCGAttributeAccessor *local_c2b0;
  IPCGAttributeAccessorKeys *local_c2a8;
  ForElementType<UE::Math::TTransform<double>_> local_c298;
  int iStack_c290;
  undefined4 uStack_c28c;
  ForElementType<FSoftObjectPath> local_c288;
  int iStack_c280;
  undefined4 uStack_c27c;
  TPersistentObjectPtr<FSoftObjectPath> local_c278;
  TArrayView<FSoftObjectPath,int> local_c248;
  TArrayView<FSoftObjectPath,int> local_c238;
  TArrayView<FSoftObjectPath_const_,int> local_c228;
  TArrayView<UE::Math::TTransform<double>,int> local_c218;
  TPersistentObjectPtr<FSoftObjectPath> local_c208;
  TPersistentObjectPtr<FSoftObjectPath> local_c1e0;
  FSoftObjectPath local_c1b8;
  undefined1 local_c198 [128];
  undefined1 local_c118 [128];
  ForElementType<FSoftObjectPath> local_c098;
  int local_a090 [2];
  TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_a088;
  TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_8078;
  ForElementType<UE::Math::TTransform<double>_> local_6068;
  int local_58 [4];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149af36a2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c458;
  local_c2b0 = param_4;
  local_c398 = param_5;
  local_c320 = param_6;
  local_c2a8 = param_7;
  local_c2f0 = param_8;
  local_c2f8 = param_9;
  local_c308 = param_1;
  local_c2e8 = param_3;
  local_c2b8 = param_2;
  if (((param_2 == (IPCGAttributeAccessor *)0x0) || (param_3 == (IPCGAttributeAccessorKeys *)0x0))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("TransformAccessor && TransformKeys",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
                            ,0x196,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_4 == (IPCGAttributeAccessor *)0x0) || (local_c398 == (IPCGAttributeAccessorKeys *)0x0)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ClassOrTemplateAccessor && ClassOrTemplateKeys",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
                               ,0x197,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_6 == (IPCGAttributeAccessor *)0x0) || (param_7 == (IPCGAttributeAccessorKeys *)0x0))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("TargetActorAccessor && TargetActorKeys",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
                            ,0x198,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_8 == (IPCGAttributeAccessor *)0x0) || (param_9 == (IPCGAttributeAccessorKeys *)0x0))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutputComponentAccessor && OutputComponentKeys",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
                            ,0x199,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_1->_padding_ != 0) &&
      (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->_padding_), bVar6)) &&
     (((longlong *)param_1->_padding_ != (longlong *)0x0 &&
      (local_c408 = (UPCGComponent *)(**(code **)(*(longlong *)param_1->_padding_ + 8))(),
      local_c408 != (UPCGComponent *)0x0)))) {
    pUVar11 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar20 = (int)pUVar11->_padding_;
    if ((iVar20 <= *(int *)(local_c408->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_c408->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
        &pUVar11->_padding_)) goto LAB_149af3860;
  }
  local_c408 = (UPCGComponent *)0x0;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("SourceComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
                     ,0x19d,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_149af3860:
  local_c3a8 = RF_NoFlags;
  if (local_c408->CurrentEditingMode == Preview) {
    local_c3a8 = RF_Transient;
  }
  uVar8 = (**(code **)(param_3->_padding_ + 0x10))(param_3);
  iVar20 = (int)(((int)(uVar8 + 0xff) >> 0x1f & 0xffU) + uVar8 + 0xff) >> 8;
  if (uVar8 != 0) {
    local_c3a0 = iVar20;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)local_c408,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar11 = Z_Construct_UClass_UPCGManagedComponentList_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c118,pUVar11);
    local_c118._8_8_ = local_c408;
    pUVar12 = (UPCGManagedResource *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c118);
    local_c348 = pUVar12;
    if (local_c118._64_8_ != 0) {
      plVar16 = (longlong *)(local_c118 + 0x50);
      if ((longlong *)local_c118._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_c118._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if ((pUVar12 == (UPCGManagedResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
                           ,0x1ad,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*(int *)((longlong)&pUVar12[1]._padding_ + 4) < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar8,(ForAnyElementType *)(pUVar12 + 1),(int)pUVar12[1]._padding_,
                 (int *)((longlong)&pUVar12[1]._padding_ + 4));
    }
    local_6068.SecondaryData = (ForElementType<UE::Math::TTransform<double>_>)0x0;
    local_58[0] = 0;
    local_58[1] = 0x100;
    local_8078.AllocatorInstance.SecondaryData = (ForElementType<FSoftObjectPath>)0x0;
    local_8078.ArrayNum = 0;
    local_8078.ArrayMax = 0x100;
    local_a088.AllocatorInstance.SecondaryData = (ForElementType<FSoftObjectPath>)0x0;
    local_a088.ArrayNum = 0;
    local_a088.ArrayMax = 0x100;
    local_c098.SecondaryData = (ForElementType<FSoftObjectPath>)0x0;
    local_a090[0] = 0;
    local_a090[1] = 0x100;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,0x100,&local_6068,local_58,local_58 + 1);
    TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_8078,0x100,Default);
    TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_a088,0x100,Default);
    if (local_a090[0] < 0x100) {
      iVar18 = 0x100 - local_a090[0];
      iVar9 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                        (0x20,8,iVar18,&local_c098,local_a090,local_a090 + 1);
      FVar17 = (ForElementType<FSoftObjectPath>)&local_c098;
      if (local_c098.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
        FVar17 = local_c098.SecondaryData;
      }
      DefaultConstructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)((longlong)iVar9 * 0x20 + (longlong)FVar17),iVar18);
    }
    else if (0x100 < local_a090[0]) {
      iVar9 = local_a090[0] + -0x100;
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar9 != 0) {
        FVar17 = (ForElementType<FSoftObjectPath>)&local_c098;
        if (local_c098.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
          FVar17 = local_c098.SecondaryData;
        }
        pFVar21 = (FSoftObjectPath *)((longlong)FVar17 + 0x2000);
        DestructItems<FSoftObjectPath,int>(pFVar21,iVar9);
        iVar18 = (local_a090[0] - iVar9) + -0x100;
        if (iVar18 != 0) {
          memmove(pFVar21,pFVar21 + iVar9,(longlong)iVar18 << 5);
        }
        local_a090[0] = local_a090[0] - iVar9;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                  (0x20,8,&local_c098,local_a090[0],local_a090 + 1);
      }
    }
    local_c3e8 = 0;
    if (0 < iVar20) {
      do {
        iVar20 = local_c3e8 * 0x100;
        iVar18 = uVar8 + local_c3e8 * -0x100;
        iVar9 = 0x100;
        if (iVar18 < 0x100) {
          iVar9 = iVar18;
        }
        local_c318 = (ForElementType<UE::Math::TTransform<double>_>)&local_6068;
        if (local_6068.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
          local_c318 = local_6068.SecondaryData;
        }
        local_c3a4 = iVar20;
        local_c298 = local_c318;
        iStack_c290 = iVar9;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c2c8 = (ForElementType<FSoftObjectPath>)&local_8078;
        if (local_8078.AllocatorInstance.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
          local_c2c8 = local_8078.AllocatorInstance.SecondaryData;
        }
        iStack_c2c0 = iVar9;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c2d8 = (ForElementType<FSoftObjectPath>)&local_a088;
        if (local_a088.AllocatorInstance.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
          local_c2d8 = local_a088.AllocatorInstance.SecondaryData;
        }
        iStack_c2d0 = iVar9;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar17 = (ForElementType<FSoftObjectPath>)&local_c098;
        if (local_c098.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
          FVar17 = local_c098.SecondaryData;
        }
        local_c390 = FVar17;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c218._12_4_ = uStack_c28c;
        local_c218.ArrayNum = iStack_c290;
        local_c218.DataPtr = (TTransform<double> *)local_c298;
        bVar6 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                          (local_c2b8,&local_c218,iVar20,param_3,AllowBroadcastAndConstructible);
        if (bVar6) {
          local_c248._12_4_ = uStack_c2bc;
          local_c248.ArrayNum = iStack_c2c0;
          local_c248.DataPtr = (FSoftObjectPath *)local_c2c8;
          bVar6 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                            (local_c2b0,&local_c248,iVar20,local_c398,AllowBroadcastAndConstructible
                            );
          if (bVar6) {
            local_c238._12_4_ = uStack_c2cc;
            local_c238.ArrayNum = iStack_c2d0;
            local_c238.DataPtr = (FSoftObjectPath *)local_c2d8;
            bVar6 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                              (local_c320,&local_c238,iVar20,local_c2a8,
                               AllowBroadcastAndConstructible);
            if (bVar6) {
              local_c3f8 = 0;
              local_c3d0 = 0;
              if (0 < iVar9) {
                local_c3e0 = 0;
                do {
                  local_c388 = 0;
                  uStack_c380 = 0;
                  local_c378 = 0;
                  local_c370 = 0;
                  uVar23 = 0;
                  if ((int)local_c3f8 < iVar9) {
                    uVar23 = ~local_c3f8 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(undefined8 *)(local_c3e0 + (longlong)local_c390) = local_c388;
                  ((undefined8 *)(local_c3e0 + (longlong)local_c390))[1] = uStack_c380;
                  puVar19 = (undefined8 *)
                            ((longlong)
                             &(((FUtf8String *)((longlong)local_c390 + 0x10))->Data).
                              AllocatorInstance.Data + local_c3e0);
                  if (puVar19 != &local_c378) {
                    if ((void *)*puVar19 != (void *)0x0) {
                      FMemory::Free((void *)*puVar19);
                    }
                    *puVar19 = 0;
                    local_c378 = 0;
                    local_c370 = 0;
                    *(undefined4 *)(local_c3e0 + 0x18 + (longlong)local_c390) = 0;
                    *(undefined4 *)(local_c3e0 + 0x1c + (longlong)local_c390) = 0;
                  }
                  uVar10 = 0;
                  if ((int)local_c3f8 < iVar9) {
                    uVar10 = ~local_c3f8 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pTVar24 = (TTransform<double> *)
                            ((longlong)(int)local_c3f8 * 0x60 + (longlong)local_c318);
                  if ((uVar23 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  lVar13 = local_c3d0 * 0x20;
                  local_c340.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_c340.SubPathString.Data.ArrayNum =
                       *(int *)(lVar13 + 0x18 + (longlong)local_c2d8);
                  _Size = (size_t)local_c340.SubPathString.Data.ArrayNum;
                  _Src = *(void **)(lVar13 + 0x10 + (longlong)local_c2d8);
                  local_c340.AssetPath.PackageName =
                       (((FSoftObjectPath *)(lVar13 + (longlong)local_c2d8))->AssetPath).PackageName
                  ;
                  local_c340.AssetPath.AssetName =
                       (((FSoftObjectPath *)(lVar13 + (longlong)local_c2d8))->AssetPath).AssetName;
                  if (local_c340.SubPathString.Data.ArrayNum == 0) {
                    local_c340.SubPathString.Data.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,local_c340.SubPathString.Data.ArrayNum,0,
                               (ForAnyElementType *)&local_c340.SubPathString,
                               local_c340.SubPathString.Data.ArrayNum,
                               &local_c340.SubPathString.Data.ArrayMax);
                    memcpy(local_c340.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
                  }
                  pAVar22 = (AActor *)0x0;
                  local_c208.WeakPtr.ObjectIndex = 0;
                  local_c208.WeakPtr.ObjectSerialNumber = 0;
                  FSoftObjectPath::FSoftObjectPath(&local_c208.ObjectID,&local_c340);
                  if (local_c340.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c340.SubPathString.Data.AllocatorInstance.Data);
                  }
                  pAVar14 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_c208);
                  this_02 = pAVar22;
                  if (pAVar14 != (AActor *)0x0) {
                    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
                    iVar20 = (int)pUVar11->_padding_;
                    if ((iVar20 <= *(int *)(pAVar14->_padding_ + 0x38)) &&
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(pAVar14->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
                        &pUVar11->_padding_)) {
                      this_02 = pAVar14;
                    }
                  }
                  if (local_c208.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c208.ObjectID.SubPathString.Data.AllocatorInstance.Data);
                  }
                  if ((uVar23 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar21 = (FSoftObjectPath *)
                            ((longlong)(int)local_c3f8 * 0x20 + (longlong)local_c2c8);
                  local_c278.WeakPtr.ObjectIndex = 0;
                  local_c278.WeakPtr.ObjectSerialNumber = 0;
                  FSoftObjectPath::FSoftObjectPath(&local_c278.ObjectID,pFVar21);
                  pAVar15 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_c278);
                  pAVar14 = pAVar22;
                  if (pAVar15 != (AActor *)0x0) {
                    pUVar11 = Z_Construct_UClass_UClass_NoRegister();
                    iVar20 = (int)pUVar11->_padding_;
                    if (((iVar20 <= *(int *)(pAVar15->_padding_ + 0x38)) &&
                        ((longlong *)
                         *(undefined1 **)
                          (*(longlong *)(pAVar15->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
                         &pUVar11->_padding_)) &&
                       (pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister(),
                       pUVar11 != (UClass *)0x0)) {
                      iVar20 = (int)pUVar11->_padding_;
                      if (((int)(pAVar15->PrimaryActorTick)._padding_ < iVar20) ||
                         ((longlong *)
                          *(undefined1 **)
                           ((pAVar15->PrimaryActorTick)._padding_ + (longlong)iVar20 * 8) !=
                          &pUVar11->_padding_)) {
                        bVar6 = false;
                      }
                      else {
                        bVar6 = true;
                      }
                      if (bVar6) {
                        pAVar14 = pAVar15;
                      }
                    }
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
                     (pAVar14 == (AActor *)0x0)) {
                    if (pAVar14 != (AActor *)0x0) goto LAB_149af4106;
LAB_149af413b:
                    pFVar21 = FSoftObjectPath::FSoftObjectPath(&local_c1b8,pFVar21);
                    pAVar14 = (AActor *)0x0;
                    local_c1e0.WeakPtr.ObjectIndex = 0;
                    local_c1e0.WeakPtr.ObjectSerialNumber = 0;
                    FSoftObjectPath::FSoftObjectPath(&local_c1e0.ObjectID,pFVar21);
                    pFVar1 = (pFVar21->SubPathString).Data.AllocatorInstance.Data;
                    if (pFVar1 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar1);
                    }
                    pAVar15 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_c1e0);
                    pAVar22 = pAVar14;
                    if (pAVar15 != (AActor *)0x0) {
                      pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
                      pAVar2 = (AActor *)pAVar15->_padding_;
                      iVar20 = (int)pUVar11->_padding_;
                      if ((iVar20 <= (int)(pAVar2->PrimaryActorTick)._padding_) &&
                         ((longlong *)
                          *(undefined1 **)
                           ((pAVar2->PrimaryActorTick)._padding_ + (longlong)iVar20 * 8) ==
                          &pUVar11->_padding_)) {
                        pAVar14 = pAVar2;
                        pAVar22 = pAVar15;
                      }
                    }
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pAVar14 != (AActor *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)pAVar14);
                    }
                    if (local_c1e0.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c1e0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
                    }
                  }
                  else {
                    UE::GC::MarkAsReachable((UObject *)pAVar14);
LAB_149af4106:
                    pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
                    if (pUVar11 == (UClass *)0x0) goto LAB_149af413b;
                    iVar20 = (int)pUVar11->_padding_;
                    if (((int)(pAVar14->PrimaryActorTick)._padding_ < iVar20) ||
                       ((longlong *)
                        *(undefined1 **)
                         ((pAVar14->PrimaryActorTick)._padding_ + (longlong)iVar20 * 8) !=
                        &pUVar11->_padding_)) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    if (!bVar6) goto LAB_149af413b;
                  }
                  if (((this_02 != (AActor *)0x0) && (pAVar14 != (AActor *)0x0)) &&
                     (pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister(),
                     pUVar11 != (UClass *)0x0)) {
                    iVar20 = (int)pUVar11->_padding_;
                    if (((int)(pAVar14->PrimaryActorTick)._padding_ < iVar20) ||
                       ((longlong *)
                        *(undefined1 **)
                         ((pAVar14->PrimaryActorTick)._padding_ + (longlong)iVar20 * 8) !=
                        &pUVar11->_padding_)) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    if (bVar6) {
                      local_c368.ComparisonIndex.Value = 0;
                      local_c368.Number = 0;
                      pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
                      FVar4 = local_c368;
                      if (pUVar11 == (UClass *)0x0) {
LAB_149af425c:
                        pAVar14 = (AActor *)0x0;
                      }
                      else {
                        iVar20 = (int)pUVar11->_padding_;
                        if (((int)(pAVar14->PrimaryActorTick)._padding_ < iVar20) ||
                           ((longlong *)
                            *(undefined1 **)
                             ((pAVar14->PrimaryActorTick)._padding_ + (longlong)iVar20 * 8) !=
                            &pUVar11->_padding_)) {
                          bVar6 = false;
                        }
                        else {
                          bVar6 = true;
                        }
                        if (!bVar6) goto LAB_149af425c;
                      }
                      local_c360 = 0;
                      if (local_c368 == (FName)0x0) {
                        FObjectInitializer::AssertIfInConstructor
                                  ((UObject *)this_02,
                                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                  );
                      }
                      pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
                      CheckIsClassChildOf_Internal(pUVar11,(UClass *)pAVar14);
                      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                ((FStaticConstructObjectParameters *)local_c198,(UClass *)pAVar14);
                      FVar5 = local_c368;
                      local_c198._48_8_ = (FObjectInstancingGraph *)0x0;
                      local_c198._56_8_ = (UPackage *)0x0;
                      local_c368.ComparisonIndex = FVar4.ComparisonIndex.Value;
                      local_c368.Number = FVar4.Number;
                      local_c198._16_4_ = local_c368.ComparisonIndex.Value;
                      local_c198._20_4_ = local_c368.Number;
                      local_c198._24_4_ = local_c3a8;
                      local_c198[0x20] = false;
                      local_c368 = FVar5;
                      local_c198._8_8_ = this_02;
                      local_c198._40_8_ = pAVar22;
                      this_01 = (USceneComponent *)
                                StaticConstructObject_Internal
                                          ((FStaticConstructObjectParameters *)local_c198);
                      if (local_c198._64_8_ != 0) {
                        plVar16 = (longlong *)(local_c198 + 0x50);
                        if ((longlong *)local_c198._104_8_ != (longlong *)0x0) {
                          plVar16 = (longlong *)local_c198._104_8_;
                        }
                        (**(code **)(*plVar16 + 0x10))();
                      }
                      if (this_01 != (USceneComponent *)0x0) {
                        UActorComponent::RegisterComponent((UActorComponent *)this_01);
                        AActor::AddInstanceComponent(this_02,(UActorComponent *)this_01);
                        pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
                        iVar20 = (int)pUVar11->_padding_;
                        if ((iVar20 <= *(int *)(this_01->_padding_ + 0x38)) &&
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
                            &pUVar11->_padding_)) {
                          local_c358 = 0;
                          cVar7 = (**(code **)(this_01->_padding_ + 0x508))
                                            (this_01,(this_02->RootComponent).field0_0x0.DebugPtr);
                          if (cVar7 == '\0') {
                            PCGLog::Component::LogComponentAttachmentFailedWarning
                                      ((FPCGContext *)local_c308);
                          }
                          USceneComponent::SetWorldTransform
                                    (this_01,pTVar24,false,(FHitResult *)0x0,None);
                        }
                        local_c3d8 = local_c408->_padding_;
                        if ((((longlong *)this_01->_padding_ <= &local_c3d8) &&
                            (&local_c3d8 <
                             (longlong *)this_01->_padding_ +
                             *(int *)((longlong)&this_01->_padding_ + 4))) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        iVar20 = (int)this_01->_padding_;
                        if (iVar20 == *(int *)((longlong)&this_01->_padding_ + 4)) {
                          iVar20 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x408,(ForAnyElementType *)&this_01->_padding_,
                                              (int *)((longlong)&this_01->_padding_ + 4));
                        }
                        *(int *)&this_01->_padding_ = iVar20 + 1;
                        *(longlong *)(this_01->_padding_ + (longlong)iVar20 * 8) = local_c3d8;
                        if ((((ulonglong)this_01->_padding_ < 0x15528b981) &&
                            (&PCGHelpers::DefaultPCGTag <
                             (FName *)(this_01->_padding_ +
                                      (longlong)*(int *)((longlong)&this_01->_padding_ + 4) * 8)))
                           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        iVar20 = (int)this_01->_padding_;
                        if (iVar20 == *(int *)((longlong)&this_01->_padding_ + 4)) {
                          iVar20 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x408,(ForAnyElementType *)&this_01->_padding_,
                                              (int *)((longlong)&this_01->_padding_ + 4));
                        }
                        *(int *)&this_01->_padding_ = iVar20 + 1;
                        local_c3c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                        local_c3c8.AssetPath.PackageName.Number = 0;
                        local_c3c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                        local_c3c8.AssetPath.AssetName.Number = 0;
                        *(FName *)(this_01->_padding_ + (longlong)iVar20 * 8) =
                             PCGHelpers::DefaultPCGTag;
                        local_c3c8.SubPathString.Data.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        local_c3c8.SubPathString.Data.ArrayNum = 0;
                        local_c3c8.SubPathString.Data.ArrayMax = 0;
                        FSoftObjectPath::SetPath(&local_c3c8,(UObject *)this_01);
                        uVar23 = 0;
                        if ((int)local_c3f8 < local_a090[0]) {
                          uVar23 = ~local_c3f8 >> 0x1f;
                        }
                        if ((uVar23 == 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        FVar17 = (ForElementType<FSoftObjectPath>)&local_c098;
                        if (local_c098.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
                          FVar17 = local_c098.SecondaryData;
                        }
                        pFVar21 = (FSoftObjectPath *)(local_c3d0 * 0x20 + (longlong)FVar17);
                        (pFVar21->AssetPath).PackageName = local_c3c8.AssetPath.PackageName;
                        (pFVar21->AssetPath).AssetName = local_c3c8.AssetPath.AssetName;
                        puVar19 = (undefined8 *)(local_c3d0 * 0x20 + 0x10 + (longlong)FVar17);
                        if ((FUtf8String *)puVar19 != &local_c3c8.SubPathString) {
                          if ((void *)*puVar19 != (void *)0x0) {
                            FMemory::Free((void *)*puVar19);
                          }
                          *puVar19 = local_c3c8.SubPathString.Data.AllocatorInstance.Data;
                          local_c3c8.SubPathString.Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          *(int *)(puVar19 + 1) = local_c3c8.SubPathString.Data.ArrayNum;
                          *(int *)((longlong)puVar19 + 0xc) = local_c3c8.SubPathString.Data.ArrayMax
                          ;
                          local_c3c8.SubPathString.Data.ArrayNum = 0;
                          local_c3c8.SubPathString.Data.ArrayMax = 0;
                        }
                        if (local_c3c8.SubPathString.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_c3c8.SubPathString.Data.AllocatorInstance.Data);
                        }
                        pUVar12 = local_c348;
                        iVar20 = (int)local_c348[1]._padding_;
                        if (iVar20 == *(int *)((longlong)&local_c348[1]._padding_ + 4)) {
                          iVar20 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x828,(ForAnyElementType *)(local_c348 + 1),
                                              (int *)((longlong)&local_c348[1]._padding_ + 4));
                        }
                        *(int *)&pUVar12[1]._padding_ = iVar20 + 1;
                        this_00 = (FSoftObjectPtr *)(pUVar12[1]._padding_ + (longlong)iVar20 * 0x28)
                        ;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)this_01);
                        }
                        *(undefined8 *)this_00 = 0;
                        *(undefined8 *)&this_00->field_0x18 = 0;
                        *(undefined8 *)&this_00->field_0x20 = 0;
                        local_c350 = 0;
                        *(undefined8 *)&this_00->field_0x10 = 0;
                        *(undefined8 *)&this_00->field_0x8 = 0;
                        FUtf8String::Reset((FUtf8String *)&this_00->field_0x18,0);
                        local_c300 = this_01;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)this_01);
                        }
                        FSoftObjectPtr::operator=(this_00,(FObjectPtr)&local_c300);
                      }
                    }
                  }
                  if (local_c278.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c278.ObjectID.SubPathString.Data.AllocatorInstance.Data);
                  }
                  local_c3f8 = local_c3f8 + 1;
                  local_c3d0 = local_c3d0 + 1;
                  local_c3e0 = local_c3e0 + 0x20;
                  FVar17 = local_c390;
                  iVar20 = local_c3a4;
                } while ((int)local_c3f8 < iVar9);
              }
              local_c228._12_4_ = uStack_c27c;
              local_c228.ArrayNum = iVar9;
              local_c288 = FVar17;
              iStack_c280 = iVar9;
              local_c228.DataPtr = (FSoftObjectPath *)FVar17;
              IPCGAttributeAccessor::SetRange<FSoftObjectPath>
                        (local_c2f0,&local_c228,iVar20,local_c2f8,AllowBroadcastAndConstructible);
              param_3 = local_c2e8;
            }
          }
        }
        local_c3e8 = local_c3e8 + 1;
        pUVar12 = local_c348;
      } while (local_c3e8 < local_c3a0);
    }
    if ((int)pUVar12[1]._padding_ != 0) {
      UPCGComponent::AddToManagedResources(local_c408,pUVar12);
    }
    FVar17 = (ForElementType<FSoftObjectPath>)&local_c098;
    if (local_c098.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FVar17 = local_c098.SecondaryData;
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)FVar17,local_a090[0]);
    if (local_c098.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FMemory::Free((void *)local_c098.SecondaryData);
    }
    FVar17 = (ForElementType<FSoftObjectPath>)&local_a088;
    if (local_a088.AllocatorInstance.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FVar17 = local_a088.AllocatorInstance.SecondaryData;
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)FVar17,local_a088.ArrayNum);
    if (local_a088.AllocatorInstance.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FMemory::Free((void *)local_a088.AllocatorInstance.SecondaryData);
    }
    FVar17 = (ForElementType<FSoftObjectPath>)&local_8078;
    if (local_8078.AllocatorInstance.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FVar17 = local_8078.AllocatorInstance.SecondaryData;
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)FVar17,local_8078.ArrayNum);
    if (local_8078.AllocatorInstance.SecondaryData != (ForElementType<FSoftObjectPath>)0x0) {
      FMemory::Free((void *)local_8078.AllocatorInstance.SecondaryData);
    }
    if (local_6068.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      FMemory::Free((void *)local_6068.SecondaryData);
    }
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149af9fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGAddComponentElement::CanExecuteOnlyOnMainThread
          (FPCGAddComponentElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b01950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGAddComponentElement::ExecuteInternal(FPCGAddComponentElement *this,FPCGContext *param_1)

{
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar1;
  TObjectPtr<UPCGData_const_>_u_0 TVar2;
  code *pcVar3;
  FPCGMetadataDomainID FVar4;
  undefined8 uVar5;
  TObjectPtr<UPCGMetadata>_u_0 TVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  longlong lVar16;
  FText *pFVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  FPCGTaggedData *pFVar21;
  FPCGDataPtrWrapper *pFVar22;
  FString *pFVar23;
  FName FVar24;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar25;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar26;
  IPCGAttributeAccessor *pIVar27;
  IPCGAttributeAccessor *pIVar28;
  IPCGAttributeAccessor *pIVar29;
  UPCGData *pUVar30;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  ForAnyElementType FVar31;
  UObject *pUVar32;
  uint uVar33;
  FPCGTaggedData *pFVar34;
  FPCGDataCollection *pFVar35;
  IPCGAttributeAccessor *this_03;
  bool bVar36;
  bool bVar37;
  undefined1 auStackY_848 [32];
  undefined1 local_7e8 [16];
  TObjectPtr<UPCGSettings>_u_0 local_7d8;
  <lambda_1> local_7d0;
  undefined1 local_7c8 [16];
  uint local_7b8;
  TObjectPtr<UPCGMetadata>_u_0 local_7b0;
  TObjectPtr<UPCGMetadata>_u_0 local_7a8 [5];
  FString *local_780;
  int local_778;
  TObjectPtr<UPCGSettings>_u_0 local_768;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_760;
  longlong local_750;
  FSoftObjectPath local_748;
  FSoftObjectPath local_728;
  FSoftObjectPath local_708;
  FSoftObjectPath local_6e8;
  TObjectPtr<UPCGData_const_>_u_0 local_6c8;
  TObjectPtr<UPCGData_const_>_u_0 local_6c0;
  TObjectPtr<UPCGData_const_>_u_0 local_6b8;
  TObjectPtr<UPCGData_const_>_u_0 local_6b0;
  FSoftObjectPath local_6a8;
  FPCGAttributePropertySelector local_688;
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  UPCGData *local_628;
  FPCGTaggedData *local_620;
  FPCGCrc local_618;
  TObjectPtr<UPCGMetadata>_u_0 local_610;
  FPCGAttributePropertySelector local_608;
  FPCGAttributePropertySelector local_5c8;
  TSharedPtr<FCulture,1> local_588;
  TSharedPtr<FCulture,1> local_578;
  TTransform<double> *local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  FSoftObjectPath *local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  FSoftObjectPath *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  TSharedPtr<FCulture,1> local_538;
  TSharedPtr<FCulture,1> local_528;
  FName local_518;
  FPCGMetadataDomainID local_510 [2];
  FString local_4f0;
  FString local_4e0;
  FText local_4d0;
  FText local_4c0;
  FPCGDataPtrWrapper local_4b0;
  FPCGDataPtrWrapper local_4a0;
  FString local_490;
  TArrayView<UE::Math::TTransform<double>,int> local_478;
  FString local_468;
  FString local_458;
  FText local_448;
  FText local_438;
  TArrayView<FSoftObjectPath,int> local_428;
  FString local_418;
  FString local_408;
  FText local_3f8;
  FText local_3e8;
  FString local_3d8;
  FString local_3c8;
  FText local_3b8;
  FText local_3a8;
  TArrayView<FSoftObjectPath,int> local_398;
  FString local_388;
  FString local_378;
  FText local_368;
  FText local_358;
  FString local_348;
  FString local_338;
  FText local_328;
  FText local_318;
  FString local_308;
  FString local_2f8;
  FText local_2e8;
  FText local_2d8;
  FString local_2c8;
  FString local_2b8;
  FText local_2a8;
  FText local_298;
  FString local_288;
  FString local_278;
  FText local_268;
  FText local_258;
  undefined1 local_240 [32];
  undefined1 local_220 [48];
  FText local_1f0;
  FText local_1e0;
  FTextFormat local_1d0;
  FText local_1c0;
  FTextFormat local_1b0;
  FText local_1a0;
  FTextFormat local_190;
  FText local_180;
  FTextFormat local_170;
  FText local_160;
  FText local_150;
  FTextFormat local_140;
  FText local_130;
  FTextFormat local_120;
  FText local_110;
  FTextFormat local_100;
  FText local_f0;
  FTextFormat local_e0;
  FText local_d0;
  FTextFormat local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_848;
  bVar9 = false;
  bVar36 = false;
  bVar37 = -1 < CpuChannel->Enabled;
  local_618 = (FPCGCrc)this;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId225,"FPCGAddComponentElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
               ,0xe1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId225);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
                         ,0xe3,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
      pFVar21 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAddComponentSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_7d0);
      if (pFVar21 != (FPCGTaggedData *)0x0) {
        local_768.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar21->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_768.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b01ab5;
          UE::GC::MarkAsReachable((UObject *)local_768.DebugPtr);
        }
        if (local_768.DebugPtr != (UPCGSettings *)0x0) {
          pUVar13 = UPCGAddComponentSettings::StaticClass();
          bVar7 = FObjectPtr::IsA(&local_768.ObjectPtr,pUVar13);
          TVar15 = local_768;
          local_7d8 = local_768;
          if (bVar7) goto LAB_149b01ac2;
        }
      }
    }
    else {
      pUVar14 = UPCGNode::GetSettings(this_00);
      TVar15.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
      if (TVar15.DebugPtr != (UPCGSettings *)0x0) {
        local_7d8.DebugPtr = TVar15.DebugPtr;
        pUVar13 = UPCGAddComponentSettings::StaticClass();
        iVar11 = (int)pUVar13->_padding_;
        if ((iVar11 <= *(int *)((TVar15.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar15.DebugPtr)->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
            &pUVar13->_padding_)) goto LAB_149b01ac2;
      }
    }
LAB_149b01ab5:
    local_7d8.DebugPtr = (UPCGSettings *)0x0;
    TVar15.DebugPtr = local_7d8.DebugPtr;
  }
  else {
    pUVar13 = UPCGAddComponentSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    if (bVar7) {
      local_7d8 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar15 = local_7d8;
    }
    else {
      local_7d8.DebugPtr = (UPCGSettings *)0x0;
      TVar15.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149b01ac2:
  if ((TVar15.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddComponent.cpp"
                         ,0xe7,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_7c8 + 8),
             &PCGPinConstants::DefaultInputLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_760,&PCGAddComponentConstants::TargetActorPinLabel);
  if (((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar7)) ||
      (pIVar1 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar1 == (IPCGGraphExecutionSource *)0x0)) ||
     (lVar16 = (**(code **)((longlong)*pIVar1 + 8))(), lVar16 == 0)) {
LAB_149b01b5d:
    lVar16 = 0;
    local_750 = 0;
  }
  else {
    local_750 = lVar16;
    pUVar13 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar11 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar11 * 8)
        != &pUVar13->_padding_)) goto LAB_149b01b5d;
  }
  if ((local_7b8 != 0) && (lVar16 != 0)) {
    if ((local_760.ArrayNum < 2) || (local_760.ArrayNum == local_7b8)) {
      uVar33 = (uint)param_1[1]._padding_;
      if ((int)uVar33 < (int)local_7b8) {
        local_610.DebugPtr = (UPCGMetadata *)&(param_1->OutputData).TaggedData.ArrayMax;
        do {
          TVar6 = local_610;
          pFVar35 = &param_1->OutputData;
          uVar10 = 0;
          if ((int)uVar33 < (int)local_7b8) {
            uVar10 = ~uVar33 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          pFVar21 = (FPCGTaggedData *)(pFVar35->TaggedData).AllocatorInstance.Data;
          pFVar34 = (FPCGTaggedData *)(local_7c8._8_8_ + (longlong)(int)uVar33 * 0x78);
          if (((pFVar21 <= pFVar34) && (pFVar34 < pFVar21 + (int)(TVar6.DebugPtr)->_padding_)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          iVar11 = (param_1->OutputData).TaggedData.ArrayNum;
          if (iVar11 == (int)(TVar6.DebugPtr)->_padding_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)pFVar35,(int *)TVar6.DebugPtr);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar11 + 1;
          local_620 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar35->TaggedData).AllocatorInstance.Data +
                                 (longlong)iVar11 * 0x78),pFVar34);
          if (local_760.ArrayNum == 0) {
            bVar36 = true;
            pFVar22 = FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_4b0,(UPCGData *)0x0);
          }
          else if (local_760.ArrayNum == local_7b8) {
            uVar33 = (uint)param_1[1]._padding_;
            uVar10 = 0;
            if ((int)uVar33 < local_760.ArrayNum) {
              uVar10 = ~uVar33 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            bVar9 = true;
            pFVar22 = FPCGDataPtrWrapper::FPCGDataPtrWrapper
                                (&local_4a0,
                                 (FPCGDataPtrWrapper *)
                                 (local_760.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x78));
          }
          else {
            if ((local_760.ArrayNum < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            bVar9 = true;
            pFVar22 = FPCGDataPtrWrapper::FPCGDataPtrWrapper
                                (&local_4a0,(FPCGDataPtrWrapper *)local_760.AllocatorInstance.Data);
          }
          TVar2 = (TObjectPtr<UPCGData_const_>_u_0)(pFVar22->Data).field0_0x0.DebugPtr;
          if (bVar36) {
            bVar36 = false;
            FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_4b0);
          }
          if (bVar9) {
            bVar9 = false;
            FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_4a0);
          }
          uVar33 = (uint)param_1[1]._padding_;
          *(uint *)&param_1[1]._padding_ = uVar33 + 1;
          uVar10 = 0;
          if ((int)uVar33 < (int)local_7b8) {
            uVar10 = ~uVar33 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          pUVar30 = (((FPCGTaggedData *)(local_7c8._8_8_ + (longlong)(int)uVar33 * 0x78))->Data).
                    Data.field0_0x0.DebugPtr;
          local_628 = pUVar30;
          if (pUVar30 != (UPCGData *)0x0) {
            FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                      ((FPCGAttributePropertyInputSelector *)&local_7a8[0].ObjectPtr);
            pFVar23 = ::FString::FString(&local_490,L"$Transform");
            FPCGAttributePropertySelector::Update
                      ((FPCGAttributePropertySelector *)&local_7a8[0].ObjectPtr,pFVar23);
            if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_490.Data.AllocatorInstance.Data);
            }
            PCGAttributeAccessorHelpers::CreateConstAccessor
                      ((UPCGData *)(local_7e8 + 8),(FPCGAttributePropertySelector *)pUVar30,
                       (bool)((char)&local_7b0 + '\b'));
            PCGAttributeAccessorHelpers::CreateConstKeys
                      ((UPCGData *)local_7e8,(FPCGAttributePropertySelector *)pUVar30);
            if (((IPCGAttributeAccessor *)local_7e8._8_8_ == (IPCGAttributeAccessor *)0x0) ||
               ((IPCGAttributeAccessorKeys *)local_7e8._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
              if (2 < (byte)LogPCG._0_1_) {
                FVar24 = FPCGAttributePropertySelector::GetName
                                   ((FPCGAttributePropertySelector *)&local_7a8[0].ObjectPtr);
                pFVar17 = FText::FromName(&local_180,(FName *)FVar24);
                pFVar18 = FText::AsLocalizable_Advanced_LocText
                                    (&local_258,L"PCGAddComponentElement",
                                     L"MissingTransformAttribute",
                                     L"Input data does not have the target attribute/property \'{0}\'"
                                    );
                pFVar20 = FTextFormat::FTextFormat(&local_170,pFVar18,Default);
                pFVar17 = FText::Format<FText>(&local_268,pFVar20,pFVar17);
                FText::ToString(pFVar17);
                FPCGContext::GetTaskName(param_1,&local_278);
                FPCGContext::GetExecutionSourceName(param_1,&local_288);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_288.Data.AllocatorInstance.Data);
                }
                if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Data.AllocatorInstance.Data);
                }
                if (local_268.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
                }
                if (local_258.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
                }
              }
              if ((IPCGAttributeAccessorKeys *)local_7e8._0_8_ != (IPCGAttributeAccessorKeys *)0x0)
              {
                (**(code **)*(longlong *)local_7e8._0_8_)(local_7e8._0_8_,1);
              }
              if ((IPCGAttributeAccessor *)local_7e8._8_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_7e8._8_8_)(local_7e8._8_8_,1);
              }
LAB_149b0231d:
              DestructItems<FString,int>(local_780,local_778);
              if (local_780 != (FString *)0x0) {
                FMemory::Free(local_780);
              }
            }
            else {
              local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_a8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_a8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_a8.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_a8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_a8.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_a8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_a8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_a8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              iVar11 = (**(code **)(*(longlong *)local_7e8._0_8_ + 0x10))();
              if (0 < iVar11) {
                local_568 = &local_a8;
                uStack_560 = 1;
                local_478._12_4_ = uStack_55c;
                local_478.ArrayNum = 1;
                local_478.DataPtr = local_568;
                bVar7 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                                  ((IPCGAttributeAccessor *)local_7e8._8_8_,&local_478,0,
                                   (IPCGAttributeAccessorKeys *)local_7e8._0_8_,
                                   AllowBroadcastAndConstructible);
                if (!bVar7) {
                  if (2 < (byte)LogPCG._0_1_) {
                    FVar24 = FPCGAttributePropertySelector::GetName
                                       ((FPCGAttributePropertySelector *)&local_7a8[0].ObjectPtr);
                    pFVar17 = FText::FromName(&local_130,(FName *)FVar24);
                    pFVar18 = FText::AsLocalizable_Advanced_LocText
                                        (&local_438,L"PCGAddComponentElement",
                                         L"InvalidTransformAttribute",
                                         L"Input transform attribute/property \'{0}\' is not compatible with a transform."
                                        );
                    pFVar20 = FTextFormat::FTextFormat(&local_120,pFVar18,Default);
                    pFVar17 = FText::Format<FText>(&local_448,pFVar20,pFVar17);
                    FText::ToString(pFVar17);
                    FPCGContext::GetTaskName(param_1,&local_458);
                    FPCGContext::GetExecutionSourceName(param_1,&local_468);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_468.Data.AllocatorInstance.Data);
                    }
                    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_458.Data.AllocatorInstance.Data);
                    }
                    if (local_448.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
                    }
                    if (local_438.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
                    }
                  }
                  if ((IPCGAttributeAccessorKeys *)local_7e8._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_7e8._0_8_)(local_7e8._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_7e8._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_7e8._8_8_)(local_7e8._8_8_,1);
                  }
                  goto LAB_149b0231d;
                }
              }
              pIVar29 = (IPCGAttributeAccessor *)0x0;
              if ((char)local_7d8.DebugPtr[1]._padding_ == '\0') {
                if (((char)local_7d8.DebugPtr[1].Seed == '\0') ||
                   (local_7d8.DebugPtr[1].OriginalSettings == (UPCGSettings *)0x0)) {
                  lVar16 = local_7d8.DebugPtr[1]._padding_;
                  if ((lVar16 == 0) ||
                     (pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister(),
                     pUVar13 == (UClass *)0x0)) {
LAB_149b028e1:
                    pUVar32 = (UObject *)0x0;
                  }
                  else {
                    iVar11 = (int)pUVar13->_padding_;
                    if ((*(int *)(lVar16 + 0x38) < iVar11) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar11 * 8) !=
                        &pUVar13->_padding_)) {
                      bVar7 = false;
                    }
                    else {
                      bVar7 = true;
                    }
                    if (!bVar7) goto LAB_149b028e1;
                    pUVar32 = (UObject *)local_7d8.DebugPtr[1]._padding_;
                  }
                  pIVar29 = (IPCGAttributeAccessor *)0x0;
                  local_6e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_6e8.AssetPath.PackageName.Number = 0;
                  local_6e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                  local_6e8.AssetPath.AssetName.Number = 0;
                  local_6e8.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_6e8.SubPathString.Data.ArrayNum = 0;
                  local_6e8.SubPathString.Data.ArrayMax = 0;
                  FSoftObjectPath::SetPath(&local_6e8,pUVar32);
                  pIVar27 = ::operator_new(0x30);
                  FVar31.Data = local_6e8.SubPathString.Data.AllocatorInstance.Data;
                  if (pIVar27 != (IPCGAttributeAccessor *)0x0) {
                    pIVar27->bReadOnly = true;
                    pIVar27->UnderlyingType = 0xe;
                    pIVar27->_padding_ =
                         (longlong)&___7__FPCGConstantValueAccessor_UFSoftClassPath____6B_;
                    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(pIVar27 + 1),&local_6e8);
                    FVar31.Data = local_6e8.SubPathString.Data.AllocatorInstance.Data;
                    pIVar29 = pIVar27;
                  }
                }
                else {
                  local_708.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_708.AssetPath.PackageName.Number = 0;
                  local_708.AssetPath.AssetName.ComparisonIndex.Value = 0;
                  local_708.AssetPath.AssetName.Number = 0;
                  local_708.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_708.SubPathString.Data.ArrayNum = 0;
                  local_708.SubPathString.Data.ArrayMax = 0;
                  FSoftObjectPath::SetPath
                            (&local_708,(UObject *)local_7d8.DebugPtr[1].OriginalSettings);
                  pIVar27 = ::operator_new(0x30);
                  FVar31.Data = local_708.SubPathString.Data.AllocatorInstance.Data;
                  if (pIVar27 != (IPCGAttributeAccessor *)0x0) {
                    pIVar27->bReadOnly = true;
                    pIVar27->UnderlyingType = 0xd;
                    pIVar27->_padding_ =
                         (longlong)&___7__FPCGConstantValueAccessor_UFSoftObjectPath____6B_;
                    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(pIVar27 + 1),&local_708);
                    FVar31.Data = local_708.SubPathString.Data.AllocatorInstance.Data;
                    pIVar29 = pIVar27;
                  }
                }
                pIVar27 = (IPCGAttributeAccessor *)0x0;
                if (FVar31.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar31.Data);
                }
                pIVar28 = ::operator_new(0x18);
                this_03 = pIVar29;
                if (pIVar28 != (IPCGAttributeAccessor *)0x0) {
                  pIVar28->bReadOnly = true;
                  pIVar28[1]._padding_ = 0;
                  pIVar28->_padding_ =
                       (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
                  pIVar27 = pIVar28;
                }
              }
              else {
                FPCGAttributePropertyInputSelector::CopyAndFixLast
                          ((FPCGAttributePropertyInputSelector *)&local_7d8.DebugPtr[1]._padding_,
                           (FPCGAttributePropertyInputSelector *)&local_5c8,pUVar30);
                TVar25 = PCGAttributeAccessorHelpers::CreateConstAccessor
                                   ((UPCGData *)local_648,(FPCGAttributePropertySelector *)pUVar30,
                                    SUB81(&local_5c8,0));
                this_03 = pIVar29;
                if ((IPCGAttributeAccessor *)local_240 != TVar25.Ptr) {
                  this_03 = (IPCGAttributeAccessor *)(TVar25.Ptr)->_padding_;
                  (TVar25.Ptr)->_padding_ = 0;
                }
                if ((undefined8 *)local_648._0_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_648._0_8_)(local_648._0_8_,1);
                }
                TVar26 = PCGAttributeAccessorHelpers::CreateConstKeys
                                   ((UPCGData *)(local_648 + 8),
                                    (FPCGAttributePropertySelector *)pUVar30);
                if ((IPCGAttributeAccessorKeys *)(local_240 + 8) != TVar26.Ptr) {
                  pIVar29 = (IPCGAttributeAccessor *)(TVar26.Ptr)->_padding_;
                  (TVar26.Ptr)->_padding_ = 0;
                }
                if ((undefined8 *)local_648._8_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_648._8_8_)(local_648._8_8_,1);
                }
                if ((this_03 == (IPCGAttributeAccessor *)0x0) ||
                   (pIVar29 == (IPCGAttributeAccessor *)0x0)) {
                  if (2 < (byte)LogPCG._0_1_) {
                    FVar24 = FPCGAttributePropertySelector::GetName(&local_5c8);
                    pFVar17 = FText::FromName(&local_f0,(FName *)FVar24);
                    pFVar18 = FText::AsLocalizable_Advanced_LocText
                                        (&local_3a8,L"PCGAddComponentElement",
                                         L"MissingClassAttribute",
                                         L"Input data does not have the target class attribute/property \'{0}\'"
                                        );
                    pFVar20 = FTextFormat::FTextFormat(&local_e0,pFVar18,Default);
                    pFVar17 = FText::Format<FText>(&local_3b8,pFVar20,pFVar17);
                    FText::ToString(pFVar17);
                    FPCGContext::GetTaskName(param_1,&local_3c8);
                    FPCGContext::GetExecutionSourceName(param_1,&local_3d8);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
                    }
                    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
                    }
                    if (local_3b8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
                    }
                    if (local_3a8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
                    }
                  }
                  DestructItems<FString,int>
                            ((FString *)local_5c8.ExtraNames.AllocatorInstance.Data,
                             local_5c8.ExtraNames.ArrayNum);
                  if (local_5c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_5c8.ExtraNames.AllocatorInstance.Data);
                  }
                  if (pIVar29 != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)pIVar29->_padding_)(pIVar29,1);
                  }
                  if (this_03 != (IPCGAttributeAccessor *)0x0) {
LAB_149b025fa:
                    (**(code **)this_03->_padding_)(this_03,1);
                  }
                  if ((IPCGAttributeAccessorKeys *)local_7e8._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_7e8._0_8_)(local_7e8._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_7e8._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_7e8._8_8_)(local_7e8._8_8_,1);
                  }
                  DestructItems<FString,int>(local_780,local_778);
                  if (local_780 != (FString *)0x0) {
                    FMemory::Free(local_780);
                  }
                  goto LAB_149b02cbc;
                }
                local_728.AssetPath.PackageName.ComparisonIndex.Value = 0;
                local_728.AssetPath.PackageName.Number = 0;
                local_728.AssetPath.AssetName.ComparisonIndex.Value = 0;
                local_728.AssetPath.AssetName.Number = 0;
                local_728.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                local_728.SubPathString.Data.ArrayNum = 0;
                local_728.SubPathString.Data.ArrayMax = 0;
                iVar11 = (**(code **)(pIVar29->_padding_ + 0x10))(pIVar29);
                if (0 < iVar11) {
                  local_558 = &local_728;
                  uStack_550 = 1;
                  local_428._12_4_ = uStack_54c;
                  local_428.ArrayNum = 1;
                  local_428.DataPtr = local_558;
                  bVar7 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                                    (this_03,&local_428,0,(IPCGAttributeAccessorKeys *)pIVar29,
                                     AllowBroadcastAndConstructible);
                  if (!bVar7) {
                    if (2 < (byte)LogPCG._0_1_) {
                      FVar24 = FPCGAttributePropertySelector::GetName(&local_5c8);
                      pFVar17 = FText::FromName(&local_110,(FName *)FVar24);
                      pFVar18 = FText::AsLocalizable_Advanced_LocText
                                          (&local_3e8,L"PCGAddComponentElement",
                                           L"InvalidClassOrTemplateAttribute",
                                           L"Input class attribute/property \'{0}\' is not an object or class path."
                                          );
                      pFVar20 = FTextFormat::FTextFormat(&local_100,pFVar18,Default);
                      pFVar17 = FText::Format<FText>(&local_3f8,pFVar20,pFVar17);
                      FText::ToString(pFVar17);
                      FPCGContext::GetTaskName(param_1,&local_408);
                      FPCGContext::GetExecutionSourceName(param_1,&local_418);
                      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_418.Data.AllocatorInstance.Data);
                      }
                      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_408.Data.AllocatorInstance.Data);
                      }
                      if (local_3f8.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
                      }
                      if (local_3e8.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
                      }
                    }
                    if (local_728.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_728.SubPathString.Data.AllocatorInstance.Data);
                    }
                    DestructItems<FString,int>
                              ((FString *)local_5c8.ExtraNames.AllocatorInstance.Data,
                               local_5c8.ExtraNames.ArrayNum);
                    if (local_5c8.ExtraNames.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_5c8.ExtraNames.AllocatorInstance.Data);
                    }
                    (**(code **)pIVar29->_padding_)(pIVar29,1);
                    goto LAB_149b025fa;
                  }
                }
                if (local_728.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_728.SubPathString.Data.AllocatorInstance.Data);
                }
                DestructItems<FString,int>
                          ((FString *)local_5c8.ExtraNames.AllocatorInstance.Data,
                           local_5c8.ExtraNames.ArrayNum);
                pIVar27 = pIVar29;
                if (local_5c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5c8.ExtraNames.AllocatorInstance.Data);
                }
              }
              pIVar29 = (IPCGAttributeAccessor *)0x0;
              if (TVar2.DebugPtr == (UPCGData *)0x0) {
                local_6c8 = TVar2;
                local_6c0 = TVar2;
                local_6b8 = TVar2;
                local_6b0 = TVar2;
                FSoftObjectPath::SetPath
                          ((FSoftObjectPath *)&local_6c8.ObjectPtr,*(UObject **)(local_750 + 0xa8));
                pIVar28 = ::operator_new(0x30);
                if (pIVar28 == (IPCGAttributeAccessor *)0x0) {
                  pIVar28 = (IPCGAttributeAccessor *)0x0;
                }
                else {
                  pIVar28->bReadOnly = true;
                  pIVar28->UnderlyingType = 0xd;
                  pIVar28->_padding_ =
                       (longlong)&___7__FPCGConstantValueAccessor_UFSoftObjectPath____6B_;
                  FSoftObjectPath::FSoftObjectPath
                            ((FSoftObjectPath *)(pIVar28 + 1),
                             (FSoftObjectPath *)&local_6c8.ObjectPtr);
                }
                if (local_6b8.DebugPtr != (UPCGData *)0x0) {
                  FMemory::Free(local_6b8.DebugPtr);
                }
                pIVar29 = ::operator_new(0x18);
                if (pIVar29 == (IPCGAttributeAccessor *)0x0) {
                  pIVar29 = (IPCGAttributeAccessor *)0x0;
                }
                else {
                  pIVar29->bReadOnly = true;
                  pIVar29->_padding_ =
                       (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
                  pIVar29[1]._padding_ = 0;
                }
LAB_149b0314d:
                pUVar30 = (UPCGData *)(**(code **)(pUVar30->_padding_ + 0x310))(pUVar30,param_1,1);
                FPCGAttributePropertySelector::FPCGAttributePropertySelector
                          (&local_608,
                           (FPCGAttributePropertySelector *)
                           &local_7d8.DebugPtr[1].CachedOverridableParams);
                local_608._padding_ =
                     (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
                bVar7 = FPCGAttributePropertySelector::IsBasicAttribute(&local_608);
                if (bVar7) {
                  this_01 = (UPCGMetadata *)(**(code **)(pUVar30->_padding_ + 0x328))(pUVar30);
                  FVar4 = PCGMetadataDomainID::Default;
                  local_6a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_6a8.AssetPath.PackageName.Number = 0;
                  local_6a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                  local_6a8.AssetPath.AssetName.Number = 0;
                  local_6a8.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_6a8.SubPathString.Data.ArrayNum = 0;
                  local_6a8.SubPathString.Data.ArrayMax = 0;
                  local_518 = FPCGAttributePropertySelector::GetName(&local_608);
                  local_518 = *(FName *)local_518;
                  local_510[0] = FVar4;
                  this_02 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,local_510);
                  if ((this_02 != (FPCGMetadataDomain *)0x0) &&
                     (FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                                (this_02,local_518,&local_6a8,false,false,false),
                     local_6a8.SubPathString.Data.AllocatorInstance.Data !=
                     (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_6a8.SubPathString.Data.AllocatorInstance.Data);
                  }
                }
                PCGAttributeAccessorHelpers::CreateAccessor
                          ((UPCGData *)local_7c8,(FPCGAttributePropertySelector *)pUVar30,
                           SUB81(&local_608,0));
                PCGAttributeAccessorHelpers::CreateKeys
                          ((UPCGData *)&local_7b0.ObjectPtr,(FPCGAttributePropertySelector *)pUVar30
                          );
                if (((IPCGAttributeAccessor *)local_7c8._0_8_ == (IPCGAttributeAccessor *)0x0) ||
                   (local_7b0.DebugPtr == (UPCGMetadata *)0x0)) {
                  if (1 < (byte)LogPCG._0_1_) {
                    FVar24 = FPCGAttributePropertySelector::GetName(&local_608);
                    pFVar17 = FText::FromName(&local_1a0,(FName *)FVar24);
                    pFVar18 = FText::AsLocalizable_Advanced_LocText
                                        (&local_298,L"PCGAddComponentElement",
                                         L"UnableToCreateOutputReference",
                                         L"Unable to write component references to \'{0}\'.");
                    pFVar20 = FTextFormat::FTextFormat(&local_190,pFVar18,Default);
                    pFVar17 = FText::Format<FText>(&local_2a8,pFVar20,pFVar17);
                    FText::ToString(pFVar17);
                    FPCGContext::GetTaskName(param_1,&local_2b8);
                    FPCGContext::GetExecutionSourceName(param_1,&local_2c8);
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                    }
                    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                    }
                    if (local_2a8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
                    }
                    if (local_298.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
                    }
                  }
                  if (local_7b0.DebugPtr != (UPCGMetadata *)0x0) {
                    (**(code **)(local_7b0.DebugPtr)->_padding_)(local_7b0.DebugPtr,1);
                  }
                }
                else {
                  FPCGDataPtrWrapper::operator=(&local_620->Data,pUVar30);
                  AddComponents((FPCGAddComponentElement *)local_618,
                                (FPCGAddComponentContext *)param_1,
                                (IPCGAttributeAccessor *)local_7e8._8_8_,
                                (IPCGAttributeAccessorKeys *)local_7e8._0_8_,this_03,
                                (IPCGAttributeAccessorKeys *)pIVar27,pIVar28,
                                (IPCGAttributeAccessorKeys *)pIVar29,
                                (IPCGAttributeAccessor *)local_7c8._0_8_,
                                (IPCGAttributeAccessorKeys *)local_7b0.DebugPtr);
                  if (((uint)param_1[1]._padding_ != local_7b8) &&
                     (bVar7 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), bVar7)) {
                    if (local_7b0.DebugPtr != (UPCGMetadata *)0x0) {
                      (**(code **)(local_7b0.DebugPtr)->_padding_)(local_7b0.DebugPtr,1);
                    }
                    if ((IPCGAttributeAccessor *)local_7c8._0_8_ != (IPCGAttributeAccessor *)0x0) {
                      (**(code **)*(longlong *)local_7c8._0_8_)(local_7c8._0_8_,1);
                    }
                    DestructItems<FString,int>
                              ((FString *)local_608.ExtraNames.AllocatorInstance.Data,
                               local_608.ExtraNames.ArrayNum);
                    if (local_608.ExtraNames.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_608.ExtraNames.AllocatorInstance.Data);
                    }
                    if (pIVar29 != (IPCGAttributeAccessor *)0x0) {
                      (**(code **)pIVar29->_padding_)(pIVar29,1);
                    }
                    if (pIVar28 != (IPCGAttributeAccessor *)0x0) {
                      (**(code **)pIVar28->_padding_)(pIVar28,1);
                    }
                    if (pIVar27 != (IPCGAttributeAccessor *)0x0) {
                      (**(code **)pIVar27->_padding_)(pIVar27,1);
                    }
                    if (this_03 != (IPCGAttributeAccessor *)0x0) {
                      (**(code **)this_03->_padding_)(this_03,1);
                    }
                    if ((IPCGAttributeAccessorKeys *)local_7e8._0_8_ !=
                        (IPCGAttributeAccessorKeys *)0x0) {
                      (**(code **)*(longlong *)local_7e8._0_8_)(local_7e8._0_8_,1);
                    }
                    if ((IPCGAttributeAccessor *)local_7e8._8_8_ != (IPCGAttributeAccessor *)0x0) {
                      (**(code **)*(longlong *)local_7e8._8_8_)(local_7e8._8_8_,1);
                    }
                    DestructItems<FString,int>(local_780,local_778);
                    if (local_780 != (FString *)0x0) {
                      FMemory::Free(local_780);
                    }
                    break;
                  }
                  if (local_7b0.DebugPtr != (UPCGMetadata *)0x0) {
                    (**(code **)(local_7b0.DebugPtr)->_padding_)(local_7b0.DebugPtr,1);
                  }
                }
                if ((IPCGAttributeAccessor *)local_7c8._0_8_ != (IPCGAttributeAccessor *)0x0) {
                  (**(code **)*(longlong *)local_7c8._0_8_)(local_7c8._0_8_,1);
                }
                DestructItems<FString,int>
                          ((FString *)local_608.ExtraNames.AllocatorInstance.Data,
                           local_608.ExtraNames.ArrayNum);
                FVar31.Data = local_608.ExtraNames.AllocatorInstance.Data;
LAB_149b0307b:
                if (FVar31.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar31.Data);
                }
                if (pIVar29 != (IPCGAttributeAccessor *)0x0) {
                  (**(code **)pIVar29->_padding_)(pIVar29,1);
                }
                if (pIVar28 != (IPCGAttributeAccessor *)0x0) goto LAB_149b02c39;
              }
              else {
                FPCGAttributePropertyInputSelector::CopyAndFixLast
                          ((FPCGAttributePropertyInputSelector *)&local_7d8.DebugPtr[1].bUseSeed,
                           (FPCGAttributePropertyInputSelector *)&local_688,TVar2.DebugPtr);
                TVar25 = PCGAttributeAccessorHelpers::CreateConstAccessor
                                   ((UPCGData *)local_638,
                                    (FPCGAttributePropertySelector *)TVar2.DebugPtr,
                                    SUB81(&local_688,0));
                pIVar28 = pIVar29;
                if ((IPCGAttributeAccessor *)local_220 != TVar25.Ptr) {
                  pIVar28 = (IPCGAttributeAccessor *)(TVar25.Ptr)->_padding_;
                  (TVar25.Ptr)->_padding_ = 0;
                }
                if ((undefined8 *)local_638._0_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_638._0_8_)(local_638._0_8_,1);
                }
                TVar26 = PCGAttributeAccessorHelpers::CreateConstKeys
                                   ((UPCGData *)(local_638 + 8),
                                    (FPCGAttributePropertySelector *)TVar2.DebugPtr);
                if ((IPCGAttributeAccessorKeys *)(local_220 + 8) != TVar26.Ptr) {
                  pIVar29 = (IPCGAttributeAccessor *)(TVar26.Ptr)->_padding_;
                  (TVar26.Ptr)->_padding_ = 0;
                }
                if ((undefined8 *)local_638._8_8_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_638._8_8_)(local_638._8_8_,1);
                }
                if ((pIVar28 == (IPCGAttributeAccessor *)0x0) ||
                   (pIVar29 == (IPCGAttributeAccessor *)0x0)) {
                  if (2 < (byte)LogPCG._0_1_) {
                    FVar24 = FPCGAttributePropertySelector::GetName(&local_688);
                    pFVar17 = FText::FromName(&local_1c0,(FName *)FVar24);
                    pFVar18 = FText::AsLocalizable_Advanced_LocText
                                        (&local_2d8,L"PCGAddComponentElement",
                                         L"MissingActorReferenceAttribute",
                                         L"Target actor data does not have the target attribute \'{0}\'"
                                        );
                    pFVar20 = FTextFormat::FTextFormat(&local_1b0,pFVar18,Default);
                    pFVar17 = FText::Format<FText>(&local_2e8,pFVar20,pFVar17);
                    FText::ToString(pFVar17);
                    FPCGContext::GetTaskName(param_1,&local_2f8);
                    FPCGContext::GetExecutionSourceName(param_1,&local_308);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_308.Data.AllocatorInstance.Data);
                    }
                    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                    }
                    if (local_2e8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
                    }
                    if (local_2d8.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
                    }
                  }
                  DestructItems<FString,int>
                            ((FString *)local_688.ExtraNames.AllocatorInstance.Data,
                             local_688.ExtraNames.ArrayNum);
                  FVar31.Data = local_688.ExtraNames.AllocatorInstance.Data;
                  goto LAB_149b0307b;
                }
                local_748.AssetPath.PackageName.ComparisonIndex.Value = 0;
                local_748.AssetPath.PackageName.Number = 0;
                local_748.AssetPath.AssetName.ComparisonIndex.Value = 0;
                local_748.AssetPath.AssetName.Number = 0;
                local_748.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                local_748.SubPathString.Data.ArrayNum = 0;
                local_748.SubPathString.Data.ArrayMax = 0;
                iVar11 = (**(code **)(pIVar29->_padding_ + 0x10))(pIVar29);
                if (iVar11 < 1) {
LAB_149b02cdb:
                  iVar11 = (**(code **)(pIVar29->_padding_ + 0x10))(pIVar29);
                  uVar5 = local_7e8._0_8_;
                  if (1 < iVar11) {
                    iVar11 = (**(code **)(pIVar29->_padding_ + 0x10))(pIVar29);
                    iVar12 = (**(code **)(*(longlong *)uVar5 + 0x10))(uVar5);
                    pUVar30 = local_628;
                    if (iVar11 != iVar12) {
                      if (2 < (byte)LogPCG._0_1_) {
                        local_538.Object = (FCulture *)0x0;
                        local_538.SharedReferenceCount.ReferenceController =
                             (TReferenceControllerBase<1> *)0x0;
                        iVar11 = (**(code **)(*(longlong *)local_7e8._0_8_ + 0x10))();
                        pFVar17 = FText::AsNumber(&local_1f0,iVar11,(FNumberFormattingOptions *)0x0,
                                                  &local_538);
                        local_528.Object = (FCulture *)0x0;
                        local_528.SharedReferenceCount.ReferenceController =
                             (TReferenceControllerBase<1> *)0x0;
                        iVar11 = (**(code **)(pIVar29->_padding_ + 0x10))(pIVar29);
                        pFVar18 = FText::AsNumber(&local_1e0,iVar11,(FNumberFormattingOptions *)0x0,
                                                  &local_528);
                        pFVar19 = FText::AsLocalizable_Advanced_LocText
                                            (&local_318,L"PCGAddComponentElement",
                                             L"TargetActorAndTransformsMismatch",
                                             L"Target actor data entry count \'{0}\' does not match the input entry count \'{1}\'."
                                            );
                        pFVar20 = FTextFormat::FTextFormat(&local_1d0,pFVar19,Default);
                        pFVar17 = FText::Format<FText,FText>(&local_328,pFVar20,pFVar18,pFVar17);
                        FText::ToString(pFVar17);
                        FPCGContext::GetTaskName(param_1,&local_338);
                        FPCGContext::GetExecutionSourceName(param_1,&local_348);
                        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG)
                        ;
                        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_348.Data.AllocatorInstance.Data);
                        }
                        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_338.Data.AllocatorInstance.Data);
                        }
                        if (local_328.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
                        }
                        if (local_318.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  (local_528.SharedReferenceCount.ReferenceController);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  (local_538.SharedReferenceCount.ReferenceController);
                      }
                      goto LAB_149b02bfb;
                    }
                  }
                  if (local_748.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_748.SubPathString.Data.AllocatorInstance.Data);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_688.ExtraNames.AllocatorInstance.Data,
                             local_688.ExtraNames.ArrayNum);
                  if (local_688.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_688.ExtraNames.AllocatorInstance.Data);
                  }
                  goto LAB_149b0314d;
                }
                uStack_540 = 1;
                local_398._12_4_ = uStack_53c;
                local_398.ArrayNum = 1;
                local_548 = &local_748;
                local_398.DataPtr = &local_748;
                bVar7 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                                  (pIVar28,&local_398,0,(IPCGAttributeAccessorKeys *)pIVar29,
                                   AllowBroadcastAndConstructible);
                if (bVar7) goto LAB_149b02cdb;
                if (2 < (byte)LogPCG._0_1_) {
                  FVar24 = FPCGAttributePropertySelector::GetName(&local_688);
                  pFVar17 = FText::FromName(&local_d0,(FName *)FVar24);
                  pFVar18 = FText::AsLocalizable_Advanced_LocText
                                      (&local_358,L"PCGAddComponentElement",
                                       L"InvalidActorReferenceAttribute",
                                       L"Target actor attribute \'{0}\' is not an object path.");
                  pFVar20 = FTextFormat::FTextFormat(&local_c0,pFVar18,Default);
                  pFVar17 = FText::Format<FText>(&local_368,pFVar20,pFVar17);
                  FText::ToString(pFVar17);
                  FPCGContext::GetTaskName(param_1,&local_378);
                  FPCGContext::GetExecutionSourceName(param_1,&local_388);
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_388.Data.AllocatorInstance.Data);
                  }
                  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_378.Data.AllocatorInstance.Data);
                  }
                  if (local_368.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
                  }
                  if (local_358.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
                  }
                }
LAB_149b02bfb:
                if (local_748.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_748.SubPathString.Data.AllocatorInstance.Data);
                }
                DestructItems<FString,int>
                          ((FString *)local_688.ExtraNames.AllocatorInstance.Data,
                           local_688.ExtraNames.ArrayNum);
                if (local_688.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_688.ExtraNames.AllocatorInstance.Data);
                }
                (**(code **)pIVar29->_padding_)(pIVar29,1);
LAB_149b02c39:
                (**(code **)pIVar28->_padding_)(pIVar28,1);
              }
              if (pIVar27 != (IPCGAttributeAccessor *)0x0) {
                (**(code **)pIVar27->_padding_)(pIVar27,1);
              }
              if (this_03 != (IPCGAttributeAccessor *)0x0) {
                (**(code **)this_03->_padding_)(this_03,1);
              }
              if ((IPCGAttributeAccessorKeys *)local_7e8._0_8_ != (IPCGAttributeAccessorKeys *)0x0)
              {
                (**(code **)*(longlong *)local_7e8._0_8_)(local_7e8._0_8_,1);
              }
              if ((IPCGAttributeAccessor *)local_7e8._8_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_7e8._8_8_)(local_7e8._8_8_,1);
              }
              DestructItems<FString,int>(local_780,local_778);
              if (local_780 != (FString *)0x0) {
                FMemory::Free(local_780);
              }
            }
          }
LAB_149b02cbc:
          uVar33 = (uint)param_1[1]._padding_;
        } while ((int)uVar33 < (int)local_7b8);
      }
      bVar36 = (uint)param_1[1]._padding_ == local_7b8;
      goto LAB_149b01d61;
    }
    if (1 < (byte)LogPCG._0_1_) {
      local_578.Object = (FCulture *)0x0;
      local_578.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar17 = FText::AsNumber(&local_160,local_760.ArrayNum,(FNumberFormattingOptions *)0x0,
                                &local_578);
      local_588.Object = (FCulture *)0x0;
      local_588.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar18 = FText::AsNumber(&local_150,local_7b8,(FNumberFormattingOptions *)0x0,&local_588);
      pFVar19 = FText::AsLocalizable_Advanced_LocText
                          (&local_4c0,L"PCGAddComponentElement",L"MismatchInputsAndTargetActors",
                           L"Expected either a single input for target actor or the same number as the inputs (\'{0}\') - got \'{1}\'."
                          );
      pFVar20 = FTextFormat::FTextFormat(&local_140,pFVar19,Default);
      pFVar17 = FText::Format<FText,FText>(&local_4d0,pFVar20,pFVar18,pFVar17);
      FText::ToString(pFVar17);
      FPCGContext::GetTaskName(param_1,&local_4e0);
      FPCGContext::GetExecutionSourceName(param_1,&local_4f0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
      }
      if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
      }
      if (local_4d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4d0.TextData.Reference + 0x10))();
      }
      if (local_4c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4c0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_588.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_578.SharedReferenceCount.ReferenceController);
    }
  }
  bVar36 = true;
LAB_149b01d61:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_760.AllocatorInstance.Data,local_760.ArrayNum);
  if ((FPCGTaggedData *)local_760.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_760.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_7c8._8_8_,local_7b8);
  if ((FPCGTaggedData *)local_7c8._8_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_7c8._8_8_);
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar36;
}

// IsCacheable @ 149b1cfb0

bool __thiscall
FPCGAddComponentElement::IsCacheable(FPCGAddComponentElement *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149b2d0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGAddComponentElement::SupportsBasePointDataInputs
          (FPCGAddComponentElement *this,FPCGContext *param_1)

{
  return true;
}

