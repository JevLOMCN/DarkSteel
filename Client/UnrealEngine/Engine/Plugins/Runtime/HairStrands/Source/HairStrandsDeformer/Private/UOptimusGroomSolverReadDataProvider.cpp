// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 9

// StaticClass @ 14e257ea0

UClass * __cdecl UOptimusGroomSolverReadDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomSolverReadDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomSolverReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomSolverReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomSolverReadDataProvider,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomSolverReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomSolverReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomSolverReadDataProvider.InnerSingleton;
}

// UOptimusGroomSolverReadDataProvider @ 14e26afc0

UOptimusGroomSolverReadDataProvider * __thiscall
UOptimusGroomSolverReadDataProvider::UOptimusGroomSolverReadDataProvider
          (UOptimusGroomSolverReadDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SolverComponent).field0_0x0.DebugPtr = (UGroomSolverComponent *)0x0;
  (this->DeformerInstance).field0_0x0.DebugPtr = (UOptimusDeformerInstance *)0x0;
  (this->WeakDataInterface).WeakPtr = (FWeakObjectPtr)0x0;
  this->bResetSimulationCount = 0;
  return this;
}

// UOptimusGroomSolverReadDataProvider @ 14e26b010

UOptimusGroomSolverReadDataProvider * __thiscall
UOptimusGroomSolverReadDataProvider::UOptimusGroomSolverReadDataProvider
          (UOptimusGroomSolverReadDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SolverComponent).field0_0x0.DebugPtr = (UGroomSolverComponent *)0x0;
  (this->DeformerInstance).field0_0x0.DebugPtr = (UOptimusDeformerInstance *)0x0;
  (this->WeakDataInterface).WeakPtr = (FWeakObjectPtr)0x0;
  this->bResetSimulationCount = 0;
  return this;
}

// ~UOptimusGroomSolverReadDataProvider @ 14e26b4d0

void __thiscall
UOptimusGroomSolverReadDataProvider::~UOptimusGroomSolverReadDataProvider
          (UOptimusGroomSolverReadDataProvider *this)

{
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&___7IOptimusDeformerInstanceAccessor__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e283190

UClass * __cdecl UOptimusGroomSolverReadDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomSolverReadDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomSolverReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomSolverReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomSolverReadDataProvider,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomSolverReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomSolverReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomSolverReadDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e283b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomSolverReadDataProvider::GetRenderProxy(UOptimusGroomSolverReadDataProvider *this)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *pTVar4;
  uint uVar5;
  UOptimusDeformerInstance *this_00;
  UGroomSolverComponent *this_01;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  FName *pFVar12;
  FComputeDataProviderRenderProxy *pFVar13;
  UClass *pUVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  FOptimusGroomSolverReadDataProviderProxy *this_02;
  FOptimusGroomSolverReadDataProviderProxy *pFVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  TObjectPtr<UGroomSolverComponent>_u_0 TVar19;
  uint uVar20;
  TObjectPtr<UGroomSolverComponent>_u_0 TVar21;
  undefined8 *puVar22;
  uint uVar23;
  TObjectPtr<UGroomSolverComponent>_u_0 *pTVar24;
  undefined8 *puVar25;
  TObjectPtr<UGroomSolverComponent>_u_0 TVar26;
  undefined1 auStack_218 [32];
  TObjectPtr<UGroomSolverComponent>_u_0 *local_1f8;
  TObjectPtr<UGroomSolverComponent>_u_0 *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> local_1b0;
  TObjectPtr<UGroomSolverComponent>_u_0 local_1a0;
  uint local_198;
  TObjectPtr<UGroomSolverComponent>_u_0 local_190;
  TObjectPtr<UGroomSolverComponent>_u_0 local_188;
  TObjectPtr<UGroomSolverComponent>_u_0 *local_180;
  TObjectPtr<UGroomSolverComponent>_u_0 *local_178;
  UOptimusGroomSolverReadDataProvider *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined1 local_138 [12];
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  FInstancedStruct local_108;
  undefined1 local_f8 [24];
  longlong lStack_e0;
  longlong lStack_d8;
  int local_d0;
  undefined4 uStack_cc;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *local_c8;
  longlong lStack_c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  int local_a0;
  undefined4 uStack_9c;
  FName local_98;
  FName local_90;
  TObjectPtr<UGroomSolverComponent>_u_0 local_88;
  undefined8 *local_80;
  TRangedForConstIterator local_78;
  FName local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  TVar21.DebugPtr = (UGroomSolverComponent *)0x0;
  local_198 = 0;
  bVar9 = false;
  local_170 = this;
  pUVar11 = FWeakObjectPtr::Get(&(this->WeakDataInterface).WeakPtr);
  if (pUVar11 == (UObject *)0x0) goto LAB_14e28436a;
  this_00 = (this->DeformerInstance).field0_0x0.DebugPtr;
  pFVar12 = ::FName::FName(&local_98,0x16,L"ResetSimulationTrigger",FNAME_Add);
  UOptimusDeformerInstance::GetDataInterfacePropertyOverride
            (this_00,(FOptimusValueContainerStruct *)&local_108,(UComputeDataInterface *)pUVar11,
             *pFVar12);
  pFVar12 = ::FName::FName(&local_90,FOptimusValueContainerStruct::ValuePropertyName);
  FInstancedPropertyBag::GetValueName
            ((FInstancedPropertyBag *)&local_108,
             (TValueOrError<FName,EPropertyBagResult> *)&local_48,*pFVar12);
  bVar8 = TVariant<FName,TValueOrError<FName,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<FName,enum_EPropertyBagResult>::FEmptyType>
          ::IsType<FName>(&local_48);
  if (bVar8) {
    if ((local_40 != '\0') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FComputeDataProviderRenderProxy *)(*pcVar6)();
      return pFVar13;
    }
    TVar19 = (TObjectPtr<UGroomSolverComponent>_u_0)(this->SolverComponent).field0_0x0.DebugPtr;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    if (TVar19.DebugPtr == (UGroomSolverComponent *)0x0) {
LAB_14e283cff:
      local_190.DebugPtr = (UGroomSolverComponent *)0x0;
      if (TVar19.DebugPtr == (UGroomSolverComponent *)0x0) {
LAB_14e283d2b:
        TVar19.DebugPtr = TVar21.DebugPtr;
      }
      else {
        pUVar14 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
        iVar10 = (int)pUVar14->_padding_;
        if ((*(int *)((TVar19.DebugPtr)->_padding_ + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar14->_padding_)) goto LAB_14e283d2b;
      }
      if (TVar19.DebugPtr != (UGroomSolverComponent *)0x0) {
        puVar3 = &((TVar19.DebugPtr)->GroomComponents).Elements.field_0x10;
        local_168._padding_._0_4_ = 0;
        pTVar4 = &(TVar19.DebugPtr)->GroomComponents;
        local_168._padding_._4_4_ = 1;
        local_168.UnvisitedBitMask = 0xffffffff;
        local_168.CurrentBitIndex = 0;
        local_168.BaseBitIndex = 0;
        local_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
        if (*(int *)&((TVar19.DebugPtr)->GroomComponents).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
        }
        unique0x100006a8 =
             (TBitArray<FDefaultBitArrayAllocator> *)
             CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
        uStack_120 = CONCAT44(local_168.CurrentBitIndex,local_168.UnvisitedBitMask);
        local_118 = CONCAT44(local_168._28_4_,local_168.BaseBitIndex);
        local_d0 = *(int *)&((TVar19.DebugPtr)->GroomComponents).Elements.field_0x8 -
                   *(int *)&((TVar19.DebugPtr)->GroomComponents).Elements.field_0x34;
        local_f8._16_8_ = local_168.Array;
        uStack_110._4_4_ = uStack_cc;
        uStack_110._0_4_ = local_d0;
        local_128 = local_168.Array;
        local_138._0_8_ = pTVar4;
        local_f8._0_8_ = pTVar4;
        local_f8._8_8_ = unique0x100006a8;
        lStack_e0 = uStack_120;
        lStack_d8 = local_118;
        pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_f8,
                             (TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                             *(int *)&((TVar19.DebugPtr)->GroomComponents).Elements.field_0x28);
        lStack_c0 = pTVar15->_padding_;
        pTStack_b8 = pTVar15->Array;
        lStack_b0._0_4_ = pTVar15->UnvisitedBitMask;
        lStack_b0._4_4_ = pTVar15->CurrentBitIndex;
        lStack_a8 = *(longlong *)&pTVar15->BaseBitIndex;
        local_a0 = *(int *)&((TVar19.DebugPtr)->GroomComponents).Elements.field_0x8 -
                   *(int *)&((TVar19.DebugPtr)->GroomComponents).Elements.field_0x34;
        local_78._44_4_ = uStack_9c;
        local_78.InitialNum = local_a0;
        local_c8 = pTVar4;
        local_78._padding_ = (longlong)pTVar4;
        local_78._padding_ = lStack_c0;
        local_78._padding_ = (longlong)pTStack_b8;
        local_78._padding_ = lStack_b0;
        local_78._padding_ = lStack_a8;
        bVar9 = TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!=
                          ((TRangedForConstIterator *)local_138,&local_78);
        if (bVar9) {
          do {
            local_188 = *(TObjectPtr<UGroomSolverComponent>_u_0 *)
                         (*(longlong *)
                           (TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_138._0_8_ + (longlong)uStack_120._4_4_ * 0x10);
            if (local_1c0.Data <= &local_188) {
              if (&local_188 <
                  (TObjectPtr<UGroomSolverComponent>_u_0 *)
                  (local_1c0.Data + (longlong)local_1b8._4_4_ * 8)) {
                local_1e0 = (longlong)(int)(uint)local_1b8;
                local_1d8 = 8;
                local_1f8 = &local_188;
                local_1f0 = (TObjectPtr<UGroomSolverComponent>_u_0 *)local_1c0.Data;
                local_1e8 = (longlong)local_1b8._4_4_;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  pFVar13 = (FComputeDataProviderRenderProxy *)(*pcVar6)();
                  return pFVar13;
                }
              }
            }
            iVar10 = (uint)local_1b8;
            if ((uint)local_1b8 == local_1b8._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1c0,(int *)((longlong)&local_1b8 + 4));
            }
            local_1b8 = CONCAT44(local_1b8._4_4_,iVar10 + 1);
            *(TObjectPtr<UGroomSolverComponent>_u_0 *)(local_1c0.Data + (longlong)iVar10 * 8) =
                 local_188;
            uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_12c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_138 + 8));
            bVar9 = TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!=
                              ((TRangedForConstIterator *)local_138,&local_78);
          } while (bVar9);
        }
      }
    }
    else {
      pUVar14 = Z_Construct_UClass_UGroomComponent_NoRegister();
      iVar10 = (int)pUVar14->_padding_;
      if ((*(int *)((TVar19.DebugPtr)->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar14->_padding_)) goto LAB_14e283cff;
      local_190 = TVar19;
      if (local_1c0.Data <= &local_190) {
        if (&local_190 <
            (TObjectPtr<UGroomSolverComponent>_u_0 *)
            (local_1c0.Data + (longlong)local_1b8._4_4_ * 8)) {
          local_1e0 = (longlong)(int)(uint)local_1b8;
          local_1d8 = 8;
          local_1f8 = &local_190;
          local_1f0 = (TObjectPtr<UGroomSolverComponent>_u_0 *)local_1c0.Data;
          local_1e8 = (longlong)local_1b8._4_4_;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FComputeDataProviderRenderProxy *)(*pcVar6)();
            return pFVar13;
          }
        }
      }
      iVar10 = (uint)local_1b8;
      if ((uint)local_1b8 == local_1b8._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1c0,(int *)((longlong)&local_1b8 + 4));
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar10 + 1);
      ((TObjectPtr<UGroomSolverComponent>_u_0 *)(local_1c0.Data + (longlong)iVar10 * 8))->DebugPtr =
           (UGroomSolverComponent *)local_190;
    }
    iVar10 = (uint)local_1b8;
    pTVar24 = (TObjectPtr<UGroomSolverComponent>_u_0 *)
              (local_1c0.Data + (longlong)(int)(uint)local_1b8 * 8);
    FVar18.Data = local_1c0.Data;
    while( true ) {
      if ((uint)local_1b8 != iVar10) {
        local_1c8 = 0;
        `TCheckedPointerIterator<UGroomComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1c8);
      }
      if ((TObjectPtr<UGroomSolverComponent>_u_0 *)FVar18.Data == pTVar24) goto LAB_14e283f43;
      if ((char)((*(UGroomSolverComponent **)FVar18.Data)->GroomSolverProxy)._padding_ != '\0')
      break;
      FVar18.Data = FVar18.Data + 8;
    }
    this->bResetSimulationCount = 0;
LAB_14e283f43:
    if (0 < this->bResetSimulationCount) {
      local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.ArrayMax = 0;
      DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
                ((TRefCountPtr<FHairGroupInstance_const_> *)0x0,0);
      uVar17 = (ulonglong)(int)(uint)local_1b8;
      local_1b0.ArrayNum = 0;
      pTVar24 = (TObjectPtr<UGroomSolverComponent>_u_0 *)(local_1c0.Data + uVar17 * 8);
      local_198 = (uint)local_1b8;
      TVar19 = local_88;
      puVar22 = local_80;
      FVar18.Data = local_1c0.Data;
      local_180 = pTVar24;
      while( true ) {
        local_178 = (TObjectPtr<UGroomSolverComponent>_u_0 *)FVar18.Data;
        if ((uint)local_1b8 != (int)uVar17) {
          local_1c7[0] = 0;
          `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1c7);
        }
        if ((TObjectPtr<UGroomSolverComponent>_u_0 *)FVar18.Data == pTVar24) break;
        this_01 = *(UGroomSolverComponent **)FVar18.Data;
        if (this_01 != (UGroomSolverComponent *)0x0) {
          uVar5 = (uint)(this_01->GroomSolverProxy)._padding_;
          uVar23 = 0;
          pTVar24 = local_180;
          if (uVar5 != 0) {
            do {
              bVar9 = UGroomComponent::IsDeformationEnable((UGroomComponent *)this_01,uVar23);
              if (bVar9) {
                if (((int)uVar23 < 0) || ((int)(this_01->GroomSolverProxy)._padding_ <= (int)uVar23)
                   ) {
                  TVar21._0_4_ = TVar21._0_4_ | 2;
                  TVar21._4_4_ = 0;
                  local_148 = (undefined8 *)0x0;
                  puVar25 = (undefined8 *)0x0;
                }
                else {
                  iVar10 = (int)(this_01->GroomSolverProxy)._padding_;
                  TVar21._0_4_ = TVar21._0_4_ | 1;
                  TVar21._4_4_ = 0;
                  if (iVar10 <= (int)uVar23) {
                    local_1f8 = (TObjectPtr<UGroomSolverComponent>_u_0 *)(longlong)(int)uVar23;
                    local_1f0 = (TObjectPtr<UGroomSolverComponent>_u_0 *)(longlong)iVar10;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar9) {
                      pcVar6 = (code *)swi(3);
                      pFVar13 = (FComputeDataProviderRenderProxy *)(*pcVar6)();
                      return pFVar13;
                    }
                  }
                  puVar25 = *(undefined8 **)
                             ((((TArray<TRefCountPtr<FHairGroupInstance>,TSizedDefaultAllocator<32>_>
                                 *)&(this_01->GroomSolverProxy)._padding_)->AllocatorInstance).Data
                             + (longlong)(int)uVar23 * 8);
                  local_140 = puVar25;
                  if (puVar25 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
                    UNLOCK();
                  }
                }
                if ((((ulonglong)TVar21.DebugPtr & 2) != 0) &&
                   (TVar21._0_4_ = TVar21._0_4_ & 0xfffffffd, TVar21._4_4_ = 0,
                   local_148 != (undefined8 *)0x0)) {
                  piVar1 = (int *)(local_148 + 1);
                  LOCK();
                  iVar10 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((iVar10 == 1) && ((piVar1 != (int *)0x0 && (local_148 != (undefined8 *)0x0))))
                  {
                    (**(code **)*local_148)(local_148,1);
                  }
                }
                if ((((ulonglong)TVar21.DebugPtr & 1) != 0) &&
                   (TVar21._0_4_ = TVar21._0_4_ & 0xfffffffe, TVar21._4_4_ = 0,
                   local_140 != (undefined8 *)0x0)) {
                  piVar1 = (int *)(local_140 + 1);
                  LOCK();
                  iVar10 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((iVar10 == 1) && ((piVar1 != (int *)0x0 && (local_140 != (undefined8 *)0x0))))
                  {
                    (**(code **)*local_140)(local_140,1);
                  }
                }
                if (puVar25 != (undefined8 *)0x0) {
                  if (((int)uVar23 < 0) ||
                     ((int)(this_01->GroomSolverProxy)._padding_ <= (int)uVar23)) {
                    uVar20 = TVar21._0_4_ | 8;
                    puVar22 = (undefined8 *)0x0;
                    TVar26.DebugPtr = (UGroomSolverComponent *)0x0;
                  }
                  else {
                    iVar10 = (int)(this_01->GroomSolverProxy)._padding_;
                    uVar20 = TVar21._0_4_ | 4;
                    if (iVar10 <= (int)uVar23) {
                      local_1f8 = (TObjectPtr<UGroomSolverComponent>_u_0 *)(longlong)(int)uVar23;
                      local_1f0 = (TObjectPtr<UGroomSolverComponent>_u_0 *)(longlong)iVar10;
                      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar9) {
                        pcVar6 = (code *)swi(3);
                        pFVar13 = (FComputeDataProviderRenderProxy *)(*pcVar6)();
                        return pFVar13;
                      }
                    }
                    TVar19 = (TObjectPtr<UGroomSolverComponent>_u_0)
                             ((TObjectPtr<UGroomSolverComponent>_u_0 *)
                             ((((TArray<TRefCountPtr<FHairGroupInstance>,TSizedDefaultAllocator<32>_>
                                 *)&(this_01->GroomSolverProxy)._padding_)->AllocatorInstance).Data
                             + (longlong)(int)uVar23 * 8))->DebugPtr;
                    TVar26 = TVar19;
                    if (TVar19.DebugPtr != (UGroomSolverComponent *)0x0) {
                      LOCK();
                      *(int *)&(TVar19.DebugPtr)->_padding_ = (int)(TVar19.DebugPtr)->_padding_ + 1;
                      UNLOCK();
                    }
                  }
                  TVar21._4_4_ = 0;
                  TVar21._0_4_ = uVar20;
                  if (((uVar20 & 8) != 0) &&
                     (TVar21._0_4_ = uVar20 & 0xfffffff7, TVar21._4_4_ = 0,
                     puVar22 != (undefined8 *)0x0)) {
                    piVar1 = (int *)(puVar22 + 1);
                    LOCK();
                    iVar10 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if ((iVar10 == 1) && (piVar1 != (int *)0x0)) {
                      (**(code **)*puVar22)(puVar22,1);
                    }
                  }
                  if ((((ulonglong)TVar21.DebugPtr & 4) != 0) &&
                     (TVar21._0_4_ = TVar21._0_4_ & 0xfffffffb, TVar21._4_4_ = 0,
                     TVar19.DebugPtr != (UGroomSolverComponent *)0x0)) {
                    plVar2 = &(TVar19.DebugPtr)->_padding_;
                    LOCK();
                    lVar7 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
                      (**(code **)(TVar19.DebugPtr)->_padding_)(TVar19.DebugPtr,1);
                    }
                  }
                  if (TVar26.DebugPtr != (UGroomSolverComponent *)0x0) {
                    LOCK();
                    *(int *)&(TVar26.DebugPtr)->_padding_ = (int)(TVar26.DebugPtr)->_padding_ + 1;
                    UNLOCK();
                  }
                  local_1a0 = TVar26;
                  if ((local_1b0.AllocatorInstance.Data <= &local_1a0) &&
                     (&local_1a0 <
                      (TObjectPtr<UGroomSolverComponent>_u_0 *)
                      (local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 8))) {
                    local_1e0 = (longlong)local_1b0.ArrayNum;
                    local_1d8 = 8;
                    local_1f8 = &local_1a0;
                    local_1f0 = (TObjectPtr<UGroomSolverComponent>_u_0 *)
                                local_1b0.AllocatorInstance.Data;
                    local_1e8 = (longlong)local_1b0.ArrayMax;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar9) {
                      pcVar6 = (code *)swi(3);
                      pFVar13 = (FComputeDataProviderRenderProxy *)(*pcVar6)();
                      return pFVar13;
                    }
                  }
                  if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
                    local_1b0.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
                  }
                  iVar10 = local_1b0.ArrayNum + 1;
                  ((TObjectPtr<UGroomSolverComponent>_u_0 *)
                  (local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayNum * 8))->DebugPtr =
                       (UGroomSolverComponent *)0x0;
                  ((TObjectPtr<UGroomSolverComponent>_u_0 *)
                  (local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayNum * 8))->DebugPtr =
                       (UGroomSolverComponent *)local_1a0;
                  local_1b0.ArrayNum = iVar10;
                  if (local_1a0.DebugPtr != (UGroomSolverComponent *)0x0) {
                    LOCK();
                    *(int *)&(local_1a0.DebugPtr)->_padding_ =
                         (int)(local_1a0.DebugPtr)->_padding_ + 1;
                    UNLOCK();
                    if (local_1a0.DebugPtr != (UGroomSolverComponent *)0x0) {
                      plVar2 = &(local_1a0.DebugPtr)->_padding_;
                      LOCK();
                      lVar7 = *plVar2;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) &&
                         (local_1a0.DebugPtr != (UGroomSolverComponent *)0x0)) {
                        (**(code **)(local_1a0.DebugPtr)->_padding_)(local_1a0.DebugPtr,1);
                      }
                    }
                  }
                }
              }
              uVar23 = uVar23 + 1;
              pTVar24 = local_180;
              FVar18.Data = (FScriptContainerElement *)local_178;
            } while (uVar23 < uVar5);
          }
        }
        uVar17 = (ulonglong)local_198;
        FVar18.Data = FVar18.Data + 8;
      }
      bVar9 = UE::Groom::Private::HaveGuidesInstanceResources(&local_1b0);
      if ((!bVar9) || (bVar9 = UE::Groom::Private::HaveGuidesSkinnedResources(&local_1b0), !bVar9))
      {
        local_170->bResetSimulationCount = 0;
      }
      this = local_170;
      DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
                ((TRefCountPtr<FHairGroupInstance_const_> *)local_1b0.AllocatorInstance.Data,
                 local_1b0.ArrayNum);
      if ((TObjectPtr<UGroomSolverComponent>_u_0 *)local_1b0.AllocatorInstance.Data !=
          (TObjectPtr<UGroomSolverComponent>_u_0 *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
      }
    }
    bVar9 = this->bResetSimulationCount < 4;
    if (this->bResetSimulationCount < 4) {
      UOptimusDeformerInstance::EnqueueTriggerGraph
                ((this->DeformerInstance).field0_0x0.DebugPtr,local_48);
      this->bResetSimulationCount = this->bResetSimulationCount + 1;
    }
    if ((TObjectPtr<UGroomSolverComponent>_u_0 *)local_1c0.Data !=
        (TObjectPtr<UGroomSolverComponent>_u_0 *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
  }
  FInstancedStruct::Reset(&local_108);
LAB_14e28436a:
  pFVar16 = (FOptimusGroomSolverReadDataProviderProxy *)0x0;
  this_02 = ::operator_new(0x158);
  if (this_02 != (FOptimusGroomSolverReadDataProviderProxy *)0x0) {
    pFVar16 = FOptimusGroomSolverReadDataProviderProxy::FOptimusGroomSolverReadDataProviderProxy
                        (this_02,(this->SolverComponent).field0_0x0.DebugPtr,bVar9);
  }
  return (FComputeDataProviderRenderProxy *)pFVar16;
}

// SetDeformerInstance @ 14e2896d0

void __thiscall
UOptimusGroomSolverReadDataProvider::SetDeformerInstance
          (UOptimusGroomSolverReadDataProvider *this,UOptimusDeformerInstance *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UOptimusDeformerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// StaticRegisterNativesUOptimusGroomSolverReadDataProvider @ 14e289820

void __cdecl
UOptimusGroomSolverReadDataProvider::StaticRegisterNativesUOptimusGroomSolverReadDataProvider(void)

{
  return;
}

// _getUObject @ 14e28a840

UObject * __thiscall
UOptimusGroomSolverReadDataProvider::_getUObject(UOptimusGroomSolverReadDataProvider *this)

{
  return (UObject *)&this[-1]._padding_;
}

