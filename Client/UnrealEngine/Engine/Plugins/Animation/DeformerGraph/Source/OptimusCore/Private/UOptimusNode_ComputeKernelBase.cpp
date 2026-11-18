// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 28

// StaticClass @ 14e1088d0

UClass * __cdecl UOptimusNode_ComputeKernelBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ComputeKernelBase",
               &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ComputeKernelBase,0x110,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNode_ComputeKernelBase>,
               InternalVTableHelperCtorCaller<UOptimusNode_ComputeKernelBase>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.InnerSingleton;
}

// UOptimusNode_ComputeKernelBase @ 14e15b240

UOptimusNode_ComputeKernelBase * __thiscall
UOptimusNode_ComputeKernelBase::UOptimusNode_ComputeKernelBase
          (UOptimusNode_ComputeKernelBase *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusComputeKernelProvider__;
  return this;
}

// UOptimusNode_ComputeKernelBase @ 14e15b280

UOptimusNode_ComputeKernelBase * __thiscall
UOptimusNode_ComputeKernelBase::UOptimusNode_ComputeKernelBase(UOptimusNode_ComputeKernelBase *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusComputeKernelProvider__;
  return this;
}

// ~UOptimusNode_ComputeKernelBase @ 14e163380

void __thiscall
UOptimusNode_ComputeKernelBase::~UOptimusNode_ComputeKernelBase
          (UOptimusNode_ComputeKernelBase *this)

{
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &___7IOptimusComputeKernelProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// operator() @ 14e1693a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
`UOptimusNode_ComputeKernelBase::CreateComputeKernel'::__l2::<lambda_2>::operator()
          (void *this,TOptional<FText> *__return_storage_ptr__,UOptimusNodePin *param_1)

{
  int iVar1;
  FShaderValueType *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this_00
  ;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  bool bVar9;
  TOptional<FText> *pTVar10;
  FOptimusDataTypeRegistry *pFVar11;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  undefined8 *puVar15;
  TTuple<FName,FName> *pTVar16;
  FName FVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  ulonglong uVar21;
  wchar_t *pwVar22;
  ulonglong uVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  uint local_res20 [2];
  TArray<FShaderValueTypeHandle,TSizedDefaultAllocator<32>_> local_108;
  FShaderValueType *local_f8;
  TKeyInitializer<FName_const_&> local_f0;
  TSharedPtr<FOptimusDataType_const_,1> local_e8;
  FName local_d8;
  FName *local_d0;
  FScriptContainerElement *local_c8;
  undefined8 local_c0;
  TReferenceControllerBase<1> *local_b8;
  undefined8 local_b0;
  TReferenceControllerBase<1> *local_a8;
  void *local_90 [2];
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  bVar6 = false;
  bVar9 = false;
  local_res20[0] = 0;
  FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_e8);
  if ((local_e8.Object == (FOptimusDataType *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TOptional<FText> *)(*pcVar5)();
    return pTVar10;
  }
  local_f8 = ((local_e8.Object)->ShaderValueType).ValueTypePtr;
  if (local_f8->Type != Struct) {
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  FShaderValueType::GetMemberStructTypes(local_f8,&local_108);
  if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 <
       local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TOptional<FText> *)(*pcVar5)();
    return pTVar10;
  }
  if (local_108.ArrayNum == local_108.ArrayMax) {
    local_108.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_108.AllocatorInstance,&local_108.ArrayMax);
  }
  local_f0.Key._4_4_ = local_108.ArrayNum + 1;
  *(FShaderValueType **)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 8) =
       local_f8;
  uVar21 = (ulonglong)(int)local_f0.Key._4_4_;
  local_c8 = local_108.AllocatorInstance.Data + uVar21 * 8;
  uVar23 = uVar21;
  FVar25.Data = local_108.AllocatorInstance.Data;
  local_108.ArrayNum = local_f0.Key._4_4_;
  do {
    pFVar7 = local_c8;
    if ((int)uVar21 != (int)uVar23) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<FShaderValueTypeHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar25.Data == pFVar7) {
      (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
LAB_14e1697db:
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    pFVar2 = *(FShaderValueType **)FVar25.Data;
    pFVar11 = FOptimusDataTypeRegistry::Get();
    pTVar12 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                      *)&pFVar11->RegisteredTypes,pFVar2->Name);
    if ((pTVar12 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
       (&pTVar12->field_0x10 == (undefined1 *)0x0)) {
      bVar9 = true;
      local_b8 = (TReferenceControllerBase<1> *)0x0;
      lVar24 = 0;
      puVar15 = &local_c0;
    }
    else {
      lVar24 = *(longlong *)&pTVar12->field_0x10;
      bVar6 = true;
      local_a8 = *(TReferenceControllerBase<1> **)&pTVar12->field_0x18;
      if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar15 = &local_b0;
    }
    pTVar3 = (TReferenceControllerBase<1> *)puVar15[1];
    puVar15[1] = 0;
    *puVar15 = 0;
    if (bVar9) {
      bVar9 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
    }
    if (bVar6) {
      bVar6 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
    }
    if (lVar24 == 0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2177961143954309212>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                         ,0x5c,"StructOptimusType");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TOptional<FText> *)(*pcVar5)();
        return pTVar10;
      }
    }
    else {
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar24 + 0x2c));
      if (pUVar13 != (UObject *)0x0) {
        pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar1 = (int)pUVar14->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar14->_padding_)) {
          FVar17 = pFVar2->Name;
          Z_Construct_UClass_UUserDefinedStruct_NoRegister();
          puVar15 = (undefined8 *)(**(code **)(*(longlong *)pUVar13 + 0x388))(pUVar13,local_90,0);
          if (*(int *)(puVar15 + 1) == 0) {
            pwVar22 = L"";
          }
          else {
            pwVar22 = (wchar_t *)*puVar15;
          }
          ::FName::FName(&local_d8,pwVar22);
          if (local_90[0] != (void *)0x0) {
            FMemory::Free(local_90[0]);
          }
          pTVar16 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    ::Find(*(TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                             **)this,local_d8);
          if ((pTVar16 != (TTuple<FName,FName> *)0x0) && (&pTVar16->field_0x8 != (undefined1 *)0x0))
          {
            FVar4.ComparisonIndex.Value = *(uint *)&pTVar16->field_0x8;
            FVar4.Number = *(uint *)&pTVar16->field_0xc;
            if (FVar4 == FVar17) {
              (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
              (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
            }
            else {
              FVar17 = UOptimusNodePin::GetUniqueName(param_1);
              pFVar18 = FText::FromName(&local_60,(FName *)FVar17);
              pFVar19 = FText::AsLocalizable_Advanced_LocText
                                  (&local_70,L"OptimusKernelBase",L"InvalidPinFriendlyName",
                                   L"Invalid unique friendly name on pin \'{0}\'");
              pFVar20 = FTextFormat::FTextFormat(&local_50,pFVar19,Default);
              pFVar18 = FText::Format<FText>(&local_80,pFVar20,pFVar18);
              FText::FText((FText *)__return_storage_ptr__,pFVar18);
              if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
                   (ITextData *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0xbd,
                                     L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                    ), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar10 = (TOptional<FText> *)(*pcVar5)();
                return pTVar10;
              }
              if (local_80.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
              }
              if (local_70.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
            }
            goto LAB_14e1697db;
          }
          this_00 = *(TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                      **)this;
          local_d0 = &local_d8;
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<FName_const_&>_>(this_00,&local_f0,(bool *)&local_d0);
          *(FName *)(*(longlong *)&this_00->Elements + 8 + (longlong)(int)local_f0.Key * 0x18) =
               FVar17;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar21 = (ulonglong)(uint)local_108.ArrayNum;
    FVar25.Data = FVar25.Data + 8;
    uVar23 = (ulonglong)local_f0.Key._4_4_;
  } while( true );
}

// operator() @ 14e1699f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
`UOptimusNode_ComputeKernelBase::ValidateForCompile'::__l2::<lambda_2>::operator()
          (void *this,TOptional<FText> *__return_storage_ptr__,
          TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
          *param_1,UOptimusNodePin *param_2)

{
  undefined1 *this_00;
  int iVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  UOptimusNode *pUVar6;
  UClass *pUVar7;
  FName FVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TOptional<FText> *pTVar12;
  ForElementType<FSetElementId> _Src;
  UOptimusNodeGraph *this_01;
  uint uVar13;
  ForElementType<FSetElementId> _Dst;
  undefined1 auStackY_168 [32];
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FText local_c8;
  FTextFormat local_b8;
  undefined1 local_a8 [52];
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar6 = UOptimusNodePin::GetOwningNode(param_2);
  this_01 = (UOptimusNodeGraph *)pUVar6->_padding_;
  if (this_01 == (UOptimusNodeGraph *)0x0) {
LAB_14e169a58:
    this_01 = (UOptimusNodeGraph *)0x0;
  }
  else {
    pUVar7 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_14e169a58;
  }
  UOptimusNodeGraph::GetComponentSourceBindingsForPin
            (this_01,(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                      *)local_a8,param_2,this);
  if (1 < local_a8._8_4_ - local_74) {
    FVar8 = UOptimusNodePin::GetUniqueName(param_2);
    pFVar9 = FText::FromName(&local_e8,(FName *)FVar8);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_118,L"OptimusKernelBase",L"MultipleBindingsOnPin",
                         L"Multiple component bindings arriving into pin \'{0}\'");
    pFVar11 = FTextFormat::FTextFormat(&local_d8,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_128,pFVar11,pFVar9);
    FText::FText((FText *)__return_storage_ptr__,pFVar9);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TOptional<FText> *)(*pcVar4)();
      return pTVar12;
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
    return __return_storage_ptr__;
  }
  iVar1 = *(int *)&(param_1->Elements).field_0x8;
  iVar2 = *(int *)&(param_1->Elements).field_0x34;
  if (iVar1 == iVar2) {
    if (param_1 !=
        (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
         *)local_a8) {
      uVar13 = local_60;
      if (local_60 < 2) {
        if ((param_1->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          uVar13 = 0;
          goto LAB_14e169b95;
        }
      }
      else {
LAB_14e169b95:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(param_1->Hash).SecondaryData,0,uVar13,4);
      }
      _Src = (ForElementType<FSetElementId>)local_70;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        _Src = local_68;
      }
      FVar3 = (param_1->Hash).SecondaryData;
      _Dst = (ForElementType<FSetElementId>)&param_1->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        _Dst = FVar3;
      }
      if (local_60 != 0) {
        memcpy((void *)_Dst,(void *)_Src,(longlong)(int)local_60 << 2);
      }
      param_1->HashSize = local_60;
      TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&param_1->Elements,local_a8._8_4_);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_a8._8_4_,(ForAnyElementType *)param_1,
                 (int *)&(param_1->Elements).field_0x8,(int *)&(param_1->Elements).field_0xc);
      this_00 = &(param_1->Elements).field_0x10;
      *(undefined4 *)&(param_1->Elements).field_0x30 = local_a8._48_4_;
      *(int *)&(param_1->Elements).field_0x34 = local_74;
      if (this_00 != local_a8 + 0x10) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                   (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10));
      }
      if (local_a8._8_4_ != 0) {
        memcpy(*(void **)&param_1->Elements,(void *)local_a8._0_8_,
               (longlong)(int)local_a8._8_4_ << 4);
      }
    }
  }
  else if ((local_a8._8_4_ != local_74) &&
          ((iVar1 - iVar2 != local_a8._8_4_ - local_74 ||
           (bVar5 = TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                    ::Includes(param_1,(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                                        *)local_a8), !bVar5)))) {
    FVar8 = UOptimusNodePin::GetUniqueName(param_2);
    pFVar9 = FText::FromName(&local_c8,(FName *)FVar8);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_f8,L"OptimusKernelBase",L"IncompatibleBindingsPinGroup",
                         L"Component binding for pin \'{0}\' is different from the component bindings of the other pins in its group"
                        );
    pFVar11 = FTextFormat::FTextFormat(&local_b8,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_108,pFVar11,pFVar9);
    FText::FText((FText *)__return_storage_ptr__,pFVar9);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TOptional<FText> *)(*pcVar4)();
      return pTVar12;
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    goto LAB_14e169c4d;
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
LAB_14e169c4d:
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return __return_storage_ptr__;
}

// BindKernelDataInterfaceForComputeKernel @ 14e17ee10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e17f517) */

TOptional<FText> * __thiscall
UOptimusNode_ComputeKernelBase::BindKernelDataInterfaceForComputeKernel
          (UOptimusNode_ComputeKernelBase *this,TOptional<FText> *__return_storage_ptr__,
          UOptimusComponentSourceBinding *param_1,UComputeDataInterface *param_2,
          UOptimusKernelSource *param_3,
          TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
          *param_4,TArray<FString,TSizedDefaultAllocator<32>_> *param_5,bool *param_6)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TOptional<FText> *pTVar5;
  UClass *pUVar6;
  longlong *plVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FString *pFVar13;
  FShaderParamTypeDefinition *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188 [8];
  FString local_180;
  FString local_170;
  FShaderFunctionDefinition *local_160;
  undefined8 local_158;
  FString local_150;
  ForAnyElementType local_140;
  int local_138;
  int local_134;
  undefined1 local_130;
  undefined4 local_128 [2];
  FWeakObjectPtr local_120;
  UComputeDataInterface *local_118;
  UOptimusKernelSource *local_110;
  longlong *local_108;
  UComputeDataInterface *local_100;
  uint local_f8;
  FString local_f0;
  FString local_e0;
  undefined1 local_d0 [4];
  undefined1 local_cc [20];
  longlong *local_b8;
  TOptional<FText> *local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_a8;
  undefined4 *local_a0;
  UComputeDataInterface **local_98;
  undefined1 local_90 [16];
  void *local_80;
  TVariant<bool,FText> local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_110 = param_3;
  local_cc._12_8_ = param_4;
  local_a8 = param_5;
  local_118 = param_2;
  local_b0 = __return_storage_ptr__;
  if ((param_2 == (UComputeDataInterface *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutKernelDataInterface",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                         ,0x302,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TOptional<FText> *)(*pcVar1)();
    return pTVar5;
  }
  if ((param_1 == (UOptimusComponentSourceBinding *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InKernelPrimaryComponentSourceBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                         ,0x303,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TOptional<FText> *)(*pcVar1)();
    return pTVar5;
  }
  if (param_2 == (UComputeDataInterface *)0x0) {
    local_108 = (longlong *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UOptimusComputeKernelDataInterface_NoRegister();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar6);
    local_108 = plVar7;
    if (plVar7 != (longlong *)0x0) goto LAB_14e17ef21;
  }
  plVar7 = local_108;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("KernelDataInterface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                     ,0x306,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TOptional<FText> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e17ef21:
  piVar8 = (int *)(**(code **)(*(longlong *)&this->field_0x108 + 0x18))(&this->field_0x108,local_90)
  ;
  if (*piVar8 == 0) {
    ::FName::ToString((FName *)(piVar8 + 1),&local_170);
  }
  else {
    local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Data.ArrayNum = piVar8[6];
    lVar10 = (longlong)local_170.Data.ArrayNum;
    _Src = *(void **)(piVar8 + 4);
    if (local_170.Data.ArrayNum == 0) {
      local_170.Data.ArrayMax = 0;
      param_2 = local_118;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_170.Data.ArrayNum,0,(ForAnyElementType *)&local_170,
                 local_170.Data.ArrayNum,&local_170.Data.ArrayMax);
      memcpy(local_170.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
      param_2 = local_118;
    }
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  (**(code **)(*plVar7 + 0x10))(plVar7,&local_170);
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1);
  local_cc._4_8_ = UOptimusComponentSourceBinding::GetComponentSource(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UOptimusComponentSource *)local_cc._4_8_ != (UOptimusComponentSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_cc._4_8_);
  }
  uVar15 = 0;
  local_120.ObjectIndex = 0;
  local_120.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UOptimusComponentSource *)local_cc._4_8_ != (UOptimusComponentSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_cc._4_8_);
  }
  FWeakObjectPtr::operator=(&local_120,(FObjectPtr)((longlong)local_cc + 4));
  Optimus::IsExecutionDomainUnifiedDispatchOnly
            (&local_70,&local_170,
             (TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr>)local_120);
  uVar11 = (ulonglong)local_70.TypeIndex;
  if ((1 < uVar11) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TOptional<FText> *)(*pcVar1)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Optimus::Expression::FParseError,Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar11 + 4) == '\0') {
    if ((local_70.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar1)();
      return pTVar5;
    }
    *param_6 = (bool)(undefined1)local_70._padding_;
    local_160 = (FShaderFunctionDefinition *)0x0;
    local_158 = 0;
    (**(code **)(*(longlong *)param_2 + 0x2d8))(param_2,&local_160);
    if (0 < (int)local_158) {
      local_b8 = &local_110->_padding_;
      uVar11 = uVar15;
      do {
        uVar16 = (uint)uVar11;
        uVar3 = 0;
        if ((int)uVar16 < (int)local_158) {
          uVar3 = ~uVar16 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TOptional<FText> *)(*pcVar1)();
          return pTVar5;
        }
        pFVar13 = (FString *)((longlong)&(local_160->Name).Data.AllocatorInstance.Data + uVar15);
        ::FString::FString(&local_150,pFVar13);
        local_140.Data = (FScriptContainerElement *)0x0;
        iVar4 = pFVar13[1].Data.ArrayNum;
        pFVar14 = (FShaderParamTypeDefinition *)pFVar13[1].Data.AllocatorInstance.Data;
        local_138 = iVar4;
        if (iVar4 == 0) {
          local_134 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar4,0,&local_140,iVar4,&local_134);
          ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                    (local_140.Data,pFVar14,iVar4);
        }
        iVar4 = local_138;
        local_130 = *(undefined1 *)&pFVar13[2].Data.AllocatorInstance.Data;
        pFVar14 = (FShaderParamTypeDefinition *)(local_140.Data + (longlong)local_138 * 0x30);
        FVar12.Data = local_140.Data;
        while( true ) {
          if (local_138 != iVar4) {
            local_188[0] = 0;
            `TCheckedPointerIterator<FShaderParamTypeDefinition,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_188);
          }
          if ((FShaderParamTypeDefinition *)FVar12.Data == pFVar14) break;
          ((FShaderParamTypeDefinition *)FVar12.Data)->ArrayElementCount = 0;
          FShaderParamTypeDefinition::ResetTypeDeclaration
                    ((FShaderParamTypeDefinition *)FVar12.Data);
          FVar12.Data = FVar12.Data + 0x30;
        }
        local_100 = local_118;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar4 = local_150.Data.ArrayNum + -1;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        if (local_150.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        local_f8 = uVar16;
        ::FString::AssignRange(&local_f0,(wchar_t *)local_150.Data.AllocatorInstance.Data,iVar4);
        ::FString::operator=(&local_e0,KernelInternalNamespaceName);
        local_128[0] = (undefined4)local_110->_padding_;
        local_a0 = local_128;
        local_98 = &local_100;
        TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&>_>
                  ((TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
                    *)local_cc._12_8_,
                   (TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&> *)local_cc,
                   (bool *)&local_a0);
        plVar7 = local_b8;
        iVar4 = (int)local_b8[1];
        if (iVar4 == *(int *)((longlong)local_b8 + 0xc)) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,(ForAnyElementType *)local_b8,(int *)((longlong)local_b8 + 0xc));
        }
        *(int *)(plVar7 + 1) = iVar4 + 1;
        pFVar13 = (FString *)(*plVar7 + (longlong)iVar4 * 0x28);
        ::FString::FString(pFVar13,&local_150);
        iVar4 = local_138;
        FVar12.Data = local_140.Data;
        pFVar13[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        piVar8 = &pFVar13[1].Data.ArrayMax;
        pFVar13[1].Data.ArrayNum = local_138;
        if (local_138 == 0) {
          *piVar8 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,local_138,0,(ForAnyElementType *)(pFVar13 + 1),local_138,piVar8);
          ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                    (pFVar13[1].Data.AllocatorInstance.Data,
                     (FShaderParamTypeDefinition *)FVar12.Data,iVar4);
        }
        *(undefined1 *)&pFVar13[2].Data.AllocatorInstance.Data = local_130;
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        DestructItems<FShaderParamTypeDefinition,int>
                  ((FShaderParamTypeDefinition *)local_140.Data,local_138);
        if ((FShaderParamTypeDefinition *)local_140.Data != (FShaderParamTypeDefinition *)0x0) {
          FMemory::Free(local_140.Data);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        uVar11 = (ulonglong)(uVar16 + 1);
        uVar15 = uVar15 + 0x28;
        __return_storage_ptr__ = local_b0;
        param_5 = local_a8;
      } while ((int)(uVar16 + 1) < (int)local_158);
    }
    (**(code **)(*local_108 + 0x28))();
    ::FString::PrintfImpl(&local_180,L"uint3 Read%s() { return %s::%s(); }");
    pFVar9 = (param_5->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_180) &&
        ((FScriptContainerElement *)&local_180 < pFVar9 + (longlong)param_5->ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = param_5->ArrayNum;
    if (iVar4 == param_5->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar4 + 1;
    pFVar9 = (param_5->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_180.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 8) = local_180.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_180.Data.ArrayMax;
    local_180.Data.ArrayNum = 0;
    local_180.Data.ArrayMax = 0;
    local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
    DestructItems<FShaderFunctionDefinition,int>(local_160,(int)local_158);
    if (local_160 != (FShaderFunctionDefinition *)0x0) {
      FMemory::Free(local_160);
    }
    if ((1 < (ulonglong)local_70.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar1)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,FText>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else {
    if ((local_70.TypeIndex != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar1)();
      return pTVar5;
    }
    plVar7 = (longlong *)CONCAT71(local_70._padding_._1_7_,(undefined1)local_70._padding_);
    *(longlong **)&__return_storage_ptr__->field0_0x0 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7,local_d0);
    }
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = (uint)local_70._padding_;
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar1)();
      return pTVar5;
    }
    if ((1 < (ulonglong)local_70.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar1)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,FText>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateComputeKernel @ 14e199fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e19ae31) */
/* WARNING: Removing unreachable block (ram,0x00014e19ae3f) */

TVariant<UOptimusKernelSource_*,FText> * __thiscall
UOptimusNode_ComputeKernelBase::CreateComputeKernel
          (UOptimusNode_ComputeKernelBase *this,
          TVariant<UOptimusKernelSource_*,FText> *__return_storage_ptr__,UObject *param_1,
          FOptimusPinTraversalContext *param_2,
          TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
          *param_3,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
                   *param_4,UComputeDataInterface *param_5,
          TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
          *param_6,TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
                   *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FName *this_00;
  int iVar4;
  ITextData *pIVar5;
  UOptimusComponentSourceBinding *pUVar6;
  UOptimusNodePin *pUVar7;
  code *pcVar8;
  bool bVar9;
  UOptimusNode_ComputeKernelBase *pUVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  TVariant<UOptimusKernelSource_*,FText> *pTVar15;
  UOptimusNodePin *pUVar16;
  FText *pFVar17;
  UOptimusKernelSource *pUVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  FString *pFVar23;
  FString *pFVar24;
  byte bVar25;
  ForAnyElementType FVar26;
  longlong lVar27;
  uint uVar28;
  UObject *pUVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  int iVar34;
  UObject *pUVar35;
  uint uVar36;
  undefined1 auStackY_3e8 [32];
  bool local_388;
  bool local_387;
  undefined1 local_386;
  undefined1 local_385 [5];
  TVariant<UOptimusKernelSource_*,FText> *local_380;
  TArray<FString,TSizedDefaultAllocator<32>_> local_378;
  UOptimusKernelSource *local_368;
  FScriptContainerElement *local_360;
  undefined8 local_358;
  FScriptContainerElement *local_350;
  undefined8 local_348;
  UObject *local_340;
  FString local_338;
  undefined4 local_328 [2];
  FOptimusPinTraversalContext *local_320;
  UOptimusNode_ComputeKernelBase *local_318;
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
  *local_310;
  FString local_308;
  undefined8 *local_2f8;
  TOptional<FText>_u_0 local_2f0;
  TOptional<FText>_u_0 local_2e0;
  FString local_2d0;
  TOptional<FText>_u_0 local_2c0;
  TOptional<FText>_u_0 local_2b0;
  undefined1 local_2a0 [4];
  int local_29c;
  int local_298;
  FName local_294;
  TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
  *local_288;
  undefined1 local_280 [8];
  TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
  *local_278;
  undefined1 local_270 [4];
  undefined1 local_26c [4];
  undefined1 local_268 [8];
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
  *local_260;
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  undefined1 local_250 [4];
  undefined1 local_24c [4];
  undefined1 local_248 [8];
  longlong *local_240;
  uint uStack_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  undefined4 uStack_228;
  uint uStack_224;
  uint local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  FString local_1e0;
  TOptional<FText>_u_0 local_1d0;
  void *local_1c0 [2];
  void *local_1b0 [2];
  void *local_1a0 [2];
  undefined1 local_190 [16];
  FText local_180;
  FString local_170;
  FString local_160;
  TIterator local_150;
  undefined4 local_104;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  int local_c4;
  void *local_b8;
  undefined4 local_b0;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_288 = param_3;
  local_278 = param_4;
  local_310 = param_6;
  local_260 = param_7;
  bVar9 = false;
  bVar13 = false;
  local_328[0] = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_2f8 = (undefined8 *)local_f8;
  local_318 = (UOptimusNode_ComputeKernelBase *)&this[-1].field_0x8;
  iVar34 = *(int *)&this[-1].field_0x60;
  puVar20 = *(undefined8 **)&this[-1].field_0x58;
  local_368 = (UOptimusKernelSource *)param_5;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_380 = __return_storage_ptr__;
  local_340 = param_1;
  local_320 = param_2;
  if ((iVar34 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar15 = (TVariant<UOptimusKernelSource_*,FText> *)(*pcVar8)();
    return pTVar15;
  }
  puVar2 = puVar20 + iVar34;
  for (; puVar20 != puVar2; puVar20 = puVar20 + 1) {
    pUVar16 = (UOptimusNodePin *)*puVar20;
    if (pUVar16->bIsGroupingPin == false) {
      `UOptimusNode_ComputeKernelBase::CreateComputeKernel'::__l2::<lambda_2>::operator()
                (&local_2f8,(TOptional<FText> *)&local_2e0.TypedValue,pUVar16);
      uVar11 = local_2e0.TypedValue.TextData.Reference;
      if (local_2e0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2e0.TypedValue.TextData.Reference + 8))
                  (local_2e0.TypedValue.TextData.Reference,local_280);
        __return_storage_ptr__ = local_380;
        local_380->_padding_ = uVar11;
        (**(code **)((longlong)*(ITextData *)uVar11 + 8))(uVar11,local_26c);
        *(uint *)&__return_storage_ptr__->_padding_ = local_2e0.TypedValue.Flags;
        __return_storage_ptr__->TypeIndex = '\x01';
        (**(code **)((longlong)*(ITextData *)uVar11 + 0x10))(uVar11);
        if (local_2e0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_2e0.TypedValue.TextData.Reference + 0x10))
                    (local_2e0.TypedValue.TextData.Reference);
        }
        goto LAB_14e19aed9;
      }
    }
    else {
      iVar34 = (pUVar16->SubPins).ArrayNum;
      pFVar30 = (pUVar16->SubPins).AllocatorInstance.Data;
      if ((iVar34 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar15 = (TVariant<UOptimusKernelSource_*,FText> *)(*pcVar8)();
        return pTVar15;
      }
      pFVar3 = pFVar30 + (longlong)iVar34 * 8;
      for (; pFVar30 != pFVar3; pFVar30 = pFVar30 + 8) {
        `UOptimusNode_ComputeKernelBase::CreateComputeKernel'::__l2::<lambda_2>::operator()
                  (&local_2f8,(TOptional<FText> *)&local_2f0.TypedValue,*(UOptimusNodePin **)pFVar30
                  );
        uVar11 = local_2f0.TypedValue.TextData.Reference;
        if (local_2f0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_2f0.TypedValue.TextData.Reference + 8))
                    (local_2f0.TypedValue.TextData.Reference,local_328);
          pTVar15 = local_380;
          local_380->_padding_ = uVar11;
          (**(code **)((longlong)*(ITextData *)uVar11 + 8))(uVar11,local_270);
          *(uint *)&pTVar15->_padding_ = local_2f0.TypedValue.Flags;
          pTVar15->TypeIndex = '\x01';
          (**(code **)((longlong)*(ITextData *)uVar11 + 0x10))(uVar11);
          if (local_2f0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_2f0.TypedValue.TextData.Reference + 0x10))
                      (local_2f0.TypedValue.TextData.Reference);
          }
          goto LAB_14e19a2b4;
        }
        local_2f0.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
      }
    }
    __return_storage_ptr__ = local_380;
    param_5 = (UComputeDataInterface *)local_368;
  }
  pUVar16 = (UOptimusNodePin *)(**(code **)(*(longlong *)this + 0x20))(this);
  UOptimusNodePin::GetComponentSourceBindingsRecursively(pUVar16,&local_a8,local_320);
  if (local_a8.Elements._8_4_ - local_a8.Elements._52_4_ == 1) {
    TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator(&local_150,&local_a8);
    pUVar6 = *(UOptimusComponentSourceBinding **)
              (*(longlong *)local_150._padding_ + (longlong)local_150._padding_._4_4_ * 0x10);
    pUVar18 = NewObject<UOptimusKernelSource>(local_340);
    iVar34 = 0;
    local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.ArrayNum = 0;
    local_378.ArrayMax = 0;
    local_388 = false;
    local_368 = pUVar18;
    if (((UOptimusKernelSource *)param_5 == (UOptimusKernelSource *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InOutKernelDataInterface",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                            ,0x9d,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar15 = (TVariant<UOptimusKernelSource_*,FText> *)(*pcVar8)();
      return pTVar15;
    }
    BindKernelDataInterfaceForComputeKernel
              ((UOptimusNode_ComputeKernelBase *)&this[-1].field_0x8,
               (TOptional<FText> *)&local_1d0.TypedValue,pUVar6,param_5,pUVar18,local_310,&local_378
               ,&local_388);
    if (local_1d0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      iVar4 = *(int *)&this[-1].field_0x60;
      local_340 = *(UObject **)&this[-1].field_0x58;
      local_387 = true;
      if ((iVar4 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar15 = (TVariant<UOptimusKernelSource_*,FText> *)(*pcVar8)();
        return pTVar15;
      }
      pUVar29 = (UObject *)((longlong)&local_340->field_0x0 + (longlong)iVar4 * 8);
      bVar12 = local_340 != pUVar29;
      pUVar35 = local_340;
      local_340 = pUVar29;
      if (bVar12) {
        do {
          pUVar16 = *(UOptimusNodePin **)pUVar35;
          if (pUVar16->bIsGroupingPin == false) {
            if ((pUVar16->Direction == Output) &&
               (ProcessOutputPinForComputeKernel
                          (local_318,(TOptional<FText> *)&local_2b0.TypedValue,local_388,local_320,
                           pUVar16,local_278,pUVar18,&local_378,local_310,local_260,&local_387),
               uVar11 = local_2b0.TypedValue.TextData.Reference,
               local_2b0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
              (**(code **)((longlong)*(ITextData *)local_2b0.TypedValue.TextData.Reference + 8))
                        (local_2b0.TypedValue.TextData.Reference,local_248);
              pTVar15 = local_380;
              local_380->_padding_ = uVar11;
              (**(code **)((longlong)*(ITextData *)uVar11 + 8))(uVar11,local_2a0);
              *(uint *)&pTVar15->_padding_ = local_2b0.TypedValue.Flags;
              pTVar15->TypeIndex = '\x01';
              (**(code **)((longlong)*(ITextData *)uVar11 + 0x10))(uVar11);
              if (local_2b0.TypedValue.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_2b0.TypedValue.TextData.Reference + 0x10)
                )(local_2b0.TypedValue.TextData.Reference);
              }
              DestructItems<FString,int>
                        ((FString *)local_378.AllocatorInstance.Data,local_378.ArrayNum);
              if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_378.AllocatorInstance.Data);
              }
              local_a8.HashSize = 0;
              if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_a8.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_a8.Elements);
              local_b0 = 0;
              if (local_b8 != (void *)0x0) {
                FMemory::Free(local_b8);
              }
              iVar34 = SUB84(local_f8._8_8_,4);
              local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
              if (iVar34 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
              }
              local_c8 = 0xffffffff;
              local_c4 = 0;
              local_d0 = 0;
              if (0x80 < local_cc) {
                local_cc = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
              }
              if (local_d8 != (uint *)0x0) {
                FMemory::Free(local_d8);
              }
              if ((FScriptContainerElement *)local_f8._0_8_ == (FScriptContainerElement *)0x0) {
                return pTVar15;
              }
              FMemory::Free((void *)local_f8._0_8_);
              return pTVar15;
            }
          }
          else {
            iVar4 = (pUVar16->SubPins).ArrayNum;
            pFVar30 = (pUVar16->SubPins).AllocatorInstance.Data;
            if ((iVar4 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              pTVar15 = (TVariant<UOptimusKernelSource_*,FText> *)(*pcVar8)();
              return pTVar15;
            }
            pFVar3 = pFVar30 + (longlong)iVar4 * 8;
            pUVar18 = local_368;
            pUVar29 = local_340;
            for (; local_368 = pUVar18, local_340 = pUVar29, pFVar30 != pFVar3;
                pFVar30 = pFVar30 + 8) {
              pUVar7 = *(UOptimusNodePin **)pFVar30;
              if (iVar34 == 0) {
                bVar9 = true;
                local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2d0.Data.ArrayNum = 0;
                local_2d0.Data.ArrayMax = 0;
                pFVar23 = &local_2d0;
              }
              else {
                local_294 = (FName)pUVar16->_padding_;
                bVar13 = true;
                ::FName::ToString(&local_294,&local_1e0);
                pFVar23 = &local_1e0;
              }
              ProcessInputPinForComputeKernel
                        (local_318,(TOptional<FText> *)&local_2c0.TypedValue,local_388,local_320,
                         pUVar7,pFVar23,local_288,local_368,&local_378,local_310,&local_387);
              if ((bVar13) &&
                 (bVar13 = false,
                 local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
              if ((bVar9) &&
                 (bVar9 = false,
                 local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
              }
              uVar11 = local_2c0.TypedValue.TextData.Reference;
              if (local_2c0.TypedValue.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_2c0.TypedValue.TextData.Reference + 8))
                          (local_2c0.TypedValue.TextData.Reference,local_250);
                pTVar15 = local_380;
                local_380->_padding_ = uVar11;
                (**(code **)((longlong)*(ITextData *)uVar11 + 8))(uVar11,local_24c);
                *(uint *)&pTVar15->_padding_ = local_2c0.TypedValue.Flags;
                pTVar15->TypeIndex = '\x01';
                (**(code **)((longlong)*(ITextData *)uVar11 + 0x10))(uVar11);
                if (local_2c0.TypedValue.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*(ITextData *)local_2c0.TypedValue.TextData.Reference +
                              0x10))(local_2c0.TypedValue.TextData.Reference);
                }
                DestructItems<FString,int>
                          ((FString *)local_378.AllocatorInstance.Data,local_378.ArrayNum);
                if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_378.AllocatorInstance.Data);
                }
                local_a8.HashSize = 0;
                if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_a8.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_a8.Elements);
LAB_14e19a2b4:
                local_b0 = 0;
                if (local_b8 != (void *)0x0) {
                  FMemory::Free(local_b8);
                }
                TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_f8);
                return pTVar15;
              }
              pUVar18 = local_368;
              pUVar29 = local_340;
            }
            iVar34 = iVar34 + 1;
          }
          pUVar35 = (UObject *)&pUVar35->field_0x8;
        } while (pUVar35 != pUVar29);
      }
      iVar34 = local_378.ArrayNum;
      uVar19 = (ulonglong)local_378.ArrayNum;
      bVar13 = true;
      pFVar30 = local_378.AllocatorInstance.Data + uVar19 * 0x10;
      local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_338.Data.ArrayNum = 0;
      local_338.Data.ArrayMax = 0;
      local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar14 = 1;
      local_308.Data.ArrayNum = 0;
      local_308.Data.ArrayMax = 0;
      FVar26.Data = local_378.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar19 != iVar34) {
          local_386 = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_386);
        }
        uVar33 = 0;
        if (FVar26.Data == pFVar30) break;
        if (bVar13) {
          bVar13 = false;
        }
        else {
          ::FString::AppendChars(&local_308,L"\n",1);
        }
        uVar31 = *(int *)(FVar26.Data + 8) - 1;
        if (*(int *)(FVar26.Data + 8) == 0) {
          uVar31 = uVar33;
        }
        ::FString::AppendChars(&local_308,*(wchar_t **)FVar26.Data,uVar31);
        uVar19 = local_378._8_8_ & 0xffffffff;
        FVar26.Data = FVar26.Data + 0x10;
      }
      uVar31 = local_308.Data.ArrayNum - 1;
      if (local_308.Data.ArrayNum == 0) {
        uVar31 = uVar33;
      }
      ::FString::AppendChars(&local_338,(wchar_t *)local_308.Data.AllocatorInstance.Data,uVar31);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_338,"\n\n",2);
      pUVar10 = local_318;
      puVar20 = (undefined8 *)
                (**(code **)(*(longlong *)local_318 + 0x348))(local_318,local_1a0,local_387);
      uVar31 = 0;
      uVar36 = *(int *)(puVar20 + 1) - 1;
      if (*(int *)(puVar20 + 1) == 0) {
        uVar36 = uVar31;
      }
      ::FString::AppendChars(&local_338,(wchar_t *)*puVar20,uVar36);
      if (local_1a0[0] != (void *)0x0) {
        FMemory::Free(local_1a0[0]);
      }
      FVar26.Data = local_338.Data.AllocatorInstance.Data;
      pFVar23 = &pUVar18->Source;
      if (pFVar23 != &local_338) {
        iVar4 = local_338.Data.ArrayNum;
        lVar27 = (longlong)local_338.Data.ArrayNum;
        piVar1 = &(pUVar18->Source).Data.ArrayMax;
        iVar34 = *piVar1;
        (pUVar18->Source).Data.ArrayNum = local_338.Data.ArrayNum;
        if ((local_338.Data.ArrayNum == 0) && (iVar34 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_338.Data.ArrayNum,iVar34,(ForAnyElementType *)pFVar23,
                     local_338.Data.ArrayNum,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar23->Data).AllocatorInstance.Data,FVar26.Data,lVar27 * 2);
          }
        }
      }
      plVar21 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x338))(pUVar10,local_1c0);
      plVar22 = &pUVar18->_padding_;
      if (plVar22 != plVar21) {
        if ((void *)*plVar22 != (void *)0x0) {
          FMemory::Free((void *)*plVar22);
        }
        *plVar22 = *plVar21;
        *plVar21 = 0;
        *(int *)&pUVar18->_padding_ = (int)plVar21[1];
        *(undefined4 *)((longlong)&pUVar18->_padding_ + 4) =
             *(undefined4 *)((longlong)plVar21 + 0xc);
        plVar21[1] = 0;
      }
      if (local_1c0[0] != (void *)0x0) {
        FMemory::Free(local_1c0[0]);
      }
      plVar22 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x340))(pUVar10,local_190);
      lVar27 = plVar22[1];
      pUVar18->_padding_ = *plVar22;
      *(int *)&pUVar18->_padding_ = (int)lVar27;
      plVar21 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x350))(pUVar10,local_1b0);
      plVar22 = &pUVar18->_padding_;
      if (plVar22 != plVar21) {
        if ((void *)*plVar22 != (void *)0x0) {
          FMemory::Free((void *)*plVar22);
        }
        *plVar22 = *plVar21;
        *plVar21 = 0;
        *(int *)&pUVar18->_padding_ = (int)plVar21[1];
        *(undefined4 *)((longlong)&pUVar18->_padding_ + 4) =
             *(undefined4 *)((longlong)plVar21 + 0xc);
        plVar21[1] = 0;
      }
      if (local_1b0[0] != (void *)0x0) {
        FMemory::Free(local_1b0[0]);
      }
      uVar36 = local_d0;
      uStack_224 = uVar33;
      if (local_d0 != 0) {
        puVar32 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar32 = local_d8;
        }
        uVar28 = *puVar32;
        uVar33 = 0;
        uVar31 = 0;
        while (uVar28 == 0) {
          lVar27 = (longlong)(int)uVar31;
          uVar33 = uVar33 + 0x20;
          uVar31 = uVar31 + 1;
          uStack_224 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar31)
          goto LAB_14e19ab21;
          uVar28 = (puVar32 + 1)[lVar27];
        }
        uVar14 = -uVar28 & uVar28;
        uVar19 = (ulonglong)uVar14 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_29c = (int)lVar27;
        uStack_224 = (uVar33 - 1) + local_29c;
        if ((int)local_d0 < (int)uStack_224) {
          uStack_224 = local_d0;
        }
      }
LAB_14e19ab21:
      local_240 = (longlong *)local_f8;
      uStack_21c = local_104;
      local_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      iStack_218 = local_f8._8_4_ - local_c4;
      uVar28 = local_d0 & 0xffffffe0;
      uStack_228 = 0xffffffff;
      TStack_208.CurrentBitIndex = uStack_224;
      TStack_208.UnvisitedBitMask = 0xffffffff;
      TStack_208._padding_ = CONCAT44(uVar14,uVar31);
      iVar34 = (int)local_d0 >> 5;
      TStack_208._28_4_ = local_104;
      TStack_208.BaseBitIndex = uVar33;
      uStack_1e8 = CONCAT44(uStack_214,iStack_218);
      bVar25 = (byte)local_d0;
      uStack_238 = uVar31;
      uStack_234 = uVar14;
      local_220 = uVar33;
      local_210 = local_240;
      TStack_208.Array = local_230;
      if (((int)local_d0 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        pTVar15 = (TVariant<UOptimusKernelSource_*,FText> *)(*pcVar8)();
        return pTVar15;
      }
      if (uVar36 != local_d0) {
        puVar32 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar32 = local_d8;
        }
        uVar14 = -1 << (bVar25 & 0x1f) & puVar32[iVar34];
        while (uVar14 == 0) {
          lVar27 = (longlong)iVar34;
          uVar28 = uVar28 + 0x20;
          iVar34 = iVar34 + 1;
          uVar36 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
          goto LAB_14e19ac70;
          uVar14 = (puVar32 + 1)[lVar27];
        }
        uVar19 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_298 = (int)lVar27;
        uVar36 = local_298 + -1 + uVar28;
        if ((int)local_d0 < (int)uVar36) {
          uVar36 = local_d0;
        }
      }
LAB_14e19ac70:
      while( true ) {
        plVar22 = local_210;
        if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)uStack_1e8) {
          local_385[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_385);
        }
        pUVar18 = local_368;
        __return_storage_ptr__ = local_380;
        if (((TStack_208.CurrentBitIndex == uVar36) &&
            (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
           (plVar22 == (longlong *)local_f8)) break;
        this_00 = (FName *)(*plVar22 + (longlong)TStack_208.CurrentBitIndex * 0x18);
        if (*this_00 != this_00[1]) {
          pFVar23 = ::FName::ToString(this_00 + 1,&local_170);
          pFVar24 = ::FName::ToString(this_00,&local_160);
          local_360 = (pFVar24->Data).AllocatorInstance.Data;
          (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358._0_4_ = (pFVar24->Data).ArrayNum;
          local_358._4_4_ = (pFVar24->Data).ArrayMax;
          (pFVar24->Data).ArrayNum = 0;
          (pFVar24->Data).ArrayMax = 0;
          local_350 = (pFVar23->Data).AllocatorInstance.Data;
          (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_348._0_4_ = (pFVar23->Data).ArrayNum;
          local_348._4_4_ = (pFVar23->Data).ArrayMax;
          (pFVar23->Data).ArrayNum = 0;
          (pFVar23->Data).ArrayMax = 0;
          pFVar30 = (pFVar24->Data).AllocatorInstance.Data;
          if (pFVar30 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar30);
          }
          pFVar30 = (pFVar23->Data).AllocatorInstance.Data;
          if (pFVar30 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar30);
          }
          if ((((FScriptContainerElement **)pUVar18->_padding_ <= &local_360) &&
              (&local_360 <
               (FScriptContainerElement **)pUVar18->_padding_ +
               (longlong)*(int *)((longlong)&pUVar18->_padding_ + 4) * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar8 = (code *)swi(3);
            pTVar15 = (TVariant<UOptimusKernelSource_*,FText> *)(*pcVar8)();
            return pTVar15;
          }
          iVar34 = (int)pUVar18->_padding_;
          piVar1 = (int *)((longlong)&pUVar18->_padding_ + 4);
          if (iVar34 == *piVar1) {
            iVar34 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)&pUVar18->_padding_,piVar1);
          }
          *(int *)&pUVar18->_padding_ = iVar34 + 1;
          puVar20 = (undefined8 *)((longlong)iVar34 * 0x20 + pUVar18->_padding_);
          *puVar20 = 0;
          *puVar20 = local_360;
          *(undefined4 *)(puVar20 + 1) = (undefined4)local_358;
          *(undefined4 *)((longlong)puVar20 + 0xc) = local_358._4_4_;
          puVar20[2] = 0;
          puVar20[2] = local_350;
          *(undefined4 *)(puVar20 + 3) = (undefined4)local_348;
          *(undefined4 *)((longlong)puVar20 + 0x1c) = local_348._4_4_;
          local_348 = 0;
          local_350 = (FScriptContainerElement *)0x0;
          local_358 = 0;
          local_360 = (FScriptContainerElement *)0x0;
        }
        TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
      }
      local_380->_padding_ = (longlong)local_368;
      local_380->TypeIndex = '\0';
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_378.AllocatorInstance.Data,local_378.ArrayNum);
      if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.AllocatorInstance.Data);
      }
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      goto LAB_14e19aed9;
    }
    (**(code **)((longlong)*(ITextData *)local_1d0.TypedValue.TextData.Reference + 8))
              (local_1d0.TypedValue.TextData.Reference,local_258);
    __return_storage_ptr__->_padding_ = (longlong)local_1d0.TypedValue.TextData.Reference;
    (**(code **)((longlong)*(ITextData *)local_1d0.TypedValue.TextData.Reference + 8))
              (local_1d0.TypedValue.TextData.Reference,local_254);
    *(uint *)&__return_storage_ptr__->_padding_ = local_1d0.TypedValue.Flags;
    __return_storage_ptr__->TypeIndex = '\x01';
    (**(code **)((longlong)*(ITextData *)local_1d0.TypedValue.TextData.Reference + 0x10))
              (local_1d0.TypedValue.TextData.Reference);
    (**(code **)((longlong)*(ITextData *)local_1d0.TypedValue.TextData.Reference + 0x10))
              (local_1d0.TypedValue.TextData.Reference);
    DestructItems<FString,int>((FString *)local_378.AllocatorInstance.Data,local_378.ArrayNum);
    if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.AllocatorInstance.Data);
    }
  }
  else {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2177961143954309262>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                        ,0x8e,"PrimaryBindings.Num() == 1");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pTVar15 = (TVariant<UOptimusKernelSource_*,FText> *)(*pcVar8)();
      return pTVar15;
    }
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_180,L"OptimusKernelBase",L"ZeroOrMultiplePrimaryBindings",
                         L"Primary Group has zero or more than one Component Bindings");
    __return_storage_ptr__->_padding_ = 0;
    pIVar5 = (pFVar17->TextData).Reference;
    __return_storage_ptr__->_padding_ = (longlong)pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_268);
    }
    *(uint *)&__return_storage_ptr__->_padding_ = pFVar17->Flags;
    __return_storage_ptr__->TypeIndex = '\x01';
    pIVar5 = (pFVar17->TextData).Reference;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
LAB_14e19aed9:
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  return __return_storage_ptr__;
}

// DoesOutputPinSupportAtomic @ 14e1a48f0

bool __thiscall
UOptimusNode_ComputeKernelBase::DoesOutputPinSupportAtomic
          (UOptimusNode_ComputeKernelBase *this,UOptimusNodePin *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
             ,0x34,L"Pure virtual not implemented (%s)");
  return false;
}

// DoesOutputPinSupportRead @ 14e1a49f0

bool __thiscall
UOptimusNode_ComputeKernelBase::DoesOutputPinSupportRead
          (UOptimusNode_ComputeKernelBase *this,UOptimusNodePin *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
             ,0x35,L"Pure virtual not implemented (%s)");
  return false;
}

// GetAdditionalSources @ 14e1b7d70

TArray<TObjectPtr<UComputeSource>,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_ComputeKernelBase::GetAdditionalSources
          (UOptimusNode_ComputeKernelBase *this,
          TArray<TObjectPtr<UComputeSource>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetAtomicWriteFunctionName @ 14e1ba6d0

FString * __cdecl
UOptimusNode_ComputeKernelBase::GetAtomicWriteFunctionName
          (FString *__return_storage_ptr__,EOptimusBufferWriteType param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 == WriteAtomicAdd) {
    ::FString::PrintfImpl(&local_18,L"AtomicAdd%s");
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_18) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
  }
  else if (param_1 == WriteAtomicMin) {
    ::FString::PrintfImpl(&local_28,L"AtomicMin%s");
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_28) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    if (param_1 != WriteAtomicMax) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                         ,0x178,L"");
      if (!bVar3) {
        return __return_storage_ptr__;
      }
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_38,L"AtomicMax%s");
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_38) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return __return_storage_ptr__;
}

// GetExecutionDomain @ 14e1c4dc0

FOptimusExecutionDomain * __thiscall
UOptimusNode_ComputeKernelBase::GetExecutionDomain
          (UOptimusNode_ComputeKernelBase *this,FOptimusExecutionDomain *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
             ,0x31,L"Pure virtual not implemented (%s)");
  *(undefined8 *)&(__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->Type = DomainName;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Expression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Expression).Data.ArrayNum = 0;
  (__return_storage_ptr__->Expression).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGroupSize @ 14e1c58b0

TIntVector3<int> * __thiscall
UOptimusNode_ComputeKernelBase::GetGroupSize
          (UOptimusNode_ComputeKernelBase *this,TIntVector3<int> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
             ,0x1e,L"Pure virtual not implemented (%s)");
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  return __return_storage_ptr__;
}

// GetIndexNamesFromDataDomain @ 14e1c88d0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UOptimusNode_ComputeKernelBase::GetIndexNamesFromDataDomain
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOptimusDataDomain *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_1->Type == Dimensional) {
    pFVar2 = (param_1->DimensionNames).AllocatorInstance.Data;
    local_38.ArrayNum = (param_1->DimensionNames).ArrayNum;
    lVar6 = (longlong)local_38.ArrayNum;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar2,lVar6 << 3);
    }
    pTVar5 = GetIndexNamesFromDataDomainLevels(&local_28,&local_38);
    if (__return_storage_ptr__ != pTVar5) {
      DestructItems<FString,int>
                ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
                 __return_storage_ptr__->ArrayNum);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar5->ArrayNum;
      *piVar1 = pTVar5->ArrayMax;
      pTVar5->ArrayNum = 0;
      pTVar5->ArrayMax = 0;
    }
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  else if (param_1->Type == Expression) {
    ::FString::FString(&local_18,L"Index");
    DestructItems<FString,int>
              ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum);
    __return_storage_ptr__->ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,*piVar1,&__return_storage_ptr__->AllocatorInstance,1,piVar1);
    ConstructItems<FString,FString,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetIndexNamesFromDataDomainLevels @ 14e1c8ab0

/* WARNING: Removing unreachable block (ram,0x00014e1c8c0c) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UOptimusNode_ComputeKernelBase::GetIndexNamesFromDataDomainLevels
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) break;
    local_res10 = *pFVar8;
    ::FName::ToString(&local_res10,&local_38);
    ::FString::PrintfImpl(&local_48,L"%sIndex");
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(FScriptContainerElement **)pFVar7 = local_48.Data.AllocatorInstance.Data;
    *(int *)(pFVar7 + 8) = local_48.Data.ArrayNum;
    *(int *)(pFVar7 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 1;
  }
  return __return_storage_ptr__;
}

// GetKernelHlslName @ 14e1c8da0

FString * __thiscall
UOptimusNode_ComputeKernelBase::GetKernelHlslName
          (UOptimusNode_ComputeKernelBase *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetKernelSourceText @ 14e1c8f00

FString * __thiscall
UOptimusNode_ComputeKernelBase::GetKernelSourceText
          (UOptimusNode_ComputeKernelBase *this,FString *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNumThreadsReservedName @ 14e1cb910

wchar_t * __cdecl UOptimusNode_ComputeKernelBase::GetNumThreadsReservedName(void)

{
  return NumThreadsReservedName;
}

// GetPrimaryGroupPin @ 14e1d41c0

UOptimusNodePin * __thiscall
UOptimusNode_ComputeKernelBase::GetPrimaryGroupPin(UOptimusNode_ComputeKernelBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
             ,0x32,L"Pure virtual not implemented (%s)");
  return (UOptimusNodePin *)0x0;
}

// GetPrivateStaticClass @ 14e1d7460

UClass * __cdecl UOptimusNode_ComputeKernelBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ComputeKernelBase",
               &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ComputeKernelBase,0x110,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNode_ComputeKernelBase>,
               InternalVTableHelperCtorCaller<UOptimusNode_ComputeKernelBase>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.InnerSingleton;
}

// GetReadFunctionName @ 14e1db670

FString * __cdecl
UOptimusNode_ComputeKernelBase::GetReadFunctionName
          (FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Read%s");
  return __return_storage_ptr__;
}

// MakeKernelDataInterface @ 14e1f1960

UComputeDataInterface * __thiscall
UOptimusNode_ComputeKernelBase::MakeKernelDataInterface
          (UOptimusNode_ComputeKernelBase *this,UObject *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.h"
             ,0x33,L"Pure virtual not implemented (%s)");
  return (UComputeDataInterface *)0x0;
}

// ProcessInputPinForComputeKernel @ 14e201220

/* WARNING: Removing unreachable block (ram,0x00014e2022cd) */
/* WARNING: Removing unreachable block (ram,0x00014e2025de) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
UOptimusNode_ComputeKernelBase::ProcessInputPinForComputeKernel
          (UOptimusNode_ComputeKernelBase *this,TOptional<FText> *__return_storage_ptr__,
          bool param_1,FOptimusPinTraversalContext *param_2,UOptimusNodePin *param_3,
          FString *param_4,
          TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
          *param_5,UOptimusKernelSource *param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7,
          TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
          *param_8,bool *param_9)

{
  FOptimusDataTypeRef *this_00;
  int *piVar1;
  FString *this_01;
  EOptimusDataDomainType EVar2;
  FShaderValueType *this_02;
  UOptimusNodePin *this_03;
  UOptimusGraphDataInterface *this_04;
  UObject *pUVar3;
  code *pcVar4;
  FOptimusCDIPinDefinition *pFVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TOptional<FText> *pTVar11;
  FOptimus_KernelConnection *pFVar12;
  UOptimusNode *this_05;
  FName FVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  UClass *pUVar17;
  void *pvVar18;
  char *pcVar19;
  longlong *plVar20;
  FOptimusValueIdentifier *pFVar21;
  FString *pFVar22;
  ulonglong uVar23;
  atomic<unsigned_char> *paVar24;
  FShaderFunctionDefinition *pFVar25;
  ForAnyElementType FVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  ForAnyElementType FVar30;
  uint uVar31;
  int iVar32;
  undefined1 local_388;
  undefined1 local_387 [7];
  FShaderFunctionDefinition *local_380;
  ForAnyElementType local_378;
  undefined8 local_370;
  FString local_368;
  ForAnyElementType local_358;
  undefined8 local_350;
  undefined1 local_348;
  FShaderParamTypeDefinition local_340;
  FString local_310;
  FString local_300;
  FOptimusCDIPinDefinition *local_2f0;
  int local_2e8;
  ForAnyElementType local_2e0;
  int local_2d8;
  int local_2d4;
  FShaderFunctionDefinition *local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0 [2];
  FString local_2b8;
  FString local_2a8;
  FShaderParamTypeDefinition local_298;
  FString local_268;
  TArray<FString,TSizedDefaultAllocator<32>_> local_258;
  FString local_248;
  UOptimusGraphDataInterface *local_238;
  uint local_230;
  FScriptContainerElement *local_228;
  int local_220;
  int local_21c;
  FString local_218;
  FName local_208;
  FString local_200;
  FString local_1f0;
  undefined1 local_1e0 [12];
  FName local_1d4;
  FString local_1c8;
  UOptimusGraphDataInterface *local_1b8;
  TSharedPtr<FOptimusDataType_const_,1> local_1b0;
  FString local_1a0;
  TSharedPtr<FOptimusDataType_const_,1> local_190;
  TSharedPtr<FOptimusDataType_const_,1> local_180;
  FString local_170;
  undefined4 *local_160;
  UOptimusGraphDataInterface **local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FString local_e8;
  FString local_d8 [2];
  undefined1 local_b0 [16];
  FText local_a0;
  FTextFormat local_90;
  FText local_80;
  FTextFormat local_70;
  FTextFormat local_60;
  FString local_50;
  FText local_40;
  
  local_340.TypeDeclaration.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.TypeDeclaration.Data.ArrayNum = 0;
  local_340.TypeDeclaration.Data.ArrayMax = 0;
  local_340.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.Name.Data.ArrayNum = 0;
  local_340.Name.Data.ArrayMax = 0;
  local_340.BindingType = None;
  local_340.ResourceType = None;
  local_340.Modifier = None;
  local_340.ValueType = FShaderValueType::Get(Uint);
  local_340.ArrayElementCount = 0;
  FShaderParamTypeDefinition::ResetTypeDeclaration(&local_340);
  this_00 = &param_3->DataType;
  FOptimusDataTypeRef::Resolve(this_00,&local_1b0);
  if ((local_1b0.Object == (FOptimusDataType *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TOptional<FText> *)(*pcVar4)();
    return pTVar11;
  }
  this_02 = ((local_1b0.Object)->ShaderValueType).ValueTypePtr;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.SharedReferenceCount.ReferenceController);
  pFVar12 = TMapBase<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
            ::Find((TMapBase<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
                    *)param_5,param_3);
  if (pFVar12 == (FOptimus_KernelConnection *)0x0) {
    local_380 = (FShaderFunctionDefinition *)0x0;
    local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.Data.ArrayNum = 0;
    local_2a8.Data.ArrayMax = 0;
    if (((param_3->DataDomain).Type == Dimensional) &&
       ((param_3->DataDomain).DimensionNames.ArrayNum == 0)) {
      if (this_02->Type == Struct) {
        FVar13 = UOptimusNodePin::GetUniqueName(param_3);
        pFVar14 = FText::FromName(&local_40,(FName *)FVar13);
        pFVar15 = FText::AsLocalizable_Advanced_LocText
                            (&local_f8,L"OptimusKernelBase",L"DisconnectedStructPinUnsupported",
                             L"Disconnected struct type pin \'{0}\' is not supported");
        pFVar16 = FTextFormat::FTextFormat(&local_60,pFVar15,Default);
        pFVar14 = FText::Format<FText>(&local_108,pFVar16,pFVar14);
        FText::FText((FText *)__return_storage_ptr__,pFVar14);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOptional<FText> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        goto LAB_14e20264e;
      }
      FOptimusDataTypeRef::Resolve(this_00,&local_190);
      if ((local_190.Object == (FOptimusDataType *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TOptional<FText> *)(*pcVar4)();
        return pTVar11;
      }
      FShaderValueType::GetZeroValueAsString
                (((local_190.Object)->ShaderValueType).ValueTypePtr,&local_1f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.SharedReferenceCount.ReferenceController);
      local_380 = (FShaderFunctionDefinition *)local_1f0.Data.AllocatorInstance.Data;
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.Data.ArrayNum = 0;
      local_1f0.Data.ArrayMax = 0;
    }
    else {
      FOptimusDataTypeRef::Resolve(this_00,&local_180);
      if ((local_180.Object == (FOptimusDataType *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TOptional<FText> *)(*pcVar4)();
        return pTVar11;
      }
      pFVar22 = FShaderValueType::GetZeroValueAsString
                          (((local_180.Object)->ShaderValueType).ValueTypePtr,local_d8);
      if (&local_50 != pFVar22) {
        local_380 = (FShaderFunctionDefinition *)(pFVar22->Data).AllocatorInstance.Data;
        (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->Data).ArrayNum = 0;
        (pFVar22->Data).ArrayMax = 0;
      }
      if (local_d8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8[0].Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.SharedReferenceCount.ReferenceController);
      local_378.Data = (FScriptContainerElement *)0x0;
      local_370 = 0;
      GetIndexNamesFromDataDomain(&local_258,&param_3->DataDomain);
      iVar32 = local_258.ArrayNum;
      pFVar28 = local_258.AllocatorInstance.Data + (longlong)local_258.ArrayNum * 0x10;
      FVar30.Data = local_258.AllocatorInstance.Data;
      while( true ) {
        if (local_258.ArrayNum != iVar32) {
          local_388 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_388);
        }
        if (FVar30.Data == pFVar28) break;
        ::FString::PrintfImpl(&local_170,L"uint %s");
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_170.Data.ArrayNum != 0) {
          FVar26.Data = local_170.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_310,(wchar_t *)FVar26.Data);
        if (((local_378.Data <= (FScriptContainerElement *)&local_310) &&
            ((FScriptContainerElement *)&local_310 <
             local_378.Data + (longlong)local_370._4_4_ * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOptional<FText> *)(*pcVar4)();
          return pTVar11;
        }
        if ((int)local_370 == local_370._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_378,(int *)((longlong)&local_370 + 4));
          pFVar27 = local_378.Data + (longlong)iVar10 * 0x10;
          local_370 = CONCAT44(local_370._4_4_,iVar10 + 1);
        }
        else {
          pFVar27 = local_378.Data + (longlong)(int)local_370 * 0x10;
          local_370 = CONCAT44(local_370._4_4_,(int)local_370 + 1);
        }
        *(undefined8 *)pFVar27 = 0;
        *(FScriptContainerElement **)pFVar27 = local_310.Data.AllocatorInstance.Data;
        *(int *)(pFVar27 + 8) = local_310.Data.ArrayNum;
        *(int *)(pFVar27 + 0xc) = local_310.Data.ArrayMax;
        local_310.Data.ArrayNum = 0;
        local_310.Data.ArrayMax = 0;
        local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        FVar30.Data = FVar30.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
      if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.AllocatorInstance.Data);
      }
      local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar6 = true;
      local_2b8.Data.ArrayNum = 0;
      local_2b8.Data.ArrayMax = 0;
      iVar32 = (int)local_370;
      uVar23 = (ulonglong)(int)local_370;
      pFVar28 = local_378.Data + uVar23 * 0x10;
      FVar30.Data = local_378.Data;
      while( true ) {
        if ((int)uVar23 != iVar32) {
          local_387[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_387);
        }
        if (FVar30.Data == pFVar28) break;
        if (bVar6) {
          bVar6 = false;
        }
        else {
          ::FString::AppendChars(&local_2b8,L", ",2);
        }
        iVar10 = *(int *)(FVar30.Data + 8) + -1;
        if (*(int *)(FVar30.Data + 8) == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(&local_2b8,*(wchar_t **)FVar30.Data,iVar10);
        uVar23 = local_370 & 0xffffffff;
        FVar30.Data = FVar30.Data + 0x10;
      }
      FVar30.Data = (FScriptContainerElement *)L"";
      if (local_2b8.Data.ArrayNum != 0) {
        FVar30.Data = local_2b8.Data.AllocatorInstance.Data;
      }
      ::FString::operator=(&local_2a8,(wchar_t *)FVar30.Data);
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_378.Data,(int)local_370);
      if (local_378.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data);
      }
    }
    FVar30.Data = (FScriptContainerElement *)0x0;
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.Data.ArrayNum = 0;
    local_248.Data.ArrayMax = 0;
    if (1 < (param_4->Data).ArrayNum) {
      ::FString::PrintfImpl(&local_200,L"namespace %s { ");
      FVar30.Data = local_200.Data.AllocatorInstance.Data;
      local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.Data.ArrayNum = 0;
      local_200.Data.ArrayMax = 0;
      ::FString::operator=(&local_248,L" }");
    }
    local_1d4 = (FName)param_3->_padding_;
    ::FName::ToString(&local_1d4,&local_1c8);
    local_208.ComparisonIndex.Value = 0;
    local_208.Number = 0;
    FShaderValueType::ToString(this_02,&local_e8,&local_208);
    ::FString::PrintfImpl(&local_300,L"%s%s Read%s(%s) { return %s; }%s");
    pFVar28 = (param_7->AllocatorInstance).Data;
    if (((pFVar28 <= (FScriptContainerElement *)&local_300) &&
        ((FScriptContainerElement *)&local_300 < pFVar28 + (longlong)param_7->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TOptional<FText> *)(*pcVar4)();
      return pTVar11;
    }
    iVar32 = param_7->ArrayNum;
    if (iVar32 == param_7->ArrayMax) {
      iVar32 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_7->AllocatorInstance,&param_7->ArrayMax);
      param_7->ArrayNum = iVar32 + 1;
    }
    else {
      param_7->ArrayNum = iVar32 + 1;
    }
    pFVar28 = (param_7->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
    *(undefined8 *)pFVar28 = 0;
    *(FScriptContainerElement **)pFVar28 = local_300.Data.AllocatorInstance.Data;
    *(int *)(pFVar28 + 8) = local_300.Data.ArrayNum;
    *(int *)(pFVar28 + 0xc) = local_300.Data.ArrayMax;
    local_300.Data.ArrayNum = 0;
    local_300.Data.ArrayMax = 0;
    local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (FVar30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar30.Data);
    }
    pFVar25 = local_380;
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      pFVar25 = local_380;
    }
  }
  else {
    this_03 = pFVar12->ConnectedPin;
    this_05 = UOptimusNodePin::GetOwningNode(this_03);
    this_04 = (UOptimusGraphDataInterface *)pFVar12->DataInterface;
    local_1b8 = this_04;
    cVar7 = (**(code **)(this_04->_padding_ + 0x2c0))(this_04);
    if (cVar7 == '\0') {
      if (1 < (param_4->Data).ArrayNum) {
        FVar13 = UOptimusNodePin::GetUniqueName(param_3);
        pFVar14 = FText::FromName(&local_a0,(FName *)FVar13);
        pFVar15 = FText::AsLocalizable_Advanced_LocText
                            (&local_138,L"OptimusKernelBase",
                             L"SecondaryGroupOnlySupportsDataInterfaceUnifiedDispatch",
                             L"Cannot connect Secondary group input binding pin \'{0}\' to a data interface that does not support unified dispatch, consider inserting a kernel inbetween"
                            );
        pFVar16 = FTextFormat::FTextFormat(&local_90,pFVar15,Default);
        pFVar14 = FText::Format<FText>(&local_148,pFVar16,pFVar14);
        FText::FText((FText *)__return_storage_ptr__,pFVar14);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOptional<FText> *)(*pcVar4)();
          return pTVar11;
        }
        local_118.TextData.Reference = local_138.TextData.Reference;
        if (local_148.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
          local_118.TextData.Reference = local_138.TextData.Reference;
        }
LAB_14e2014ce:
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        if (local_340.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Name.Data.AllocatorInstance.Data);
        }
        if (local_340.TypeDeclaration.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_340.TypeDeclaration.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      if (param_1) {
        FVar13 = UOptimusNodePin::GetUniqueName(param_3);
        pFVar14 = FText::FromName(&local_80,(FName *)FVar13);
        pFVar15 = FText::AsLocalizable_Advanced_LocText
                            (&local_118,L"OptimusKernelBase",
                             L"InvalidInput_KernelOnlySupportsDataInterfaceUnifiedDispatch",
                             L"Cannot connect input binding pin \'{0}\' to a data interface that does not support unified dispatch, consider using a simple kernel execution domain or inserting a kernel inbetween"
                            );
        pFVar16 = FTextFormat::FTextFormat(&local_70,pFVar15,Default);
        pFVar14 = FText::Format<FText>(&local_128,pFVar16,pFVar14);
        FText::FText((FText *)__return_storage_ptr__,pFVar14);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOptional<FText> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        goto LAB_14e2014ce;
      }
      *param_9 = false;
    }
    uVar9 = 0xffffffff;
    uVar31 = 0xffffffff;
    local_380 = (FShaderFunctionDefinition *)CONCAT44(local_380._4_4_,0xffffffff);
    uVar8 = uVar31;
    if (this_05 != (UOptimusNode *)0x0) {
      pUVar17 = Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister();
      pvVar18 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_05,pUVar17);
      if (pvVar18 == (void *)0x0) {
        pUVar17 = UOptimusDataInterfaceProvider::GetPrivateStaticClass();
        plVar20 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_05,pUVar17);
        if (plVar20 == (longlong *)0x0) {
          pUVar17 = Z_Construct_UClass_UOptimusValueProvider_NoRegister();
          plVar20 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_05,pUVar17);
          if (plVar20 == (longlong *)0x0) {
            pUVar17 = UOptimusNode_LoopTerminal::StaticClass();
            iVar32 = (int)pUVar17->_padding_;
            if ((iVar32 <= *(int *)(this_05->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_05->_padding_ + 0x30) + (longlong)iVar32 * 8) ==
                &pUVar17->_padding_)) {
              pUVar17 = UOptimusLoopTerminalDataInterface::StaticClass();
              iVar32 = (int)pUVar17->_padding_;
              if ((*(int *)(this_04->_padding_ + 0x38) < iVar32) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar32 * 8)
                  != &pUVar17->_padding_)) {
                pcVar19 = "Cast<const UOptimusLoopTerminalDataInterface>(DataInterface)";
                iVar32 = 0x1cd;
                paVar24 = &bGEnsureHasExecuted<2177961143954309581>;
                goto LAB_14e201872;
              }
              pUVar17 = UOptimusLoopTerminalDataInterface::StaticClass();
              if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar17);
              }
              pUVar3 = (pUVar17->ClassDefaultObject).field0_0x0.DebugPtr;
              pUVar17 = UOptimusLoopTerminalDataInterface::StaticClass();
              iVar32 = (int)pUVar17->_padding_;
              if (((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar32) ||
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar32 * 8)
                   != &pUVar17->_padding_)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Ret->IsA(T::StaticClass())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0x1181,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pTVar11 = (TOptional<FText> *)(*pcVar4)();
                return pTVar11;
              }
              (**(code **)(*(longlong *)pUVar3 + 0x350))(pUVar3,&local_2f0);
              uVar8 = 0;
              if (0 < local_2e8) {
                lVar29 = 0;
                do {
                  uVar9 = 0;
                  if ((int)uVar8 < local_2e8) {
                    uVar9 = ~uVar8 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    pTVar11 = (TOptional<FText> *)(*pcVar4)();
                    return pTVar11;
                  }
                  pFVar5 = local_2f0;
                  FVar13 = UOptimusNodePin::GetUniqueName(this_03);
                  if (*(longlong *)FVar13 ==
                      *(longlong *)((longlong)&(pFVar5->PinName).ComparisonIndex.Value + lVar29)) {
                    if (uVar8 != 0xffffffff) {
                      DestructItems<FOptimusCDIPinDefinition,int>(local_2f0,local_2e8);
                      if (local_2f0 != (FOptimusCDIPinDefinition *)0x0) {
                        FMemory::Free(local_2f0);
                      }
                      local_380 = (FShaderFunctionDefinition *)CONCAT44(local_380._4_4_,uVar8);
                      goto LAB_14e20188b;
                    }
                    break;
                  }
                  uVar8 = uVar8 + 1;
                  lVar29 = lVar29 + 0x38;
                } while ((int)uVar8 < local_2e8);
              }
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4855340561101487814>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_LoopTerminal.cpp"
                                 ,0x13a,"PinIndex != INDEX_NONE");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar11 = (TOptional<FText> *)(*pcVar4)();
                return pTVar11;
              }
              DestructItems<FOptimusCDIPinDefinition,int>(local_2f0,local_2e8);
              if (local_2f0 != (FOptimusCDIPinDefinition *)0x0) {
                FMemory::Free(local_2f0);
              }
              local_380 = (FShaderFunctionDefinition *)CONCAT44(local_380._4_4_,0xffffffff);
              uVar8 = uVar31;
            }
          }
          else {
            pUVar17 = UOptimusGraphDataInterface::StaticClass();
            iVar32 = (int)pUVar17->_padding_;
            if (((*(int *)(this_04->_padding_ + 0x38) < iVar32) ||
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar32 * 8)
                 != &pUVar17->_padding_)) || (this_04 == (UOptimusGraphDataInterface *)0x0)) {
              pcVar19 = "GraphDataInterface";
              iVar32 = 0x1c5;
              paVar24 = &bGEnsureHasExecuted<2177961143954309573>;
              goto LAB_14e201872;
            }
            pFVar21 = (FOptimusValueIdentifier *)(**(code **)(*plVar20 + 0x10))(plVar20,local_b0);
            uVar9 = UOptimusGraphDataInterface::FindFunctionIndex(this_04,pFVar21);
            local_380 = (FShaderFunctionDefinition *)CONCAT44(local_380._4_4_,uVar9);
            uVar8 = uVar9;
            if (uVar9 == 0xffffffff) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("DataInterfaceFuncIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                                 ,0x1c8,L"");
              goto LAB_14e201885;
            }
          }
        }
        else {
          pUVar17 = UOptimusComputeDataInterface::StaticClass();
          iVar32 = (int)pUVar17->_padding_;
          if ((*(int *)(this_04->_padding_ + 0x38) < iVar32) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar32 * 8) !=
              &pUVar17->_padding_)) {
            pcVar19 = "Cast<UOptimusComputeDataInterface>(DataInterface)";
            iVar32 = 0x1bd;
            paVar24 = &bGEnsureHasExecuted<2177961143954309565>;
            goto LAB_14e201872;
          }
          uVar8 = (**(code **)(*plVar20 + 0x18))(plVar20,this_03);
          local_380 = (FShaderFunctionDefinition *)CONCAT44(local_380._4_4_,uVar8);
        }
      }
      else {
        pUVar17 = UOptimusRawBufferDataInterface::StaticClass();
        iVar32 = (int)pUVar17->_padding_;
        if ((*(int *)(this_04->_padding_ + 0x38) < iVar32) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar32 * 8) !=
            &pUVar17->_padding_)) {
          pcVar19 = "Cast<UOptimusRawBufferDataInterface>(DataInterface)";
          iVar32 = 0x1b6;
          paVar24 = &bGEnsureHasExecuted<2177961143954309558>;
LAB_14e201872:
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (paVar24,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                             ,iVar32,pcVar19);
LAB_14e201885:
          uVar8 = uVar9;
          if (bVar6 != false) {
            pcVar4 = (code *)swi(3);
            pTVar11 = (TOptional<FText> *)(*pcVar4)();
            return pTVar11;
          }
        }
        else {
          local_380 = (FShaderFunctionDefinition *)CONCAT44(local_380._4_4_,1);
          uVar8 = 1;
        }
      }
    }
LAB_14e20188b:
    iVar32 = 0;
    local_2d0 = (FShaderFunctionDefinition *)0x0;
    local_2c8 = 0;
    (**(code **)(this_04->_padding_ + 0x2d8))(this_04,&local_2d0);
    uVar9 = 0;
    if ((int)uVar8 < (int)local_2c8) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TOptional<FText> *)(*pcVar4)();
      return pTVar11;
    }
    local_2e0.Data = (FScriptContainerElement *)0x0;
    local_2d8 = local_2d0[(int)uVar8].Name.Data.ArrayNum;
    lVar29 = (longlong)local_2d8;
    pFVar28 = local_2d0[(int)uVar8].Name.Data.AllocatorInstance.Data;
    if (local_2d8 == 0) {
      local_2d4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2d8,0,&local_2e0,local_2d8,&local_2d4);
      memcpy(local_2e0.Data,pFVar28,lVar29 * 2);
    }
    local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.Data.ArrayNum = 0;
    local_368.Data.ArrayMax = 0;
    local_358.Data = (FScriptContainerElement *)0x0;
    local_350 = 0;
    local_348 = 0;
    uVar9 = local_2d8 - 1;
    if (local_2d8 == 0) {
      uVar9 = 0;
    }
    ::FString::AssignRange(&local_368,(wchar_t *)local_2e0.Data,uVar9);
    local_348 = 1;
    local_298.TypeDeclaration.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.TypeDeclaration.Data.ArrayNum = 0;
    local_298.TypeDeclaration.Data.ArrayMax = 0;
    local_298.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Name.Data.ArrayNum = 0;
    local_298.Name.Data.ArrayMax = 0;
    local_298.ArrayElementCount = 0;
    local_298.BindingType = None;
    local_298.ResourceType = None;
    local_298.Modifier = None;
    local_298.ValueType.ValueTypePtr = this_02;
    FShaderParamTypeDefinition::ResetTypeDeclaration(&local_298);
    iVar10 = (int)local_350;
    if ((int)local_350 == local_350._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_358,(int *)((longlong)&local_350 + 4));
    }
    FVar30.Data = local_298.TypeDeclaration.Data.AllocatorInstance.Data;
    local_350 = CONCAT44(local_350._4_4_,iVar10 + 1);
    pFVar28 = local_358.Data + (longlong)iVar10 * 0x30;
    *(FScriptContainerElement **)&pFVar28->field_0x0 = (FScriptContainerElement *)0x0;
    lVar29 = (longlong)local_298.TypeDeclaration.Data.ArrayNum;
    *(int *)(pFVar28 + 8) = local_298.TypeDeclaration.Data.ArrayNum;
    if (local_298.TypeDeclaration.Data.ArrayNum == 0) {
      *(int *)(pFVar28 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_298.TypeDeclaration.Data.ArrayNum,0,(ForAnyElementType *)pFVar28,
                 local_298.TypeDeclaration.Data.ArrayNum,(int *)(pFVar28 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar28->field_0x0,FVar30.Data,lVar29 * 2);
    }
    FVar30.Data = local_298.Name.Data.AllocatorInstance.Data;
    pFVar27 = pFVar28 + 0x10;
    *(FScriptContainerElement **)pFVar27 = (FScriptContainerElement *)0x0;
    lVar29 = (longlong)local_298.Name.Data.ArrayNum;
    *(int *)(pFVar28 + 0x18) = local_298.Name.Data.ArrayNum;
    if (local_298.Name.Data.ArrayNum == 0) {
      *(int *)(pFVar28 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_298.Name.Data.ArrayNum,0,(ForAnyElementType *)pFVar27,
                 local_298.Name.Data.ArrayNum,(int *)(pFVar28 + 0x1c));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar27,FVar30.Data,lVar29 * 2);
    }
    *(FShaderValueType **)(pFVar28 + 0x20) = local_298.ValueType.ValueTypePtr;
    *(ushort *)(pFVar28 + 0x28) = local_298.ArrayElementCount;
    pFVar28[0x2a] = (FScriptContainerElement)local_298.BindingType;
    pFVar28[0x2b] = (FScriptContainerElement)local_298.ResourceType;
    pFVar28[0x2c] = (FScriptContainerElement)local_298.Modifier;
    if (((param_3->DataDomain).Type != Dimensional) ||
       (local_238 = this_04, local_230 = uVar8, (param_3->DataDomain).DimensionNames.ArrayNum != 0))
    {
      while( true ) {
        EVar2 = (param_3->DataDomain).Type;
        if (EVar2 == Dimensional) {
          iVar10 = (param_3->DataDomain).DimensionNames.ArrayNum;
        }
        else if (EVar2 == Expression) {
          iVar10 = 1;
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusDataDomain.h"
                             ,0x6f,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar11 = (TOptional<FText> *)(*pcVar4)();
            return pTVar11;
          }
          iVar10 = 0;
        }
        if (iVar10 <= iVar32) break;
        if (((local_358.Data <= &local_340) &&
            (&local_340 <
             (FShaderParamTypeDefinition *)(local_358.Data + (longlong)local_350._4_4_ * 0x30))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOptional<FText> *)(*pcVar4)();
          return pTVar11;
        }
        iVar10 = (int)local_350;
        if ((int)local_350 == local_350._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_358,(int *)((longlong)&local_350 + 4));
        }
        FVar30.Data = local_340.TypeDeclaration.Data.AllocatorInstance.Data;
        local_350 = CONCAT44(local_350._4_4_,iVar10 + 1);
        pFVar28 = local_358.Data + (longlong)iVar10 * 0x30;
        *(FScriptContainerElement **)&pFVar28->field_0x0 = (FScriptContainerElement *)0x0;
        lVar29 = (longlong)local_340.TypeDeclaration.Data.ArrayNum;
        *(int *)(pFVar28 + 8) = local_340.TypeDeclaration.Data.ArrayNum;
        if (local_340.TypeDeclaration.Data.ArrayNum == 0) {
          *(int *)(pFVar28 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_340.TypeDeclaration.Data.ArrayNum,0,(ForAnyElementType *)pFVar28,
                     local_340.TypeDeclaration.Data.ArrayNum,(int *)(pFVar28 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar28->field_0x0,FVar30.Data,lVar29 * 2);
        }
        FVar30.Data = local_340.Name.Data.AllocatorInstance.Data;
        pFVar27 = pFVar28 + 0x10;
        *(FScriptContainerElement **)pFVar27 = (FScriptContainerElement *)0x0;
        lVar29 = (longlong)local_340.Name.Data.ArrayNum;
        *(int *)(pFVar28 + 0x18) = local_340.Name.Data.ArrayNum;
        if (local_340.Name.Data.ArrayNum == 0) {
          *(int *)(pFVar28 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_340.Name.Data.ArrayNum,0,(ForAnyElementType *)pFVar27,
                     local_340.Name.Data.ArrayNum,(int *)(pFVar28 + 0x1c));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar27,FVar30.Data,lVar29 * 2);
        }
        iVar32 = iVar32 + 1;
        *(FShaderValueType **)(pFVar28 + 0x20) = local_340.ValueType.ValueTypePtr;
        *(ushort *)(pFVar28 + 0x28) = local_340.ArrayElementCount;
        pFVar28[0x2a] = (FScriptContainerElement)local_340.BindingType;
        pFVar28[0x2b] = (FScriptContainerElement)local_340.ResourceType;
        pFVar28[0x2c] = (FScriptContainerElement)local_340.Modifier;
      }
      local_238 = local_1b8;
      local_230 = (uint)local_380;
    }
    local_1e0._4_8_ = param_3->_padding_;
    local_228 = (void *)0x0;
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    ::FName::ToString((FName *)(local_1e0 + 4),&local_1a0);
    ::FString::PrintfImpl(&local_268,L"Read%s");
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    local_228 = local_268.Data.AllocatorInstance.Data;
    local_220 = local_268.Data.ArrayNum;
    local_21c = local_268.Data.ArrayMax;
    local_268.Data.ArrayNum = 0;
    local_268.Data.ArrayMax = 0;
    local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (&local_218 != param_4) {
      iVar32 = (param_4->Data).ArrayNum;
      pFVar28 = (param_4->Data).AllocatorInstance.Data;
      local_218.Data.ArrayNum = iVar32;
      if (((iVar32 != 0) || (local_218.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar32,local_218.Data.ArrayMax,(ForAnyElementType *)&local_218,iVar32,
                     &local_218.Data.ArrayMax), iVar32 != 0)) {
        memcpy(local_218.Data.AllocatorInstance.Data,pFVar28,(longlong)iVar32 * 2);
      }
    }
    local_2c0[0] = (undefined4)param_6->_padding_;
    local_160 = local_2c0;
    local_158 = &local_238;
    TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&>_>
              ((TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
                *)param_8,(TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&> *)local_1e0,
               (bool *)&local_160);
    iVar32 = (int)param_6->_padding_;
    piVar1 = (int *)((longlong)&param_6->_padding_ + 4);
    if (iVar32 == *piVar1) {
      iVar32 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,(ForAnyElementType *)&param_6->_padding_,piVar1);
    }
    *(int *)&param_6->_padding_ = iVar32 + 1;
    this_01 = (FString *)(param_6->_padding_ + (longlong)iVar32 * 0x28);
    ::FString::FString(this_01,&local_368);
    FVar30.Data = local_358.Data;
    pFVar22 = this_01 + 1;
    (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    piVar1 = &this_01[1].Data.ArrayMax;
    iVar32 = (int)local_350;
    this_01[1].Data.ArrayNum = (int)local_350;
    if ((int)local_350 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,(int)local_350,0,(ForAnyElementType *)pFVar22,(int)local_350,piVar1);
      ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                ((pFVar22->Data).AllocatorInstance.Data,(FShaderParamTypeDefinition *)FVar30.Data,
                 iVar32);
    }
    *(undefined1 *)&this_01[2].Data.AllocatorInstance.Data = local_348;
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_228 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228);
    }
    if (local_298.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Name.Data.AllocatorInstance.Data);
    }
    if (local_298.TypeDeclaration.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.TypeDeclaration.Data.AllocatorInstance.Data);
    }
    DestructItems<FShaderParamTypeDefinition,int>
              ((FShaderParamTypeDefinition *)local_358.Data,(int)local_350);
    if ((FShaderParamTypeDefinition *)local_358.Data != (FShaderParamTypeDefinition *)0x0) {
      FMemory::Free(local_358.Data);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if (local_2e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data);
    }
    DestructItems<FShaderFunctionDefinition,int>(local_2d0,(int)local_2c8);
    pFVar25 = local_2d0;
  }
  if (pFVar25 != (FShaderFunctionDefinition *)0x0) {
    FMemory::Free(pFVar25);
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
LAB_14e20264e:
  if (local_340.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Name.Data.AllocatorInstance.Data);
  }
  if (local_340.TypeDeclaration.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.TypeDeclaration.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProcessOutputPinForComputeKernel @ 14e2026a0

/* WARNING: Removing unreachable block (ram,0x00014e2045b2) */
/* WARNING: Removing unreachable block (ram,0x00014e2038f5) */
/* WARNING: Removing unreachable block (ram,0x00014e203508) */
/* WARNING: Removing unreachable block (ram,0x00014e203baf) */
/* WARNING: Removing unreachable block (ram,0x00014e2047cd) */
/* WARNING: Removing unreachable block (ram,0x00014e202cdf) */
/* WARNING: Removing unreachable block (ram,0x00014e202a1b) */
/* WARNING: Removing unreachable block (ram,0x00014e202cf0) */
/* WARNING: Removing unreachable block (ram,0x00014e202a2c) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
UOptimusNode_ComputeKernelBase::ProcessOutputPinForComputeKernel
          (UOptimusNode_ComputeKernelBase *this,TOptional<FText> *__return_storage_ptr__,
          bool param_1,FOptimusPinTraversalContext *param_2,UOptimusNodePin *param_3,
          TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
          *param_4,UOptimusKernelSource *param_5,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_6,
          TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
          *param_7,TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
                   *param_8,bool *param_9)

{
  FString *pFVar1;
  int *piVar2;
  FShaderFunctionDefinition *pFVar3;
  FString *pFVar4;
  UOptimusNodePin *this_00;
  UComputeDataInterface *pUVar5;
  void *_Src;
  FShaderParamTypeDefinition *pFVar6;
  code *pcVar7;
  FShaderFunctionDefinition *pFVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  TOptional<FText> *pTVar13;
  UOptimusNode *this_01;
  UClass *pUVar14;
  longlong lVar15;
  longlong *plVar16;
  FName FVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  ulonglong uVar21;
  UOptimusNode *pUVar22;
  uint uVar23;
  FShaderValueType *pFVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  FShaderFunctionDefinition *pFVar27;
  ForAnyElementType FVar28;
  ForAnyElementType FVar29;
  TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *pTVar30;
  undefined4 uVar31;
  FScriptContainerElement *pFVar32;
  EOptimusBufferWriteType EVar33;
  ForAnyElementType local_548;
  uint local_540;
  uint local_53c;
  undefined1 local_538;
  undefined1 local_537;
  undefined1 local_536;
  undefined1 local_535;
  undefined1 local_534;
  undefined1 local_533;
  undefined1 local_532 [2];
  ForAnyElementType local_530;
  undefined8 local_528;
  ForAnyElementType local_520;
  undefined8 local_518;
  ForAnyElementType local_510;
  undefined8 local_508;
  TArray<FString,TSizedDefaultAllocator<32>_> local_500;
  TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *local_4f0;
  int local_4e8;
  uint local_4e4;
  FString local_4e0;
  ForAnyElementType local_4d0;
  undefined8 local_4c8;
  undefined1 local_4c0;
  FShaderFunctionDefinition *local_4b8;
  undefined8 local_4b0;
  FShaderValueType *local_4a8;
  FString local_4a0;
  ForAnyElementType local_490;
  int local_488;
  int local_484;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  ForAnyElementType local_440;
  int local_438;
  int local_434;
  FShaderFunctionDefinition *local_430;
  undefined8 local_428;
  FShaderFunctionDefinition *local_420;
  undefined8 local_418;
  FShaderFunctionDefinition *local_410;
  undefined8 local_408;
  FShaderFunctionDefinition *local_400;
  undefined8 local_3f8;
  FWriteConnectionDef local_3f0;
  FShaderParamTypeDefinition local_3c8;
  FWriteConnectionDef local_398;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368 [2];
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  ForAnyElementType local_310;
  int local_308;
  int local_304;
  undefined1 local_300;
  FScriptContainerElement *local_2f8;
  FString local_2f0;
  ForAnyElementType local_2e0;
  int local_2d8;
  int local_2d4;
  undefined1 local_2d0;
  FString local_2c8;
  FShaderParamTypeDefinition local_2b8;
  FString local_288;
  FString local_278;
  longlong local_268;
  FName local_260;
  FName local_258;
  TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *local_250;
  undefined4 local_248;
  FScriptContainerElement *local_240;
  int local_238;
  int local_234;
  void *local_230;
  undefined8 local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  TSharedPtr<FOptimusDataType_const_,1> local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *local_188;
  uint local_180;
  FString local_178;
  void *local_168;
  undefined8 local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  undefined1 local_140 [16];
  TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&> local_130;
  undefined4 local_120;
  FString local_118;
  void *local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  FOptimus_InterfaceBinding **local_f0;
  FString local_e8;
  FString local_d8;
  undefined4 *local_c8;
  TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> **local_c0;
  undefined4 *local_b8;
  TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> **local_b0;
  FText local_a0;
  FText local_90;
  FString local_80;
  FString local_70;
  FText local_60;
  FTextFormat local_50;
  
  pUVar22 = (UOptimusNode *)0x0;
  local_3c8.TypeDeclaration.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.TypeDeclaration.Data.ArrayNum = 0;
  local_3c8.TypeDeclaration.Data.ArrayMax = 0;
  local_3c8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.Name.Data.ArrayNum = 0;
  local_3c8.Name.Data.ArrayMax = 0;
  local_3c8.BindingType = None;
  local_3c8.ResourceType = None;
  local_3c8.Modifier = None;
  local_3c8.ValueType = FShaderValueType::Get(Uint);
  local_3c8.ArrayElementCount = 0;
  FShaderParamTypeDefinition::ResetTypeDeclaration(&local_3c8);
  GetIndexNamesFromDataDomain(&local_500,&param_3->DataDomain);
  FOptimusDataTypeRef::Resolve(&param_3->DataType,&local_208);
  if ((local_208.Object == (FOptimusDataType *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TOptional<FText> *)(*pcVar7)();
    return pTVar13;
  }
  pFVar24 = ((local_208.Object)->ShaderValueType).ValueTypePtr;
  local_4a8 = pFVar24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  local_4f0 = TMapBase<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>
                      *)param_4,param_3);
  iVar25 = local_500.ArrayNum;
  if (local_4f0 == (TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar21 = (ulonglong)local_500.ArrayNum;
    local_520.Data = (FScriptContainerElement *)0x0;
    local_518 = 0;
    pFVar32 = local_500.AllocatorInstance.Data + uVar21 * 0x10;
    FVar29.Data = local_500.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar21 != iVar25) {
        local_533 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_533);
      }
      if (FVar29.Data == pFVar32) break;
      ::FString::PrintfImpl(&local_1a8,L"uint %s");
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar28.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_460,(wchar_t *)FVar28.Data);
      if (((local_520.Data <= (FScriptContainerElement *)&local_460) &&
          ((FScriptContainerElement *)&local_460 < local_520.Data + (longlong)local_518._4_4_ * 0x10
          )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TOptional<FText> *)(*pcVar7)();
        return pTVar13;
      }
      if ((int)local_518 == local_518._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_520,(int *)((longlong)&local_518 + 4));
        pFVar26 = local_520.Data + (longlong)iVar12 * 0x10;
        local_518 = CONCAT44(local_518._4_4_,iVar12 + 1);
      }
      else {
        pFVar26 = local_520.Data + (longlong)(int)local_518 * 0x10;
        local_518 = CONCAT44(local_518._4_4_,(int)local_518 + 1);
      }
      *(undefined8 *)pFVar26 = 0;
      *(FScriptContainerElement **)pFVar26 = local_460.Data.AllocatorInstance.Data;
      *(int *)(pFVar26 + 8) = local_460.Data.ArrayNum;
      *(int *)(pFVar26 + 0xc) = local_460.Data.ArrayMax;
      local_460.Data.ArrayNum = 0;
      local_460.Data.ArrayMax = 0;
      local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      uVar21 = (ulonglong)(uint)local_500.ArrayNum;
      FVar29.Data = FVar29.Data + 0x10;
    }
    local_258.ComparisonIndex.Value = 0;
    local_258.Number = 0;
    FShaderValueType::ToString(pFVar24,&local_70,&local_258);
    local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar9 = true;
    local_330.Data.ArrayNum = 0;
    local_330.Data.ArrayMax = 0;
    iVar25 = (int)local_518;
    uVar21 = (ulonglong)(int)local_518;
    pFVar32 = local_520.Data + uVar21 * 0x10;
    FVar29.Data = local_520.Data;
    while( true ) {
      if ((int)uVar21 != iVar25) {
        local_532[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_532);
      }
      if (FVar29.Data == pFVar32) break;
      if (bVar9) {
        bVar9 = false;
      }
      else {
        ::FString::AppendChars(&local_330,L", ",2);
      }
      iVar12 = *(int *)(FVar29.Data + 8) + -1;
      if (*(int *)(FVar29.Data + 8) == 0) {
        iVar12 = 0;
      }
      ::FString::AppendChars(&local_330,*(wchar_t **)FVar29.Data,iVar12);
      uVar21 = local_518 & 0xffffffff;
      FVar29.Data = FVar29.Data + 0x10;
    }
    local_220 = (FName)param_3->_padding_;
    ::FName::ToString(&local_220,&local_198);
    ::FString::PrintfImpl(&local_450,L"void Write%s(%s, %s Value) { }");
    pFVar32 = (param_6->AllocatorInstance).Data;
    if (((pFVar32 <= (FScriptContainerElement *)&local_450) &&
        ((FScriptContainerElement *)&local_450 < pFVar32 + (longlong)param_6->ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TOptional<FText> *)(*pcVar7)();
      return pTVar13;
    }
    iVar25 = param_6->ArrayNum;
    if (iVar25 == param_6->ArrayMax) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_6->AllocatorInstance,&param_6->ArrayMax);
      param_6->ArrayNum = iVar25 + 1;
    }
    else {
      param_6->ArrayNum = iVar25 + 1;
    }
    pFVar32 = (param_6->AllocatorInstance).Data + (longlong)iVar25 * 0x10;
    *(undefined8 *)pFVar32 = 0;
    *(FScriptContainerElement **)pFVar32 = local_450.Data.AllocatorInstance.Data;
    *(int *)(pFVar32 + 8) = local_450.Data.ArrayNum;
    *(int *)(pFVar32 + 0xc) = local_450.Data.ArrayMax;
    local_450.Data.ArrayNum = 0;
    local_450.Data.ArrayMax = 0;
    local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_520.Data,(int)local_518);
    if (local_520.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Data);
    }
LAB_14e204821:
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
    DestructItems<FString,int>((FString *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
    if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.AllocatorInstance.Data);
    }
    if (local_3c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Name.Data.AllocatorInstance.Data);
    }
    if (local_3c8.TypeDeclaration.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.TypeDeclaration.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  iVar25 = local_4f0->ArrayNum;
  pFVar32 = (local_4f0->AllocatorInstance).Data;
  pFVar26 = pFVar32 + (longlong)iVar25 * 0x10;
  local_548.Data = (FScriptContainerElement *)0x0;
  local_540 = 0;
  local_53c = 0;
  this_01 = pUVar22;
  do {
    pTVar30 = local_4f0;
    if (local_4f0->ArrayNum != iVar25) {
      local_538 = 0;
      `TCheckedPointerIterator<FOptimus_KernelConnection_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_538);
      pUVar22 = (UOptimusNode *)(ulonglong)local_540;
    }
    if (pFVar32 == pFVar26) {
      local_530.Data = (FScriptContainerElement *)0x0;
      local_528 = 0;
      local_4e4 = 0;
      if (0 < (int)pUVar22) {
        local_268 = 0;
        do {
          lVar15 = local_268;
          iVar25 = 0;
          uVar23 = 0;
          if ((int)local_4e4 < (int)pUVar22) {
            uVar23 = ~local_4e4 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            pTVar13 = (TOptional<FText> *)(*pcVar7)();
            return pTVar13;
          }
          pFVar32 = local_548.Data + lVar15;
          local_490.Data = (FScriptContainerElement *)0x0;
          local_488 = *(int *)(pFVar32 + 0x10);
          lVar15 = (longlong)local_488;
          _Src = *(void **)(pFVar32 + 8);
          local_2f8 = pFVar32;
          if (local_488 == 0) {
            local_484 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_488,0,&local_490,local_488,&local_484);
            memcpy(local_490.Data,_Src,lVar15 * 2);
          }
          iVar12 = local_488;
          FVar29.Data = local_490.Data;
          local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4e0.Data.ArrayMax = 0;
          local_4d0.Data = (FScriptContainerElement *)0x0;
          local_4c8 = 0;
          local_4c0 = 0;
          local_4e0.Data.ArrayNum = local_488;
          if (local_488 != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_488,0,(ForAnyElementType *)&local_4e0,local_488,
                       &local_4e0.Data.ArrayMax);
            memcpy(local_4e0.Data.AllocatorInstance.Data,FVar29.Data,(longlong)iVar12 * 2);
          }
          local_4c0 = 0;
          local_2b8.TypeDeclaration.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b8.TypeDeclaration.Data.ArrayNum = 0;
          local_2b8.TypeDeclaration.Data.ArrayMax = 0;
          local_2b8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b8.Name.Data.ArrayNum = 0;
          local_2b8.Name.Data.ArrayMax = 0;
          local_2b8.ArrayElementCount = 0;
          local_2b8.BindingType = None;
          local_2b8.ResourceType = None;
          local_2b8.Modifier = None;
          local_2b8.ValueType.ValueTypePtr = pFVar24;
          FShaderParamTypeDefinition::ResetTypeDeclaration(&local_2b8);
          if (0 < local_500.ArrayNum) {
            do {
              if (((local_4d0.Data <= &local_3c8) &&
                  (&local_3c8 <
                   (FShaderParamTypeDefinition *)(local_4d0.Data + (longlong)local_4c8._4_4_ * 0x30)
                  )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar9)) {
                pcVar7 = (code *)swi(3);
                pTVar13 = (TOptional<FText> *)(*pcVar7)();
                return pTVar13;
              }
              iVar12 = (int)local_4c8;
              if ((int)local_4c8 == local_4c8._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&local_4d0,(int *)((longlong)&local_4c8 + 4));
              }
              local_4c8 = CONCAT44(local_4c8._4_4_,iVar12 + 1);
              pFVar26 = local_4d0.Data + (longlong)iVar12 * 0x30;
              ::FString::FString((FString *)pFVar26,&local_3c8.TypeDeclaration);
              ::FString::FString((FString *)(pFVar26 + 0x10),&local_3c8.Name);
              iVar25 = iVar25 + 1;
              *(FShaderValueType **)(pFVar26 + 0x20) = local_3c8.ValueType.ValueTypePtr;
              *(ushort *)(pFVar26 + 0x28) = local_3c8.ArrayElementCount;
              pFVar26[0x2a] = (FScriptContainerElement)local_3c8.BindingType;
              pFVar26[0x2b] = (FScriptContainerElement)local_3c8.ResourceType;
              pFVar26[0x2c] = (FScriptContainerElement)local_3c8.Modifier;
            } while (iVar25 < local_500.ArrayNum);
          }
          iVar25 = (int)local_4c8;
          if ((int)local_4c8 == local_4c8._4_4_) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&local_4d0,(int *)((longlong)&local_4c8 + 4));
          }
          local_4c8 = CONCAT44(local_4c8._4_4_,iVar25 + 1);
          pFVar26 = local_4d0.Data + (longlong)iVar25 * 0x30;
          ::FString::FString((FString *)pFVar26,&local_2b8.TypeDeclaration);
          ::FString::FString((FString *)(pFVar26 + 0x10),&local_2b8.Name);
          *(FShaderValueType **)(pFVar26 + 0x20) = local_2b8.ValueType.ValueTypePtr;
          *(ushort *)(pFVar26 + 0x28) = local_2b8.ArrayElementCount;
          pFVar26[0x2a] = (FScriptContainerElement)local_2b8.BindingType;
          pFVar26[0x2b] = (FScriptContainerElement)local_2b8.ResourceType;
          pFVar26[0x2c] = (FScriptContainerElement)local_2b8.Modifier;
          local_410 = (FShaderFunctionDefinition *)0x0;
          local_408 = 0;
          (**(code **)(**(longlong **)pFVar32 + 0x2e0))(*(longlong **)pFVar32,&local_410);
          FVar29.Data = local_490.Data;
          lVar15 = (longlong)local_488;
          local_440.Data = (FScriptContainerElement *)0x0;
          local_438 = local_488;
          if (local_488 == 0) {
            local_434 = 0;
            iVar25 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_488,0,&local_440,local_488,&local_434);
            memcpy(local_440.Data,FVar29.Data,lVar15 * 2);
            iVar25 = local_438;
          }
          pFVar8 = local_410;
          pFVar3 = local_410 + (int)local_408;
          FVar29.Data = local_440.Data;
          for (pFVar27 = local_410; pFVar27 != pFVar3; pFVar27 = pFVar27 + 1) {
            iVar12 = (pFVar27->Name).Data.ArrayNum;
            if (iVar25 == iVar12) {
              if (1 < iVar25) {
                iVar25 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)FVar29.Data,
                                    (wchar_t *)(pFVar27->Name).Data.AllocatorInstance.Data);
                bVar9 = iVar25 == 0;
                FVar29.Data = local_440.Data;
                iVar25 = local_438;
                goto LAB_14e203267;
              }
LAB_14e2032a2:
              uVar31 = (undefined4)(((longlong)pFVar27 - (longlong)pFVar8) / 0x28);
              if (FVar29.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar29.Data);
              }
              goto LAB_14e20328a;
            }
            bVar9 = iVar12 + iVar25 == 1;
LAB_14e203267:
            if (bVar9) goto LAB_14e2032a2;
          }
          if (FVar29.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar29.Data);
          }
          uVar31 = 0xffffffff;
LAB_14e20328a:
          if ((int)local_540 < 2) {
            local_150 = (FName)param_3->_padding_;
            ::FName::ToString(&local_150,&local_1d8);
            ::FString::PrintfImpl(&local_278,L"Write%s");
            FVar29.Data = local_278.Data.AllocatorInstance.Data;
            local_4e8 = local_278.Data.ArrayNum;
            local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_278.Data.ArrayNum = 0;
            local_278.Data.ArrayMax = 0;
            FVar28.Data = local_1d8.Data.AllocatorInstance.Data;
          }
          else {
            local_148 = (FName)param_3->_padding_;
            ::FName::ToString(&local_148,&local_1e8);
            ::FString::PrintfImpl(&local_288,L"Write%sTo%s%d");
            FVar29.Data = local_288.Data.AllocatorInstance.Data;
            local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_4e8 = local_288.Data.ArrayNum;
            local_288.Data.ArrayNum = 0;
            local_288.Data.ArrayMax = 0;
            if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
            }
            iVar25 = local_500.ArrayNum;
            uVar21 = (ulonglong)local_500.ArrayNum;
            bVar9 = true;
            local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_360.Data.ArrayNum = 0;
            local_360.Data.ArrayMax = 0;
            pFVar32 = local_500.AllocatorInstance.Data + uVar21 * 0x10;
            FVar28.Data = local_500.AllocatorInstance.Data;
            while( true ) {
              if ((uint)uVar21 != iVar25) {
                local_537 = 0;
                `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_537);
              }
              if (FVar28.Data == pFVar32) break;
              if (bVar9) {
                bVar9 = false;
              }
              else {
                ::FString::AppendChars(&local_360,L", ",2);
              }
              iVar12 = *(int *)(FVar28.Data + 8) + -1;
              if (*(int *)(FVar28.Data + 8) == 0) {
                iVar12 = 0;
              }
              ::FString::AppendChars(&local_360,*(wchar_t **)FVar28.Data,iVar12);
              uVar21 = (ulonglong)(uint)local_500.ArrayNum;
              FVar28.Data = FVar28.Data + 0x10;
            }
            ::FString::PrintfImpl(&local_4a0,L"    %s(%s, Value)");
            pFVar24 = local_4a8;
            if (((local_530.Data <= (FScriptContainerElement *)&local_4a0) &&
                ((FScriptContainerElement *)&local_4a0 <
                 local_530.Data + (longlong)local_528._4_4_ * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              pTVar13 = (TOptional<FText> *)(*pcVar7)();
              return pTVar13;
            }
            if ((int)local_528 == local_528._4_4_) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_530,(int *)((longlong)&local_528 + 4));
              pFVar32 = local_530.Data + (longlong)iVar25 * 0x10;
              local_528 = CONCAT44(local_528._4_4_,iVar25 + 1);
            }
            else {
              pFVar32 = local_530.Data + (longlong)(int)local_528 * 0x10;
              local_528 = CONCAT44(local_528._4_4_,(int)local_528 + 1);
            }
            *(undefined8 *)pFVar32 = 0;
            *(FScriptContainerElement **)pFVar32 = local_4a0.Data.AllocatorInstance.Data;
            *(int *)(pFVar32 + 8) = local_4a0.Data.ArrayNum;
            *(int *)(pFVar32 + 0xc) = local_4a0.Data.ArrayMax;
            local_4a0.Data.ArrayNum = 0;
            local_4a0.Data.ArrayMax = 0;
            local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar28.Data = local_360.Data.AllocatorInstance.Data;
          }
          if (FVar28.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar28.Data);
          }
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          local_108 = (void *)0x0;
          local_100 = 0;
          local_130.Value = *(FOptimus_InterfaceBinding **)local_2f8;
          iVar25 = local_4e8 + -1;
          if (local_4e8 == 0) {
            iVar25 = 0;
          }
          local_120 = uVar31;
          ::FString::AssignRange(&local_118,(wchar_t *)FVar29.Data,iVar25);
          local_370 = (undefined4)param_5->_padding_;
          local_f8 = &local_370;
          local_f0 = &local_130.Value;
          TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&>_>
                    ((TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
                      *)param_8,
                     (TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&> *)local_140,
                     (bool *)&local_f8);
          iVar25 = (int)param_5->_padding_;
          if (iVar25 == *(int *)((longlong)&param_5->_padding_ + 4)) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,(ForAnyElementType *)&param_5->_padding_,
                                (int *)((longlong)&param_5->_padding_ + 4));
          }
          *(int *)&param_5->_padding_ = iVar25 + 1;
          pFVar4 = (FString *)(param_5->_padding_ + (longlong)iVar25 * 0x28);
          ::FString::FString(pFVar4,&local_4e0);
          FVar28.Data = local_4d0.Data;
          pFVar1 = pFVar4 + 1;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          piVar2 = &pFVar4[1].Data.ArrayMax;
          iVar25 = (int)local_4c8;
          pFVar4[1].Data.ArrayNum = (int)local_4c8;
          if ((int)local_4c8 == 0) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,(int)local_4c8,0,(ForAnyElementType *)pFVar1,(int)local_4c8,piVar2);
            ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                      ((pFVar1->Data).AllocatorInstance.Data,
                       (FShaderParamTypeDefinition *)FVar28.Data,iVar25);
          }
          *(undefined1 *)&pFVar4[2].Data.AllocatorInstance.Data = local_4c0;
          if (local_108 != (void *)0x0) {
            FMemory::Free(local_108);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (FVar29.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar29.Data);
          }
          DestructItems<FShaderFunctionDefinition,int>(local_410,(int)local_408);
          if (local_410 != (FShaderFunctionDefinition *)0x0) {
            FMemory::Free(local_410);
          }
          if (local_2b8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Name.Data.AllocatorInstance.Data);
          }
          if (local_2b8.TypeDeclaration.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.TypeDeclaration.Data.AllocatorInstance.Data);
          }
          DestructItems<FShaderParamTypeDefinition,int>
                    ((FShaderParamTypeDefinition *)local_4d0.Data,(int)local_4c8);
          if ((FShaderParamTypeDefinition *)local_4d0.Data != (FShaderParamTypeDefinition *)0x0) {
            FMemory::Free(local_4d0.Data);
          }
          if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
          }
          if (local_490.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_490.Data);
          }
          iVar25 = local_500.ArrayNum;
          local_4e4 = local_4e4 + 1;
          pUVar22 = (UOptimusNode *)(ulonglong)local_540;
          local_268 = local_268 + 0x28;
        } while ((int)local_4e4 < (int)local_540);
        pTVar30 = local_4f0;
        if ((int)local_528 != 0) {
          uVar21 = (ulonglong)local_500.ArrayNum;
          pFVar32 = local_500.AllocatorInstance.Data + uVar21 * 0x10;
          local_510.Data = (FScriptContainerElement *)0x0;
          local_508 = 0;
          FVar29.Data = local_500.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar21 != iVar25) {
              local_536 = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_536);
            }
            pFVar24 = local_4a8;
            if (FVar29.Data == pFVar32) break;
            ::FString::PrintfImpl(&local_480,L"uint %s");
            if (((local_510.Data <= (FScriptContainerElement *)&local_480) &&
                ((FScriptContainerElement *)&local_480 <
                 local_510.Data + (longlong)local_508._4_4_ * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              pTVar13 = (TOptional<FText> *)(*pcVar7)();
              return pTVar13;
            }
            if ((int)local_508 == local_508._4_4_) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_510,(int *)((longlong)&local_508 + 4));
              pFVar26 = local_510.Data + (longlong)iVar12 * 0x10;
              local_508 = CONCAT44(local_508._4_4_,iVar12 + 1);
            }
            else {
              pFVar26 = local_510.Data + (longlong)(int)local_508 * 0x10;
              local_508 = CONCAT44(local_508._4_4_,(int)local_508 + 1);
            }
            *(undefined8 *)pFVar26 = 0;
            *(FScriptContainerElement **)pFVar26 = local_480.Data.AllocatorInstance.Data;
            local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar26 + 8) = local_480.Data.ArrayNum;
            *(int *)(pFVar26 + 0xc) = local_480.Data.ArrayMax;
            local_480.Data.ArrayNum = 0;
            local_480.Data.ArrayMax = 0;
            uVar21 = (ulonglong)(uint)local_500.ArrayNum;
            FVar29.Data = FVar29.Data + 0x10;
          }
          iVar25 = (int)local_528;
          uVar21 = (ulonglong)(int)local_528;
          bVar9 = true;
          pFVar32 = local_530.Data + uVar21 * 0x10;
          local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_340.Data.ArrayNum = 0;
          local_340.Data.ArrayMax = 0;
          FVar29.Data = local_530.Data;
          while( true ) {
            if ((int)uVar21 != iVar25) {
              local_535 = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_535);
            }
            if (FVar29.Data == pFVar32) break;
            if (bVar9) {
              bVar9 = false;
            }
            else {
              ::FString::AppendChars(&local_340,L";\n",2);
            }
            iVar12 = *(int *)(FVar29.Data + 8) + -1;
            if (*(int *)(FVar29.Data + 8) == 0) {
              iVar12 = 0;
            }
            ::FString::AppendChars(&local_340,*(wchar_t **)FVar29.Data,iVar12);
            uVar21 = local_528 & 0xffffffff;
            FVar29.Data = FVar29.Data + 0x10;
          }
          local_260.ComparisonIndex.Value = 0;
          local_260.Number = 0;
          local_2f8 = (FScriptContainerElement *)L"";
          if (local_340.Data.ArrayNum != 0) {
            local_2f8 = local_340.Data.AllocatorInstance.Data;
          }
          FShaderValueType::ToString(pFVar24,&local_80,&local_260);
          local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          bVar9 = true;
          local_350.Data.ArrayNum = 0;
          local_350.Data.ArrayMax = 0;
          iVar25 = (int)local_508;
          uVar21 = (ulonglong)(int)local_508;
          pFVar32 = local_510.Data + uVar21 * 0x10;
          FVar29.Data = local_510.Data;
          while( true ) {
            if ((int)uVar21 != iVar25) {
              local_534 = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_534);
            }
            if (FVar29.Data == pFVar32) break;
            if (bVar9) {
              bVar9 = false;
            }
            else {
              ::FString::AppendChars(&local_350,L", ",2);
            }
            iVar12 = *(int *)(FVar29.Data + 8) + -1;
            if (*(int *)(FVar29.Data + 8) == 0) {
              iVar12 = 0;
            }
            ::FString::AppendChars(&local_350,*(wchar_t **)FVar29.Data,iVar12);
            uVar21 = local_508 & 0xffffffff;
            FVar29.Data = FVar29.Data + 0x10;
          }
          local_158 = (FName)param_3->_padding_;
          ::FName::ToString(&local_158,&local_1c8);
          ::FString::PrintfImpl(&local_470,L"void Write%s(%s, %s Value)\n{\n%s;\n}");
          pFVar32 = (param_6->AllocatorInstance).Data;
          if (((pFVar32 <= (FScriptContainerElement *)&local_470) &&
              ((FScriptContainerElement *)&local_470 < pFVar32 + (longlong)param_6->ArrayMax * 0x10)
              ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
            pcVar7 = (code *)swi(3);
            pTVar13 = (TOptional<FText> *)(*pcVar7)();
            return pTVar13;
          }
          iVar25 = param_6->ArrayNum;
          if (iVar25 == param_6->ArrayMax) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_6->AllocatorInstance,&param_6->ArrayMax);
            param_6->ArrayNum = iVar25 + 1;
          }
          else {
            param_6->ArrayNum = iVar25 + 1;
          }
          pFVar32 = (param_6->AllocatorInstance).Data + (longlong)iVar25 * 0x10;
          *(undefined8 *)pFVar32 = 0;
          *(FScriptContainerElement **)pFVar32 = local_470.Data.AllocatorInstance.Data;
          *(int *)(pFVar32 + 8) = local_470.Data.ArrayNum;
          *(int *)(pFVar32 + 0xc) = local_470.Data.ArrayMax;
          local_470.Data.ArrayNum = 0;
          local_470.Data.ArrayMax = 0;
          local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_340.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_510.Data,(int)local_508);
          pTVar30 = local_4f0;
          if (local_510.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_510.Data);
            pTVar30 = local_4f0;
          }
        }
      }
      pFVar24 = (FShaderValueType *)&this->field_0x108;
      local_4a8 = pFVar24;
      cVar10 = (**(code **)(*(longlong *)pFVar24 + 0x30))(pFVar24);
      if ((cVar10 != '\0') ||
         (cVar10 = (**(code **)(*(longlong *)pFVar24 + 0x38))(pFVar24), cVar10 != '\0')) {
        if (pTVar30->ArrayNum < 1) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2177961143954309805>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                             ,0x2ad,"KernelConnections->Num() > 0");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar13 = (TOptional<FText> *)(*pcVar7)();
            return pTVar13;
          }
        }
        else {
          pTVar30 = *(TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> **)
                     (pTVar30->AllocatorInstance).Data;
          if (pTVar30 != (TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_> *)0x0) {
            pUVar14 = UOptimusRawBufferDataInterface::StaticClass();
            pFVar32 = pTVar30[1].AllocatorInstance.Data;
            iVar25 = (int)pUVar14->_padding_;
            if ((iVar25 <= *(int *)(pFVar32 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(pFVar32 + 0x30) + (longlong)iVar25 * 8)
                == &pUVar14->_padding_)) {
              cVar10 = (**(code **)(*(longlong *)pFVar24 + 0x30))(pFVar24,param_3);
              if (cVar10 != '\0') {
                local_420 = (FShaderFunctionDefinition *)0x0;
                local_418 = 0;
                (**(code **)((pTVar30->AllocatorInstance).Data + 0x2e0))(pTVar30,&local_420);
                EVar33 = WriteAtomicAdd;
                local_4f0 = pTVar30;
                do {
                  pTVar30 = local_4f0;
                  local_210 = (FName)param_3->_padding_;
                  ::FName::ToString(&local_210,&local_e8);
                  GetAtomicWriteFunctionName(&local_d8,EVar33,&local_e8);
                  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                  }
                  if (((int)local_418 <= (int)(uint)EVar33) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    pTVar13 = (TOptional<FText> *)(*pcVar7)();
                    return pTVar13;
                  }
                  pFVar3 = local_420 + EVar33;
                  ::FString::FString(&local_320,&pFVar3->Name);
                  local_310.Data = (FScriptContainerElement *)0x0;
                  iVar25 = (pFVar3->ParamTypes).ArrayNum;
                  pFVar6 = (FShaderParamTypeDefinition *)(pFVar3->ParamTypes).AllocatorInstance.Data
                  ;
                  local_308 = iVar25;
                  if (iVar25 == 0) {
                    local_304 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x30,8,iVar25,0,&local_310,iVar25,&local_304);
                    ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                              (local_310.Data,pFVar6,iVar25);
                  }
                  uVar23 = 0;
                  local_300 = pFVar3->bHasReturnType;
                  if (0 < local_308) {
                    do {
                      uVar11 = 0;
                      if ((int)uVar23 < local_308) {
                        uVar11 = ~uVar23 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar7 = (code *)swi(3);
                        pTVar13 = (TOptional<FText> *)(*pcVar7)();
                        return pTVar13;
                      }
                      FShaderParamTypeDefinition::ResetTypeDeclaration
                                ((FShaderParamTypeDefinition *)
                                 (local_310.Data + (longlong)(int)uVar23 * 0x30));
                      uVar23 = uVar23 + 1;
                    } while ((int)uVar23 < local_308);
                  }
                  FVar29.Data = local_d8.Data.AllocatorInstance.Data;
                  local_180 = (uint)EVar33;
                  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_178.Data.ArrayNum = 0;
                  local_178.Data.ArrayMax = 0;
                  local_168 = (void *)0x0;
                  local_160 = 0;
                  iVar25 = local_d8.Data.ArrayNum + -1;
                  if (local_d8.Data.ArrayNum == 0) {
                    iVar25 = 0;
                  }
                  local_188 = pTVar30;
                  ::FString::AssignRange
                            (&local_178,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar25);
                  local_368[0] = (undefined4)param_5->_padding_;
                  local_c8 = local_368;
                  local_c0 = &local_188;
                  TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&>_>
                            ((TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
                              *)param_8,
                             (TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&> *)
                             (local_140 + 0xc),(bool *)&local_c8);
                  iVar25 = (int)param_5->_padding_;
                  if (iVar25 == *(int *)((longlong)&param_5->_padding_ + 4)) {
                    iVar25 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x828,(ForAnyElementType *)&param_5->_padding_,
                                        (int *)((longlong)&param_5->_padding_ + 4));
                  }
                  *(int *)&param_5->_padding_ = iVar25 + 1;
                  pFVar4 = (FString *)(param_5->_padding_ + (longlong)iVar25 * 0x28);
                  ::FString::FString(pFVar4,&local_320);
                  iVar25 = local_308;
                  FVar28.Data = local_310.Data;
                  pFVar1 = pFVar4 + 1;
                  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  piVar2 = &pFVar4[1].Data.ArrayMax;
                  pFVar4[1].Data.ArrayNum = local_308;
                  if (local_308 == 0) {
                    *piVar2 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x30,8,local_308,0,(ForAnyElementType *)pFVar1,local_308,piVar2);
                    ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                              ((pFVar1->Data).AllocatorInstance.Data,
                               (FShaderParamTypeDefinition *)FVar28.Data,iVar25);
                  }
                  *(undefined1 *)&pFVar4[2].Data.AllocatorInstance.Data = local_300;
                  if (local_168 != (void *)0x0) {
                    FMemory::Free(local_168);
                  }
                  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_178.Data.AllocatorInstance.Data);
                  }
                  DestructItems<FShaderParamTypeDefinition,int>
                            ((FShaderParamTypeDefinition *)local_310.Data,local_308);
                  if ((FShaderParamTypeDefinition *)local_310.Data !=
                      (FShaderParamTypeDefinition *)0x0) {
                    FMemory::Free(local_310.Data);
                  }
                  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_320.Data.AllocatorInstance.Data);
                  }
                  if (FVar29.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar29.Data);
                  }
                  pTVar30 = local_4f0;
                  EVar33 = EVar33 + WriteAtomicAdd;
                } while (EVar33 < Count);
                DestructItems<FShaderFunctionDefinition,int>(local_420,(int)local_418);
                pFVar24 = local_4a8;
                if (local_420 != (FShaderFunctionDefinition *)0x0) {
                  FMemory::Free(local_420);
                  pFVar24 = local_4a8;
                }
              }
              cVar10 = (**(code **)(*(longlong *)pFVar24 + 0x38))(pFVar24,param_3);
              if (cVar10 != '\0') {
                uVar23 = 0;
                local_430 = (FShaderFunctionDefinition *)0x0;
                local_428 = 0;
                (**(code **)((pTVar30->AllocatorInstance).Data + 0x2d8))(pTVar30,&local_430);
                if (((int)local_428 < 3) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  pTVar13 = (TOptional<FText> *)(*pcVar7)();
                  return pTVar13;
                }
                pFVar3 = local_430;
                ::FString::FString(&local_2f0,&local_430[2].Name);
                local_2e0.Data = (FScriptContainerElement *)0x0;
                iVar25 = pFVar3[2].ParamTypes.ArrayNum;
                pFVar6 = (FShaderParamTypeDefinition *)pFVar3[2].ParamTypes.AllocatorInstance.Data;
                local_2d8 = iVar25;
                if (iVar25 == 0) {
                  local_2d4 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x30,8,iVar25,0,&local_2e0,iVar25,&local_2d4);
                  ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                            (local_2e0.Data,pFVar6,iVar25);
                }
                local_2d0 = pFVar3[2].bHasReturnType;
                if (0 < local_2d8) {
                  do {
                    uVar11 = 0;
                    if ((int)uVar23 < local_2d8) {
                      uVar11 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar11 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      pTVar13 = (TOptional<FText> *)(*pcVar7)();
                      return pTVar13;
                    }
                    FShaderParamTypeDefinition::ResetTypeDeclaration
                              ((FShaderParamTypeDefinition *)
                               (local_2e0.Data + (longlong)(int)uVar23 * 0x30));
                    uVar23 = uVar23 + 1;
                  } while ((int)uVar23 < local_2d8);
                }
                local_218 = (FName)param_3->_padding_;
                local_240 = (void *)0x0;
                local_230 = (void *)0x0;
                local_228 = 0;
                local_248 = 2;
                local_250 = pTVar30;
                ::FName::ToString(&local_218,&local_1b8);
                ::FString::PrintfImpl(&local_2c8,L"Read%s");
                if (local_240 != (void *)0x0) {
                  FMemory::Free(local_240);
                }
                local_240 = local_2c8.Data.AllocatorInstance.Data;
                local_238 = local_2c8.Data.ArrayNum;
                local_234 = local_2c8.Data.ArrayMax;
                local_2c8.Data.ArrayNum = 0;
                local_2c8.Data.ArrayMax = 0;
                local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                }
                local_36c = (undefined4)param_5->_padding_;
                local_b8 = &local_36c;
                local_b0 = &local_250;
                TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&>_>
                          ((TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
                            *)param_7,&local_130,(bool *)&local_b8);
                iVar25 = (int)param_5->_padding_;
                piVar2 = (int *)((longlong)&param_5->_padding_ + 4);
                if (iVar25 == *piVar2) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x828,(ForAnyElementType *)&param_5->_padding_,piVar2);
                }
                *(int *)&param_5->_padding_ = iVar25 + 1;
                pFVar4 = (FString *)(param_5->_padding_ + (longlong)iVar25 * 0x28);
                ::FString::FString(pFVar4,&local_2f0);
                iVar25 = local_2d8;
                FVar29.Data = local_2e0.Data;
                pFVar1 = pFVar4 + 1;
                (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                piVar2 = &pFVar4[1].Data.ArrayMax;
                pFVar4[1].Data.ArrayNum = local_2d8;
                if (local_2d8 == 0) {
                  *piVar2 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x30,8,local_2d8,0,(ForAnyElementType *)pFVar1,local_2d8,piVar2);
                  ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                            ((pFVar1->Data).AllocatorInstance.Data,
                             (FShaderParamTypeDefinition *)FVar29.Data,iVar25);
                }
                *(undefined1 *)&pFVar4[2].Data.AllocatorInstance.Data = local_2d0;
                if (local_230 != (void *)0x0) {
                  FMemory::Free(local_230);
                }
                if (local_240 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240);
                }
                DestructItems<FShaderParamTypeDefinition,int>
                          ((FShaderParamTypeDefinition *)local_2e0.Data,local_2d8);
                if ((FShaderParamTypeDefinition *)local_2e0.Data !=
                    (FShaderParamTypeDefinition *)0x0) {
                  FMemory::Free(local_2e0.Data);
                }
                if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
                }
                DestructItems<FShaderFunctionDefinition,int>(local_430,(int)local_428);
                if (local_430 != (FShaderFunctionDefinition *)0x0) {
                  FMemory::Free(local_430);
                }
              }
            }
          }
        }
      }
      DestructItems<FString,int>((FString *)local_530.Data,(int)local_528);
      if (local_530.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data);
      }
      DestructItems<_UOptimusNode_ComputeKernelBase::ProcessOutputPinForComputeKernel_::__l5::FWriteConnectionDef,int>
                ((FWriteConnectionDef *)local_548.Data,local_540);
      if ((FWriteConnectionDef *)local_548.Data != (FWriteConnectionDef *)0x0) {
        FMemory::Free(local_548.Data);
      }
      goto LAB_14e204821;
    }
    this_00 = *(UOptimusNodePin **)(pFVar32 + 8);
    if (this_00 != (UOptimusNodePin *)0x0) {
      this_01 = UOptimusNodePin::GetOwningNode(this_00);
    }
    pUVar5 = *(UComputeDataInterface **)pFVar32;
    local_4b8 = (FShaderFunctionDefinition *)0x0;
    local_4b0 = 0;
    (**(code **)(*(longlong *)pUVar5 + 0x2e0))(pUVar5,&local_4b8);
    cVar10 = (**(code **)(*(longlong *)pUVar5 + 0x2c0))(pUVar5);
    if (cVar10 == '\0') {
      if (param_1) {
        FVar17 = UOptimusNodePin::GetUniqueName(param_3);
        pFVar18 = FText::FromName(&local_60,(FName *)FVar17);
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_90,L"OptimusKernelBase",
                             L"InvalidOutput_KernelOnlySupportsDataInterfaceUnifiedDispatch",
                             L"Cannot connect output binding pin \'{0}\' to a data interface that does not support unified dispatch, consider using to a simple kernel execution domain or inserting a kernel inbetween"
                            );
        pFVar20 = FTextFormat::FTextFormat(&local_50,pFVar19,Default);
        pFVar18 = FText::Format<FText>(&local_a0,pFVar20,pFVar18);
        FText::FText((FText *)__return_storage_ptr__,pFVar18);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TOptional<FText> *)(*pcVar7)();
          return pTVar13;
        }
        if (local_a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
        }
        if (local_90.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
        }
        DestructItems<FShaderFunctionDefinition,int>(local_4b8,(int)local_4b0);
        if (local_4b8 != (FShaderFunctionDefinition *)0x0) {
          FMemory::Free(local_4b8);
        }
        DestructItems<_UOptimusNode_ComputeKernelBase::ProcessOutputPinForComputeKernel_::__l5::FWriteConnectionDef,int>
                  ((FWriteConnectionDef *)local_548.Data,local_540);
        if ((FWriteConnectionDef *)local_548.Data != (FWriteConnectionDef *)0x0) {
          FMemory::Free(local_548.Data);
        }
        DestructItems<FString,int>((FString *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
        if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_500.AllocatorInstance.Data);
        }
        if (local_3c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Name.Data.AllocatorInstance.Data);
        }
        if (local_3c8.TypeDeclaration.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_3c8.TypeDeclaration.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      *param_9 = false;
    }
    if (this_01 == (UOptimusNode *)0x0) {
      pUVar14 = UOptimusRawBufferDataInterface::StaticClass();
      iVar12 = (int)pUVar14->_padding_;
      if (((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar12) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
           &pUVar14->_padding_)) || (pUVar5 == (UComputeDataInterface *)0x0)) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2177961143954309725>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                           ,0x25d,"RawBufferDataInterface");
        if (bVar9) goto code_r0x00014e202acf;
LAB_14e202a5e:
        this_01 = (UOptimusNode *)0x0;
      }
      else {
        local_398.DataInterface = pUVar5;
        if (((int)local_4b0 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TOptional<FText> *)(*pcVar7)();
          return pTVar13;
        }
        ::FString::FString(&local_398.DataFunctionName,&local_4b8->Name);
        ::FString::FString(&local_398.WriteToName,L"RawBuffer");
        if (((local_548.Data <= &local_398) &&
            (&local_398 < (FWriteConnectionDef *)(local_548.Data + (longlong)(int)local_53c * 0x28))
            ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TOptional<FText> *)(*pcVar7)();
          return pTVar13;
        }
        if (local_540 == local_53c) {
          local_540 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_548,(int *)&local_53c);
        }
        lVar15 = (longlong)(int)local_540;
        *(UComputeDataInterface **)&local_548.Data[lVar15 * 0x28].field_0x0 =
             local_398.DataInterface;
        *(undefined8 *)(local_548.Data + lVar15 * 0x28 + 8) = 0;
        *(FScriptContainerElement **)(local_548.Data + lVar15 * 0x28 + 8) =
             local_398.DataFunctionName.Data.AllocatorInstance.Data;
        *(int *)(local_548.Data + lVar15 * 0x28 + 0x10) = local_398.DataFunctionName.Data.ArrayNum;
        *(int *)(local_548.Data + lVar15 * 0x28 + 0x14) = local_398.DataFunctionName.Data.ArrayMax;
        *(undefined8 *)(local_548.Data + lVar15 * 0x28 + 0x18) = 0;
        *(FScriptContainerElement **)(local_548.Data + lVar15 * 0x28 + 0x18) =
             local_398.WriteToName.Data.AllocatorInstance.Data;
        *(int *)(local_548.Data + lVar15 * 0x28 + 0x20) = local_398.WriteToName.Data.ArrayNum;
        *(int *)(local_548.Data + lVar15 * 0x28 + 0x24) = local_398.WriteToName.Data.ArrayMax;
        local_398.WriteToName.Data.ArrayNum = 0;
        local_398.WriteToName.Data.ArrayMax = 0;
        local_398.DataFunctionName.Data.ArrayNum = 0;
        local_398.DataFunctionName.Data.ArrayMax = 0;
        local_398.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_398.WriteToName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_540 = local_540 + 1;
      }
    }
    else {
      pUVar14 = UOptimusDataInterfaceProvider::GetPrivateStaticClass();
      plVar16 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar14);
      if (plVar16 == (longlong *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2177961143954309734>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                           ,0x266,"InterfaceProvider");
        if (!bVar9) goto LAB_14e202a5e;
code_r0x00014e202acf:
        pcVar7 = (code *)swi(3);
        pTVar13 = (TOptional<FText> *)(*pcVar7)();
        return pTVar13;
      }
      uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,this_00);
      local_400 = (FShaderFunctionDefinition *)0x0;
      local_3f8 = 0;
      (**(code **)(*(longlong *)pUVar5 + 0x2e0))(pUVar5,&local_400);
      uVar23 = 0;
      if ((int)uVar11 < (int)local_3f8) {
        uVar23 = ~uVar11 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TOptional<FText> *)(*pcVar7)();
        return pTVar13;
      }
      ::FString::FString(&local_1f8,&local_400[(int)uVar11].Name);
      this_01 = (UOptimusNode *)0x0;
      local_3f0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3f0.DataInterface = pUVar5;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                (&local_3f0.DataFunctionName.Data,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,
                 local_1f8.Data.ArrayNum,0);
      local_140._4_8_ = this_00->_padding_;
      ::FName::ToString((FName *)(local_140 + 4),&local_3f0.WriteToName);
      if (((local_548.Data <= &local_3f0) &&
          (&local_3f0 < (FWriteConnectionDef *)(local_548.Data + (longlong)(int)local_53c * 0x28)))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TOptional<FText> *)(*pcVar7)();
        return pTVar13;
      }
      if (local_540 == local_53c) {
        local_540 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_548,(int *)&local_53c);
      }
      uVar23 = local_540 + 1;
      lVar15 = (longlong)(int)local_540;
      *(UComputeDataInterface **)&local_548.Data[lVar15 * 0x28].field_0x0 = local_3f0.DataInterface;
      *(undefined8 *)(local_548.Data + lVar15 * 0x28 + 8) = 0;
      *(FScriptContainerElement **)(local_548.Data + lVar15 * 0x28 + 8) =
           local_3f0.DataFunctionName.Data.AllocatorInstance.Data;
      *(int *)(local_548.Data + lVar15 * 0x28 + 0x10) = local_3f0.DataFunctionName.Data.ArrayNum;
      *(int *)(local_548.Data + lVar15 * 0x28 + 0x14) = local_3f0.DataFunctionName.Data.ArrayMax;
      *(undefined8 *)(local_548.Data + lVar15 * 0x28 + 0x18) = 0;
      *(FScriptContainerElement **)(local_548.Data + lVar15 * 0x28 + 0x18) =
           local_3f0.WriteToName.Data.AllocatorInstance.Data;
      *(int *)(local_548.Data + lVar15 * 0x28 + 0x20) = local_3f0.WriteToName.Data.ArrayNum;
      *(int *)(local_548.Data + lVar15 * 0x28 + 0x24) = local_3f0.WriteToName.Data.ArrayMax;
      local_3f0.WriteToName.Data.ArrayNum = 0;
      local_3f0.WriteToName.Data.ArrayMax = 0;
      local_3f0.WriteToName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3f0.DataFunctionName.Data.ArrayNum = 0;
      local_3f0.DataFunctionName.Data.ArrayMax = 0;
      local_3f0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_540 = uVar23;
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      DestructItems<FShaderFunctionDefinition,int>(local_400,(int)local_3f8);
      if (local_400 != (FShaderFunctionDefinition *)0x0) {
        FMemory::Free(local_400);
      }
    }
    DestructItems<FShaderFunctionDefinition,int>(local_4b8,(int)local_4b0);
    if (local_4b8 != (FShaderFunctionDefinition *)0x0) {
      FMemory::Free(local_4b8);
    }
    pUVar22 = (UOptimusNode *)(ulonglong)local_540;
    pFVar32 = pFVar32 + 0x10;
  } while( true );
}

// StaticRegisterNativesUOptimusNode_ComputeKernelBase @ 14e225c50

void __cdecl
UOptimusNode_ComputeKernelBase::StaticRegisterNativesUOptimusNode_ComputeKernelBase(void)

{
  return;
}

// ValidateForCompile @ 14e22f4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
UOptimusNode_ComputeKernelBase::ValidateForCompile
          (UOptimusNode_ComputeKernelBase *this,TOptional<FText> *__return_storage_ptr__,
          FOptimusPinTraversalContext *param_1)

{
  undefined1 *this_00;
  int iVar1;
  UOptimusNodePin *pUVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  FString *pFVar9;
  FText *pFVar10;
  TOptional<FText> *pTVar11;
  UOptimusNode *pUVar12;
  UClass *pUVar13;
  FName FVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  ForElementType<FSetElementId> _Src;
  UOptimusNodeGraph *this_01;
  longlong lVar17;
  ForElementType<FSetElementId> _Dst;
  undefined8 *puVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  undefined8 *puVar22;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  *this_02;
  bool bVar23;
  undefined1 auStackY_2d8 [32];
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  FText *local_298;
  FText local_290;
  FText local_280;
  FScriptContainerElement *local_270;
  undefined8 *local_268;
  TSharedPtr<FOptimusDataType_const_,1> local_260;
  undefined8 *local_250;
  TOptional<FText>_u_0 local_248 [3];
  FString local_218;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FTextFormat local_158;
  FText local_148;
  FTextFormat local_138;
  FText local_128;
  FTextFormat local_118;
  FText local_108;
  FTextFormat local_f8;
  undefined1 local_e8 [16];
  void *local_d8;
  undefined1 local_c8 [52];
  int local_94;
  undefined1 local_90 [8];
  ForElementType<FSetElementId> local_88;
  uint local_80;
  FOptimusPinTraversalContext local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_298 = (FText *)__return_storage_ptr__;
  piVar8 = (int *)(**(code **)(*(longlong *)&this->field_0x108 + 0x18))(&this->field_0x108,local_e8)
  ;
  if (*piVar8 == 0) {
    bVar23 = *(longlong *)(piVar8 + 1) == 0;
  }
  else {
    pFVar9 = ::FString::TrimStartAndEnd((FString *)(piVar8 + 4),&local_218);
    iVar1 = (pFVar9->Data).ArrayNum;
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar23 = iVar1 < 2;
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if (bVar23) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_208,L"OptimusKernelBase",L"NoExecutionDomain",
                         L"Kernel has undefined Execution Domain, please use the Details panel to select a valid domain"
                        );
    FText::FText((FText *)__return_storage_ptr__,pFVar10);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar23)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TOptional<FText> *)(*pcVar4)();
      return pTVar11;
    }
    if (local_208.TextData.Reference == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
    return __return_storage_ptr__;
  }
  FOptimusPinTraversalContext::FOptimusPinTraversalContext(&local_78,param_1);
  puVar18 = *(undefined8 **)&this->field_0x50;
  iVar1 = *(int *)&this->field_0x58;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  iVar7 = 0;
  local_268 = puVar18;
  if (iVar1 < 0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar23) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TOptional<FText> *)(*pcVar4)();
      return pTVar11;
    }
    iVar7 = (int)local_2a0;
  }
  puVar22 = puVar18 + iVar1;
  local_250 = puVar22;
  if (puVar18 != puVar22) {
    do {
      pUVar2 = (UOptimusNodePin *)*puVar18;
      if (pUVar2->bIsGroupingPin != false) {
        if (iVar7 == local_2a0._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&local_2a8,(int *)((longlong)&local_2a0 + 4));
        }
        local_2a0 = CONCAT44(local_2a0._4_4_,iVar7 + 1);
        this_02 = (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                   *)(local_2a8.Data + (longlong)iVar7 * 0x50);
        DefaultConstructItems<TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>,int>
                  (this_02,1);
        `UOptimusNode_ComputeKernelBase::ValidateForCompile'::__l2::<lambda_2>::operator()
                  (&local_78,(TOptional<FText> *)&local_248[0].TypedValue,this_02,pUVar2);
        __return_storage_ptr__ = (TOptional<FText> *)local_298;
        if ((ITextData *)local_248[0]._0_8_ != (ITextData *)0x0) {
          (local_298->TextData).Reference = (ITextData *)0x0;
          local_298->Flags = 0;
          if (((ITextData *)local_248[0]._0_8_ != (ITextData *)0x0) &&
             (FText::FText(local_298,&local_248[0].TypedValue),
             (ITextData *)local_248[0]._0_8_ != (ITextData *)0x0)) {
            (**(code **)((longlong)*(ITextData *)local_248[0]._0_8_ + 0x10))();
          }
          goto LAB_14e22fcc3;
        }
        pFVar21 = (pUVar2->SubPins).AllocatorInstance.Data;
        iVar1 = (pUVar2->SubPins).ArrayNum;
        if ((iVar1 < 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar23)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOptional<FText> *)(*pcVar4)();
          return pTVar11;
        }
        pFVar19 = pFVar21 + (longlong)iVar1 * 8;
        local_270 = pFVar19;
        if (pFVar21 != pFVar19) {
          do {
            pUVar2 = *(UOptimusNodePin **)pFVar21;
            pUVar12 = UOptimusNodePin::GetOwningNode(pUVar2);
            this_01 = (UOptimusNodeGraph *)pUVar12->_padding_;
            if (this_01 == (UOptimusNodeGraph *)0x0) {
LAB_14e22f76c:
              this_01 = (UOptimusNodeGraph *)0x0;
            }
            else {
              pUVar13 = UOptimusNodeGraph::StaticClass();
              iVar1 = (int)pUVar13->_padding_;
              if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
                  != &pUVar13->_padding_)) goto LAB_14e22f76c;
            }
            UOptimusNodeGraph::GetComponentSourceBindingsForPin
                      (this_01,(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                                *)local_c8,pUVar2,&local_78);
            uVar6 = local_80;
            if (local_c8._8_4_ - local_94 < 2) {
              iVar1 = *(int *)&(this_02->Elements).field_0x8;
              iVar7 = *(int *)&(this_02->Elements).field_0x34;
              if (iVar1 == iVar7) {
                if (this_02 !=
                    (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                     *)local_c8) {
                  lVar17 = (longlong)(int)local_80;
                  uVar20 = local_80;
                  if (local_80 < 2) {
                    if ((this_02->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      uVar20 = 0;
                      goto LAB_14e22f8a2;
                    }
                  }
                  else {
LAB_14e22f8a2:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              ((ForAnyElementType *)&(this_02->Hash).SecondaryData,0,uVar20,4);
                  }
                  _Src = (ForElementType<FSetElementId>)local_90;
                  if (local_88 != (ForElementType<FSetElementId>)0x0) {
                    _Src = local_88;
                  }
                  FVar3 = (this_02->Hash).SecondaryData;
                  _Dst = (ForElementType<FSetElementId>)&this_02->Hash;
                  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                    _Dst = FVar3;
                  }
                  if (uVar6 != 0) {
                    memcpy((void *)_Dst,(void *)_Src,lVar17 << 2);
                  }
                  uVar5 = local_c8._8_4_;
                  this_02->HashSize = uVar6;
                  lVar17 = (longlong)(int)local_c8._8_4_;
                  TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::Empty((TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_02,local_c8._8_4_);
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar5,(ForAnyElementType *)this_02,
                             (int *)&(this_02->Elements).field_0x8,
                             (int *)&(this_02->Elements).field_0xc);
                  this_00 = &(this_02->Elements).field_0x10;
                  *(undefined4 *)&(this_02->Elements).field_0x30 = local_c8._48_4_;
                  *(int *)&(this_02->Elements).field_0x34 = local_94;
                  if (this_00 != local_c8 + 0x10) {
                    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                               (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10));
                  }
                  pFVar19 = local_270;
                  if (uVar5 != 0) {
                    memcpy(*(void **)&this_02->Elements,(void *)local_c8._0_8_,lVar17 << 4);
                    pFVar19 = local_270;
                  }
                }
LAB_14e22f96f:
                local_280.TextData.Reference = (ITextData *)0x0;
                local_280.Flags = 0;
              }
              else {
                if ((local_c8._8_4_ == local_94) ||
                   ((iVar1 - iVar7 == local_c8._8_4_ - local_94 &&
                    (bVar23 = TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                              ::Includes(this_02,(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                                                  *)local_c8), bVar23)))) goto LAB_14e22f96f;
                FVar14 = UOptimusNodePin::GetUniqueName(pUVar2);
                pFVar10 = FText::FromName(&local_148,(FName *)FVar14);
                pFVar15 = FText::AsLocalizable_Advanced_LocText
                                    (&local_1c8,L"OptimusKernelBase",L"IncompatibleBindingsPinGroup"
                                     ,
                                     L"Component binding for pin \'{0}\' is different from the component bindings of the other pins in its group"
                                    );
                pFVar16 = FTextFormat::FTextFormat(&local_138,pFVar15,Default);
                pFVar10 = FText::Format<FText>(&local_1d8,pFVar16,pFVar10);
                FText::FText(&local_280,pFVar10);
                if ((local_280.TextData.Reference == (ITextData *)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar23)) {
                  pcVar4 = (code *)swi(3);
                  pTVar11 = (TOptional<FText> *)(*pcVar4)();
                  return pTVar11;
                }
                if (local_1d8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
                }
                if (local_1c8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
                }
              }
            }
            else {
              FVar14 = UOptimusNodePin::GetUniqueName(pUVar2);
              pFVar10 = FText::FromName(&local_168,(FName *)FVar14);
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_1e8,L"OptimusKernelBase",L"MultipleBindingsOnPin",
                                   L"Multiple component bindings arriving into pin \'{0}\'");
              pFVar16 = FTextFormat::FTextFormat(&local_158,pFVar15,Default);
              pFVar10 = FText::Format<FText>(&local_1f8,pFVar16,pFVar10);
              FText::FText(&local_280,pFVar10);
              if ((local_280.TextData.Reference == (ITextData *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar23)) {
                pcVar4 = (code *)swi(3);
                pTVar11 = (TOptional<FText> *)(*pcVar4)();
                return pTVar11;
              }
              if (local_1f8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
              }
              if (local_1e8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
              }
            }
            local_80 = 0;
            if (local_88 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_88);
            }
            TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_c8);
            __return_storage_ptr__ = (TOptional<FText> *)local_298;
            if (local_280.TextData.Reference != (ITextData *)0x0) {
              (local_298->TextData).Reference = (ITextData *)0x0;
              local_298->Flags = 0;
              if ((local_280.TextData.Reference != (ITextData *)0x0) &&
                 (FText::FText(local_298,&local_280),
                 local_280.TextData.Reference != (ITextData *)0x0)) {
                (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
              }
              goto LAB_14e22fcc3;
            }
            FOptimusDataTypeRef::Resolve(&pUVar2->DataType,&local_260);
            if (local_260.Object == (FOptimusDataType *)0x0) {
              FVar14 = UOptimusNodePin::GetUniqueName(pUVar2);
              pFVar10 = FText::FromName(&local_128,(FName *)FVar14);
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_1a8,L"OptimusKernelBase",L"InvalidPinType",
                                   L"Invalid data type on pin \'{0}\'");
              pFVar16 = FTextFormat::FTextFormat(&local_118,pFVar15,Default);
              pFVar10 = FText::Format<FText>(&local_1b8,pFVar16,pFVar10);
              FText::FText(&local_290,pFVar10);
              if ((local_290.TextData.Reference == (ITextData *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar23)) {
                pcVar4 = (code *)swi(3);
                pTVar11 = (TOptional<FText> *)(*pcVar4)();
                return pTVar11;
              }
              if (local_1b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
              }
              if (local_1a8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
              }
            }
            else if (((local_260.Object)->ShaderValueType).ValueTypePtr == (FShaderValueType *)0x0)
            {
              FVar14 = UOptimusNodePin::GetUniqueName(pUVar2);
              pFVar10 = FText::FromName(&local_108,(FName *)FVar14);
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_188,L"OptimusKernelBase",L"InvalidPinValueType",
                                   L"Invalid shader value type on pin \'{0}\'");
              pFVar16 = FTextFormat::FTextFormat(&local_f8,pFVar15,Default);
              pFVar10 = FText::Format<FText>(&local_198,pFVar16,pFVar10);
              FText::FText(&local_290,pFVar10);
              if ((local_290.TextData.Reference == (ITextData *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar23)) {
                pcVar4 = (code *)swi(3);
                pTVar11 = (TOptional<FText> *)(*pcVar4)();
                return pTVar11;
              }
              if (local_198.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
              }
              if (local_188.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
              }
            }
            else {
              local_290.TextData.Reference = (ITextData *)0x0;
              local_290.Flags = 0;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_260.SharedReferenceCount.ReferenceController);
            __return_storage_ptr__ = (TOptional<FText> *)local_298;
            if (local_290.TextData.Reference != (ITextData *)0x0) {
              (local_298->TextData).Reference = (ITextData *)0x0;
              local_298->Flags = 0;
              if ((local_290.TextData.Reference != (ITextData *)0x0) &&
                 (FText::FText(local_298,&local_290),
                 local_290.TextData.Reference != (ITextData *)0x0)) {
                (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
              }
              goto LAB_14e22fcc3;
            }
            pFVar21 = pFVar21 + 8;
            puVar18 = local_268;
            puVar22 = local_250;
          } while (pFVar21 != pFVar19);
        }
        iVar7 = (int)local_2a0;
      }
      puVar18 = puVar18 + 1;
      __return_storage_ptr__ = (TOptional<FText> *)local_298;
      local_268 = puVar18;
    } while (puVar18 != puVar22);
  }
  if (iVar7 < 1) {
    bVar23 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2177961143954309464>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelBase.cpp"
                        ,0x158,"BindingsPerGroup.Num() >= 1");
    if (bVar23) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TOptional<FText> *)(*pcVar4)();
      return pTVar11;
    }
  }
  else {
    if ((iVar7 < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TOptional<FText> *)(*pcVar4)();
      return pTVar11;
    }
    if (*(int *)(local_2a8.Data + 8) == *(int *)(local_2a8.Data + 0x34)) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_178,L"OptimusKernelBase",L"NoPrimaryBinding",
                           L"Primary Group has no Component Binding");
      FText::FText((FText *)__return_storage_ptr__,pFVar10);
      if (((((FText *)__return_storage_ptr__)->TextData).Reference == (ITextData *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar23)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TOptional<FText> *)(*pcVar4)();
        return pTVar11;
      }
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      goto LAB_14e22fcc3;
    }
  }
  (((FText *)__return_storage_ptr__)->TextData).Reference = (ITextData *)0x0;
  ((FText *)__return_storage_ptr__)->Flags = 0;
LAB_14e22fcc3:
  DestructItems<TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>,int>
            ((TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
              *)local_2a8.Data,(int)local_2a0);
  if ((TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
       *)local_2a8.Data !=
      (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
       *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  if (local_78.ReferenceNesting.AllocatorInstance.SecondaryData !=
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)local_78.ReferenceNesting.AllocatorInstance.SecondaryData);
  }
  return (TOptional<FText> *)(FText *)__return_storage_ptr__;
}

// _getUObject @ 14e238e20

UObject * __thiscall
UOptimusNode_ComputeKernelBase::_getUObject(UOptimusNode_ComputeKernelBase *this)

{
  return (UObject *)&this[-1].field_0x8;
}

