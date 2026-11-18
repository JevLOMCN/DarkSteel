// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e10fb20

UClass * __cdecl UOptimusAnimAttributeDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAnimAttributeDataProvider",
               &Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusAnimAttributeDataProvider,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusAnimAttributeDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusAnimAttributeDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.InnerSingleton;
}

// UOptimusAnimAttributeDataProvider @ 14e158510

UOptimusAnimAttributeDataProvider * __thiscall
UOptimusAnimAttributeDataProvider::UOptimusAnimAttributeDataProvider
          (UOptimusAnimAttributeDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusAnimAttributeDataProvider__6B_;
  (this->SkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SkeletalMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->AttributeRuntimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeRuntimeData).ArrayNum = 0;
  (this->AttributeRuntimeData).ArrayMax = 0;
  this->AttributeBufferSize = 0;
  this->TotalNumArrays = 0;
  return this;
}

// ~UOptimusAnimAttributeDataProvider @ 14e162280

void __thiscall
UOptimusAnimAttributeDataProvider::~UOptimusAnimAttributeDataProvider
          (UOptimusAnimAttributeDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusAnimAttributeDataProvider__6B_;
  DestructItems<FOptimusAnimAttributeRuntimeData,int>
            ((FOptimusAnimAttributeRuntimeData *)(this->AttributeRuntimeData).AllocatorInstance.Data
             ,(this->AttributeRuntimeData).ArrayNum);
  pFVar1 = (this->AttributeRuntimeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d4720

UClass * __cdecl UOptimusAnimAttributeDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAnimAttributeDataProvider",
               &Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusAnimAttributeDataProvider,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusAnimAttributeDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusAnimAttributeDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dc2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FComputeDataProviderRenderProxy * __thiscall
UOptimusAnimAttributeDataProvider::GetRenderProxy(UOptimusAnimAttributeDataProvider *this)

{
  FComputeDataProviderRenderProxy *pFVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  FName FVar5;
  TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *pTVar6;
  FName *pFVar7;
  FComputeDataProviderRenderProxy FVar8;
  code *pcVar9;
  FName FVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UObject *pUVar15;
  FComputeDataProviderRenderProxy *pFVar16;
  undefined8 uVar17;
  FName FVar18;
  FName *pFVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *this_00;
  uint uVar23;
  FName *pFVar24;
  longlong lVar25;
  longlong *plVar26;
  undefined1 auStackY_158 [32];
  FComputeDataProviderRenderProxy *local_128;
  uint local_120;
  longlong local_110;
  undefined4 uStack_f4;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  FName local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_128 = ::operator_new(0x58);
  if (local_128 == (FComputeDataProviderRenderProxy *)0x0) {
    local_128 = (FComputeDataProviderRenderProxy *)0x0;
  }
  else {
    iVar3 = this->TotalNumArrays;
    pFVar16 = local_128 + 1;
    iVar13 = this->AttributeBufferSize;
    pFVar1 = local_128 + 5;
    local_128[7] = (FComputeDataProviderRenderProxy)0x0;
    local_128[8] = (FComputeDataProviderRenderProxy)0x0;
    local_128[9] = (FComputeDataProviderRenderProxy)0x0;
    *local_128 = (FComputeDataProviderRenderProxy)&___7FOptimusAnimAttributeDataProviderProxy__6B_;
    local_128[10] = (FComputeDataProviderRenderProxy)0x0;
    *(int *)(local_128 + 2) = 0;
    *pFVar16 = (FComputeDataProviderRenderProxy)0x0;
    *(undefined4 *)&local_128[2].field_0x4 = 0;
    local_128[3] = (FComputeDataProviderRenderProxy)0x0;
    *(int *)(local_128 + 4) = 0;
    *(undefined4 *)&local_128[4].field_0x4 = 0;
    *pFVar1 = (FComputeDataProviderRenderProxy)0x0;
    *(int *)(local_128 + 6) = 0;
    *(undefined4 *)&local_128[6].field_0x4 = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar13,(ForAnyElementType *)pFVar16,(int *)(local_128 + 2),
                        (int *)&local_128[2].field_0x4);
    memset(*(FScriptContainerElement **)pFVar16 + iVar12,0,(longlong)iVar13);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,(ForAnyElementType *)(local_128 + 3),(int *)(local_128 + 4),
               (int *)&local_128[4].field_0x4);
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar3,(ForAnyElementType *)pFVar1,(int *)(local_128 + 6),
                        (int *)&local_128[6].field_0x4);
    DefaultConstructItems<FArrayShaderValue,int>
              (*(FScriptContainerElement **)pFVar1 + (longlong)iVar13 * 0x10,iVar3);
  }
  FOptimusDataTypeRegistry::Get();
  pUVar15 = FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
  local_120 = 0;
  iVar3 = *(int *)&pUVar15[0x28].field_0x20;
  if ((this->AttributeRuntimeData).ArrayNum < 1) {
    return local_128;
  }
  local_110 = 0;
LAB_14e1dc485:
  uVar23 = 0;
  if ((int)local_120 < (this->AttributeRuntimeData).ArrayNum) {
    uVar23 = ~local_120 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
    return pFVar16;
  }
  pFVar24 = (FName *)((this->AttributeRuntimeData).AllocatorInstance.Data + local_110);
  uVar23 = 0;
  if (0 < (int)pFVar24[0xd].ComparisonIndex.Value) {
    lVar25 = 0;
    do {
      uVar20 = pFVar24[4].Number + uVar23;
      uVar21 = 0;
      if ((int)uVar23 < (int)pFVar24[0xd].ComparisonIndex.Value) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
        return pFVar16;
      }
      FVar5 = pFVar24[0xc];
      if (((int)uVar20 < 0) || (*(int *)(local_128 + 4) <= (int)uVar20)) {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4068075417976701574>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAnimAttribute.cpp"
                            ,0x286,"Proxy->AttributeArrayMetadata.IsValidIndex(ToplevelArrayIndex)")
        ;
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
          return pFVar16;
        }
      }
      else {
        iVar13 = *(int *)((longlong)FVar5 + 4 + lVar25);
        uVar21 = pFVar24[3].Number;
        uVar14 = 0;
        if ((int)uVar20 < *(int *)(local_128 + 4)) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
          return pFVar16;
        }
        *(uint *)((longlong)(int)uVar20 * 8 + (longlong)local_128[3]) = iVar13 + uVar21;
        uVar4 = *(undefined4 *)((longlong)FVar5 + lVar25);
        uVar21 = 0;
        if ((int)uVar20 < *(int *)(local_128 + 4)) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
          return pFVar16;
        }
        *(undefined4 *)((longlong)local_128[3] + 4 + (longlong)(int)uVar20 * 8) = uVar4;
      }
      uVar23 = uVar23 + 1;
      lVar25 = lVar25 + 8;
    } while ((int)uVar23 < (int)pFVar24[0xd].ComparisonIndex.Value);
  }
  FVar10 = UE::Anim::BoneAttributeNamespace;
  local_78 = pFVar24[6];
  uVar23 = pFVar24[3].ComparisonIndex.Value;
  FVar5 = *pFVar24;
  local_50 = (longlong *)0x0;
  if (local_78 != (FName)0x0) {
    FVar18 = pFVar24[0xb];
    if (FVar18 == (FName)0x0) {
      FVar18 = (FName)(pFVar24 + 8);
    }
    (*(code *)**(undefined8 **)FVar18)(FVar18,local_68);
    if (local_78 == (FName)0x0) goto LAB_14e1dcc78;
    pTVar6 = *(TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> **)
              ((longlong)pUVar15 + (longlong)iVar3 * 0x40 + 0xf68);
    FVar18 = pFVar24[0xe];
    iVar13 = *(int *)((longlong)pUVar15 + (longlong)iVar3 * 0x40 + 0xf70);
    for (this_00 = pTVar6; this_00 != pTVar6 + iVar13; this_00 = this_00 + 1) {
      bVar11 = TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                         (this_00,(UScriptStruct *)FVar18);
      if (bVar11) {
        uVar21 = (uint)((longlong)this_00 - (longlong)pTVar6 >> 3);
        if (uVar21 != 0xffffffff) {
          uVar20 = 0;
          if ((int)uVar21 < *(int *)((longlong)pUVar15 + (longlong)iVar3 * 0x40 + 0xf50)) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
            return pFVar16;
          }
          lVar25 = *(longlong *)((longlong)pUVar15 + (longlong)iVar3 * 0x40 + 0xf48);
          pFVar7 = *(FName **)(lVar25 + (longlong)(int)uVar21 * 0x10);
          pFVar19 = pFVar7;
          goto joined_r0x00014e1dc84a;
        }
        break;
      }
    }
    goto LAB_14e1dc70d;
  }
  goto LAB_14e1dcc78;
joined_r0x00014e1dc84a:
  if (pFVar19 ==
      (FName *)((longlong)pFVar7 +
               (longlong)*(int *)(lVar25 + 8 + (longlong)(int)uVar21 * 0x10) * 0x14))
  goto LAB_14e1dc86d;
  if (((pFVar19[2].ComparisonIndex.Value == uVar23) && (pFVar19[1] == FVar5)) &&
     (*pFVar19 == FVar10)) {
    uVar23 = (uint)(((longlong)pFVar19 - (longlong)pFVar7) / 0x14);
    goto LAB_14e1dc872;
  }
  pFVar19 = (FName *)&pFVar19[2].Number;
  goto joined_r0x00014e1dc84a;
LAB_14e1dc86d:
  uVar23 = 0xffffffff;
LAB_14e1dc872:
  if ((((int)uVar21 < 0) ||
      (*(int *)((longlong)pUVar15 + (longlong)iVar3 * 0x40 + 0xf60) <= (int)uVar21)) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1265464598543204837>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                          ,0x1e5,"Values.IsValidIndex(TypeIndex)"), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
    return pFVar16;
  }
  uVar20 = 0;
  if ((int)uVar21 < *(int *)((longlong)pUVar15 + (longlong)iVar3 * 0x40 + 0xf60)) {
    uVar20 = ~uVar21 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
    return pFVar16;
  }
  plVar26 = (longlong *)
            (*(longlong *)((longlong)pUVar15 + (longlong)iVar3 * 0x40 + 0xf58) +
            (longlong)(int)uVar21 * 0x10);
  if (uVar23 != 0xffffffff) {
    plVar2 = plVar26 + 1;
    if ((((int)uVar23 < 0) || ((int)*plVar2 <= (int)uVar23)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1265464598543204842>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                            ,0x1ea,"TypedArray.IsValidIndex(AttributeIndex)"), bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
      return pFVar16;
    }
    uVar21 = 0;
    if ((int)uVar23 < (int)*plVar2) {
      uVar21 = ~uVar23 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
      return pFVar16;
    }
    lVar25 = *(longlong *)(*plVar26 + (longlong)(int)uVar23 * 0x10);
    if (lVar25 != 0) {
      uVar23 = pFVar24[0xd].ComparisonIndex.Value;
      uVar21 = *(int *)((longlong)FVar18 + 0x58) + -1 + (int)*(short *)((longlong)FVar18 + 0x5c) &
               -(int)*(short *)((longlong)FVar18 + 0x5c);
      lVar22 = (longlong)(int)pFVar24[4].Number * 0x10 + (longlong)local_128[5];
      if (((int)uVar23 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
        return pFVar16;
      }
      uVar20 = pFVar24[3].Number;
      FVar8 = local_128[1];
      uVar14 = pFVar24[4].ComparisonIndex.Value;
      if (((int)uVar14 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
        return pFVar16;
      }
      uStack_a0 = CONCAT44(uStack_cc,uVar23);
      local_a8 = lVar22;
      if (((int)uVar21 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
        return pFVar16;
      }
      uStack_c0 = CONCAT44(uStack_dc,uVar21);
      local_88 = local_a8;
      uStack_80 = uStack_a0;
      local_c8 = lVar25;
      local_98 = (longlong)(int)uVar20 + (longlong)FVar8;
      uStack_90 = CONCAT44(uStack_f4,uVar14);
      UE::Core::Private::Function::CheckCallable((void *)local_78);
      FVar5 = local_78;
      plVar26 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar26 = local_50;
      }
      uVar17 = (**(code **)(*plVar26 + 8))();
      (*(code *)FVar5)(uVar17,&local_c8,&local_98);
      goto LAB_14e1dcc4b;
    }
  }
LAB_14e1dc70d:
  uVar23 = pFVar24[3].Number;
  FVar5 = pFVar24[0xf];
  uVar21 = pFVar24[0x10].ComparisonIndex.Value;
  uVar20 = 0;
  if ((int)uVar23 < *(int *)(local_128 + 2)) {
    uVar20 = ~uVar23 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
    return pFVar16;
  }
  memcpy((void *)((longlong)(int)uVar23 + (longlong)local_128[1]),(void *)FVar5,(ulonglong)uVar21);
  uVar23 = pFVar24[0x12].ComparisonIndex.Value;
  if (pFVar24[0xd].ComparisonIndex.Value == uVar23) {
    uVar21 = 0;
    if (0 < (int)uVar23) {
      do {
        uVar20 = pFVar24[4].Number + uVar21;
        if (((int)uVar20 < 0) || (*(int *)(local_128 + 6) <= (int)uVar20)) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4068075417976701623>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAnimAttribute.cpp"
                              ,0x2b7,"Proxy->AttributeArrayData.IsValidIndex(ToplevelArrayIndex)");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
            return pFVar16;
          }
        }
        else {
          uVar14 = 0;
          if ((int)uVar21 < (int)uVar23) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
            return pFVar16;
          }
          FVar5 = pFVar24[0x11];
          uVar23 = 0;
          if ((int)uVar20 < *(int *)(local_128 + 6)) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
            return pFVar16;
          }
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                     ((longlong)(int)uVar20 * 0x10 + (longlong)local_128[5]),
                     (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                     ((longlong)(int)uVar21 * 0x10 + (longlong)FVar5));
        }
        uVar23 = pFVar24[0x12].ComparisonIndex.Value;
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (int)uVar23);
    }
  }
  else {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4068075417976701618>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAnimAttribute.cpp"
                        ,0x2b2,
                        "AttributeData.ArrayMetadata.Num() == AttributeData.CachedDefaultValue.ArrayList.Num()"
                       );
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar9)();
      return pFVar16;
    }
  }
LAB_14e1dcc4b:
  if (local_78 != (FName)0x0) {
    plVar26 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar26 = local_50;
    }
    (**(code **)(*plVar26 + 0x10))();
  }
LAB_14e1dcc78:
  local_120 = local_120 + 1;
  local_110 = local_110 + 0xa0;
  if ((this->AttributeRuntimeData).ArrayNum <= (int)local_120) {
    return local_128;
  }
  goto LAB_14e1dc485;
}

// Init @ 14e1eadc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusAnimAttributeDataProvider::Init
          (UOptimusAnimAttributeDataProvider *this,USkeletalMeshComponent *param_1,
          TArray<FOptimusAnimAttributeDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this_00;
  FOptimusDataType *pFVar1;
  FShaderParametersMetadata *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  USkeletalMeshComponent *pUVar8;
  USkeletalMesh *pUVar9;
  longlong lVar10;
  TTuple<FName,int> *pTVar11;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  wchar_t *pwVar15;
  uint uVar16;
  FOptimusAnimAttributeDescription *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined4 *puVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  undefined4 uVar22;
  uint uVar23;
  TArray<FOptimusAnimAttributeRuntimeData,TSizedDefaultAllocator<32>_> *pTVar24;
  FOptimusAnimAttributeDescription *pFVar25;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166 [6];
  ForAnyElementType local_160;
  int local_158 [2];
  undefined1 local_150 [8];
  FShaderParametersMetadata *local_148;
  UOptimusAnimAttributeDataProvider *local_140;
  TArray<FShaderParametersMetadata_*,TSizedDefaultAllocator<32>_> local_138;
  FShaderParametersMetadataBuilder local_128;
  USkeletalMeshComponent *local_110;
  TArray<FOptimusAnimAttributeRuntimeData,TSizedDefaultAllocator<32>_> *local_108;
  TSharedPtr<FOptimusDataType_const_,1> local_100;
  undefined1 local_e8 [96];
  ForAnyElementType local_88;
  ForAnyElementType local_70;
  ForAnyElementType local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_140 = this;
  local_110 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = &this->SkeletalMesh;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_110);
  iVar6 = param_2->ArrayNum;
  pFVar17 = (FOptimusAnimAttributeDescription *)(param_2->AllocatorInstance).Data;
  pFVar25 = pFVar17 + iVar6;
  pTVar24 = &this->AttributeRuntimeData;
  local_108 = pTVar24;
  while( true ) {
    if (param_2->ArrayNum != iVar6) {
      local_168 = 0;
      `TCheckedPointerIterator<FOptimusAnimAttributeDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_168);
    }
    if (pFVar17 == pFVar25) break;
    FOptimusAnimAttributeRuntimeData::FOptimusAnimAttributeRuntimeData
              ((FOptimusAnimAttributeRuntimeData *)local_e8,pFVar17);
    pFVar18 = (pTVar24->AllocatorInstance).Data;
    if (((pFVar18 <= (FScriptContainerElement *)local_e8) &&
        ((FScriptContainerElement *)local_e8 <
         pFVar18 + (longlong)(this->AttributeRuntimeData).ArrayMax * 0xa0)) &&
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
    iVar5 = (this->AttributeRuntimeData).ArrayNum;
    if (iVar5 == (this->AttributeRuntimeData).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10a0,&pTVar24->AllocatorInstance,&(this->AttributeRuntimeData).ArrayMax);
      (this->AttributeRuntimeData).ArrayNum = iVar5;
    }
    (this->AttributeRuntimeData).ArrayNum = iVar5 + 1;
    FOptimusAnimAttributeRuntimeData::FOptimusAnimAttributeRuntimeData
              ((FOptimusAnimAttributeRuntimeData *)
               ((pTVar24->AllocatorInstance).Data + (longlong)iVar5 * 0xa0),
               (FOptimusAnimAttributeRuntimeData *)local_e8);
    DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)local_60.Data,local_58);
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if (local_e8._48_8_ != 0) {
      plVar13 = (longlong *)(local_e8 + 0x40);
      if ((longlong *)local_e8._88_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_e8._88_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    pFVar17 = pFVar17 + 1;
  }
  iVar6 = (this->AttributeRuntimeData).ArrayNum;
  pFVar18 = (pTVar24->AllocatorInstance).Data;
  pFVar21 = pFVar18 + (longlong)iVar6 * 0xa0;
  puVar19 = (undefined4 *)0x0;
  do {
    while( true ) {
      if (pTVar24->ArrayNum != iVar6) {
        local_167 = 0;
        `TCheckedPointerIterator<FOptimusAnimAttributeRuntimeData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_167);
      }
      if (pFVar18 == pFVar21) {
        iVar6 = param_2->ArrayNum;
        pFVar18 = (param_2->AllocatorInstance).Data;
        local_128.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar21 = pFVar18 + (longlong)iVar6 * 0x78;
        local_128.Members.ArrayNum = 0;
        local_128.Members.ArrayMax = 0;
        local_128.NextMemberOffset = 0;
        local_160.Data = (FScriptContainerElement *)0x0;
        local_158[0] = 0;
        local_158[1] = 0;
        local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.ArrayNum = 0;
        local_138.ArrayMax = 0;
        while( true ) {
          if (param_2->ArrayNum != iVar6) {
            local_166[0] = 0;
            `TCheckedPointerIterator<FOptimusAnimAttributeDescription_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_166);
          }
          if (pFVar18 == pFVar21) break;
          pTVar12 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(pFVar18 + 0x18),&local_100)
          ;
          pFVar1 = pTVar12->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_100.SharedReferenceCount.ReferenceController);
          if (*(int *)(pFVar18 + 0x60) == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = *(wchar_t **)(pFVar18 + 0x58);
          }
          ComputeFramework::AddParamForType(&local_128,pwVar15,&pFVar1->ShaderValueType,&local_138);
          pFVar18 = pFVar18 + 0x78;
        }
        local_148 = FShaderParametersMetadataBuilder::Build
                              (&local_128,ShaderParameterStruct,L"UAnimAttributeDataInterface");
        if (((local_160.Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 < local_160.Data + (longlong)local_158[1] * 8))
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
        iVar6 = local_158[0];
        if (local_158[0] == local_158[1]) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_160,local_158 + 1);
        }
        local_158[0] = iVar6 + 1;
        *(FShaderParametersMetadata **)(local_160.Data + (longlong)iVar6 * 8) = local_148;
        lVar10 = (longlong)local_138.ArrayNum;
        if (local_138.ArrayNum != 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_138.ArrayNum,&local_160,local_158,local_158 + 1);
          memcpy(local_160.Data + (longlong)iVar6 * 8,local_138.AllocatorInstance.Data,lVar10 << 3);
        }
        pFVar2 = local_148;
        local_140->TotalNumArrays = 0;
        if (0 < (local_140->AttributeRuntimeData).ArrayNum) {
          lVar10 = 0;
          puVar14 = puVar19;
          do {
            uVar16 = (uint)puVar19;
            uVar23 = ~uVar16 >> 0x1f;
            uVar7 = 0;
            if ((int)uVar16 < (local_140->AttributeRuntimeData).ArrayNum) {
              uVar7 = uVar23;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar18 = (local_140->AttributeRuntimeData).AllocatorInstance.Data;
            uVar7 = 0;
            if ((int)uVar16 < (pFVar2->Members).ArrayNum) {
              uVar7 = uVar23;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            bVar4 = ::FName::Equals(*(FName *)(pFVar18 + lVar10 + 8),
                                    *(wchar_t **)
                                     ((longlong)puVar14 +
                                     (longlong)(pFVar2->Members).AllocatorInstance.Data));
            if ((!bVar4) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RuntimeData.HlslId == Members[Index].GetName()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAnimAttribute.cpp"
                                   ,0x266,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = 0;
            if ((int)uVar16 < (pFVar2->Members).ArrayNum) {
              uVar7 = uVar23;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar19 = (undefined4 *)(ulonglong)(uVar16 + 1);
            pFVar21 = (FScriptContainerElement *)
                      ((longlong)puVar14 +
                      (longlong)((pFVar2->Members).AllocatorInstance.Data + 0x14));
            puVar14 = puVar14 + 0xc;
            *(undefined4 *)(pFVar18 + lVar10 + 0x1c) = *(undefined4 *)pFVar21;
            *(int *)(pFVar18 + lVar10 + 0x24) = local_140->TotalNumArrays;
            local_140->TotalNumArrays =
                 local_140->TotalNumArrays + *(int *)(pFVar18 + lVar10 + 0x68);
            lVar10 = lVar10 + 0xa0;
          } while ((int)(uVar16 + 1) < (local_140->AttributeRuntimeData).ArrayNum);
        }
        iVar6 = local_158[0];
        local_140->AttributeBufferSize = local_148->Size;
        pFVar18 = local_160.Data + (longlong)local_158[0] * 8;
        FVar20.Data = local_160.Data;
        while( true ) {
          if (local_158[0] != iVar6) {
            `TCheckedPointerIterator<FShaderParametersMetadata_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_150);
          }
          if (FVar20.Data == pFVar18) break;
          pFVar2 = *(FShaderParametersMetadata **)FVar20.Data;
          if (pFVar2 != (FShaderParametersMetadata *)0x0) {
            (**(code **)pFVar2->_padding_)(pFVar2,1);
          }
          FVar20.Data = FVar20.Data + 8;
        }
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
        if (local_160.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data);
        }
        if (local_128.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Members.AllocatorInstance.Data);
        }
        return;
      }
      bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar4) break;
LAB_14e1eb027:
      pFVar18 = pFVar18 + 0xa0;
    }
    pUVar8 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar8);
    if (pUVar9 == (USkeletalMesh *)0x0) goto LAB_14e1eb027;
    if (*(longlong *)(pFVar18 + 0x10) == 0) {
      *(undefined4 *)(pFVar18 + 0x18) = 0;
      goto LAB_14e1eb027;
    }
    pUVar8 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar8);
    lVar10 = (**(code **)(pUVar9->_padding_ + 800))(pUVar9);
    uVar22 = 0xffffffff;
    if (*(FName *)(pFVar18 + 0x10) != (FName)0x0) {
      pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)(lVar10 + 0x90),*(FName *)(pFVar18 + 0x10));
      puVar14 = (undefined4 *)&pTVar11->field_0x8;
      if (pTVar11 == (TTuple<FName,int> *)0x0) {
        puVar14 = puVar19;
      }
      if (puVar14 != (undefined4 *)0x0) {
        uVar22 = *puVar14;
      }
    }
    *(undefined4 *)(pFVar18 + 0x18) = uVar22;
    pFVar18 = pFVar18 + 0xa0;
    pTVar24 = local_108;
  } while( true );
}

// StaticRegisterNativesUOptimusAnimAttributeDataProvider @ 14e225790

void __cdecl
UOptimusAnimAttributeDataProvider::StaticRegisterNativesUOptimusAnimAttributeDataProvider(void)

{
  return;
}

