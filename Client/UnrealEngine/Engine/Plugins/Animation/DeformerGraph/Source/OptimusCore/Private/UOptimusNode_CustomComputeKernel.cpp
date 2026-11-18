// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 49

// StaticClass @ 14e111900

UClass * __cdecl UOptimusNode_CustomComputeKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_CustomComputeKernel",
               &Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.InnerSingleton,
               StaticRegisterNativesUOptimusNode_CustomComputeKernel,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_CustomComputeKernel>,
               InternalVTableHelperCtorCaller<UOptimusNode_CustomComputeKernel>,local_res8,
               UOptimusNode_ComputeKernelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.InnerSingleton;
}

// operator()<FOptimusParameterBindingArray> @ 14e120dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e1212ea) */

void __thiscall
`UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_1>::
operator()<FOptimusParameterBindingArray>(void *this,FOptimusParameterBindingArray *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FOptimusDataType *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar15;
  FOptimusDataTypeRegistry *pFVar16;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  undefined8 *puVar20;
  FString *pFVar21;
  ulonglong uVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  FScriptContainerElement *pFVar25;
  FShaderValueTypeHandle *pFVar26;
  ForAnyElementType FVar27;
  FOptimusDataTypeRef *this_01;
  undefined1 auStack_1e8 [32];
  FShaderValueTypeHandle *local_1c8;
  FScriptContainerElement *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [6];
  TArray<FShaderValueTypeHandle,TSizedDefaultAllocator<32>_> local_190;
  uint local_180;
  FString local_178;
  TKeyInitializer<FName_const_&> local_168;
  FOptimusDataTypeRef *local_160;
  FName local_158;
  longlong local_150;
  FString local_148;
  FString local_138;
  FScriptContainerElement *local_128;
  FOptimusParameterBindingArray *local_120;
  undefined8 local_118;
  TReferenceControllerBase<1> *local_110;
  undefined8 local_108;
  TReferenceControllerBase<1> *local_100;
  TSharedPtr<FOptimusDataType_const_,1> local_f8;
  TSharedPtr<FOptimusDataType_const_,1> local_e8;
  TSharedPtr<FOptimusDataType_const_,1> local_d8;
  TSharedPtr<FOptimusDataType_const_,1> local_c8;
  TSharedPtr<FOptimusDataType_const_,1> local_b8;
  void *local_a8 [2];
  FString local_98;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> local_88
  ;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_128 = (param_1->InnerArray).AllocatorInstance.Data;
  bVar10 = false;
  bVar9 = false;
  local_180 = (param_1->InnerArray).ArrayNum;
  uVar22 = (ulonglong)(int)local_180;
  this_01 = (FOptimusDataTypeRef *)(local_128 + 8);
  local_128 = local_128 + uVar22 * 0x80;
  local_120 = param_1;
  do {
    pFVar2 = local_128;
    local_160 = this_01;
    if ((local_120->InnerArray).ArrayNum != (int)uVar22) {
      local_198 = 0;
      `TCheckedPointerIterator<FOptimusParameterBinding_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_198);
    }
    if ((FScriptContainerElement *)&this_01[-1].TypeObject.SoftObjectPtr.field_0x20 == pFVar2) {
      return;
    }
    pTVar15 = FOptimusDataTypeRef::Resolve(this_01,&local_f8);
    pFVar4 = pTVar15->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    if (pFVar4 != (FOptimusDataType *)0x0) {
      pTVar15 = FOptimusDataTypeRef::Resolve(this_01,&local_e8);
      pFVar4 = pTVar15->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      if ((pFVar4->ShaderValueType).ValueTypePtr != (FShaderValueType *)0x0) {
        pTVar15 = FOptimusDataTypeRef::Resolve(this_01,&local_d8);
        pFVar4 = pTVar15->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        if (((pFVar4->ShaderValueType).ValueTypePtr)->Type == Struct) {
          pTVar15 = FOptimusDataTypeRef::Resolve(this_01,&local_c8);
          pFVar4 = pTVar15->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.SharedReferenceCount.ReferenceController);
          FShaderValueType::GetMemberStructTypes((pFVar4->ShaderValueType).ValueTypePtr,&local_190);
          pTVar15 = FOptimusDataTypeRef::Resolve(this_01,&local_b8);
          pFVar4 = pTVar15->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8.SharedReferenceCount.ReferenceController);
          pFVar26 = &pFVar4->ShaderValueType;
          if ((local_190.AllocatorInstance.Data <= pFVar26) &&
             (pFVar26 < local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 8)) {
            local_1b0 = (longlong)local_190.ArrayNum;
            local_1a8 = 8;
            local_1c0 = local_190.AllocatorInstance.Data;
            local_1c8 = pFVar26;
            local_1b8 = (longlong)local_190.ArrayMax;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (local_190.ArrayNum == local_190.ArrayMax) {
            local_190.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_190.AllocatorInstance,&local_190.ArrayMax);
          }
          iVar14 = local_190.ArrayNum + 1;
          *(FShaderValueType **)
           (local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 8) =
               pFVar26->ValueTypePtr;
          local_88.Elements._0_8_ = 0;
          local_88.Elements._32_8_ = 0;
          local_88.Elements._40_4_ = 0;
          local_88.Elements._52_4_ = 0;
          local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_88.HashSize = 0;
          pFVar2 = local_190.AllocatorInstance.Data + (longlong)iVar14 * 8;
          local_88.Elements._8_8_ = 0;
          local_88.Elements._44_4_ = 0x80;
          local_88.Elements._48_4_ = 0xffffffff;
          FVar27.Data = local_190.AllocatorInstance.Data;
          local_190.ArrayNum = iVar14;
          while( true ) {
            if (local_190.ArrayNum != iVar14) {
              local_197 = 0;
              `TCheckedPointerIterator<FShaderValueTypeHandle,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_197);
            }
            iVar3 = local_190.ArrayNum;
            if (FVar27.Data == pFVar2) break;
            pFVar16 = FOptimusDataTypeRegistry::Get();
            pTVar17 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                              *)&pFVar16->RegisteredTypes,*(FName *)(*(longlong *)FVar27.Data + 4));
            if ((pTVar17 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
               (&pTVar17->field_0x10 == (undefined1 *)0x0)) {
              bVar9 = true;
              puVar20 = &local_118;
              lVar23 = 0;
              local_110 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              lVar23 = *(longlong *)&pTVar17->field_0x10;
              bVar10 = true;
              local_100 = *(TReferenceControllerBase<1> **)&pTVar17->field_0x18;
              if (local_100 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_100->SharedReferenceCount =
                     (atomic<int>)((int)local_100->SharedReferenceCount + 1);
                UNLOCK();
              }
              puVar20 = &local_108;
            }
            pTVar5 = (TReferenceControllerBase<1> *)puVar20[1];
            puVar20[1] = 0;
            *puVar20 = 0;
            if (bVar9) {
              bVar9 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_110);
            }
            if (bVar10) {
              bVar10 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_100);
            }
            if ((lVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar23 + 0x2c));
            if (pUVar18 != (UObject *)0x0) {
              pUVar19 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
              iVar3 = (int)pUVar19->_padding_;
              if ((iVar3 <= *(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar3 * 8)
                  == &pUVar19->_padding_)) {
                Z_Construct_UClass_UUserDefinedStruct_NoRegister();
                puVar20 = (undefined8 *)
                          (**(code **)(*(longlong *)pUVar18 + 0x388))(pUVar18,local_a8,0);
                if (*(int *)(puVar20 + 1) == 0) {
                  pwVar24 = L"";
                }
                else {
                  pwVar24 = (wchar_t *)*puVar20;
                }
                ::FName::FName((FName *)((longlong)&local_138.Data.AllocatorInstance.Data + 4),
                               pwVar24);
                if (local_a8[0] != (void *)0x0) {
                  FMemory::Free(local_a8[0]);
                }
                uVar11 = local_138.Data._4_8_;
                local_150 = *(longlong *)FVar27.Data + 4;
                TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                ::Emplace<TKeyInitializer<FName_const_&>_>(&local_88,&local_168,(bool *)&local_150);
                *(undefined8 *)(local_88.Elements._0_8_ + 8 + (longlong)(int)local_168.Key * 0x18) =
                     uVar11;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            FVar27.Data = FVar27.Data + 8;
          }
          pFVar2 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 8;
          FVar27.Data = local_190.AllocatorInstance.Data;
          while( true ) {
            if (local_190.ArrayNum != iVar3) {
              local_196[0] = 0;
              `TCheckedPointerIterator<FShaderValueTypeHandle,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_196);
            }
            if (FVar27.Data == pFVar2) break;
            local_158.ComparisonIndex.Value = 0;
            local_158.Number = 0;
            FShaderValueType::ToString(*(FShaderValueType **)FVar27.Data,&local_148,&local_158);
            this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this;
            iVar14 = local_148.Data.ArrayNum + -1;
            FVar8.Data = local_148.Data.AllocatorInstance.Data;
            if (local_148.Data.ArrayNum == 0) {
              iVar14 = 0;
              FVar8.Data = (FScriptContainerElement *)L"";
            }
            uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,(wchar_t *)FVar8.Data);
            iVar14 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                     FindIndexByHash<FString>(this_00,uVar13,&local_148);
            if (iVar14 == -1) {
              pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
              pFVar21 = FShaderValueType::GetTypeDeclaration
                                  (*(FShaderValueType **)FVar27.Data,&local_98,
                                   (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                    *)&local_88,true);
              ::FString::ConcatFC(&local_178,pFVar21,L";\n\n");
              pFVar25 = pFVar6->Data;
              if ((pFVar25 <= (FScriptContainerElement *)&local_178) &&
                 (lVar23 = (longlong)*(int *)((longlong)&pFVar6[1].Data + 4),
                 (FScriptContainerElement *)&local_178 < pFVar25 + lVar23 * 0x10)) {
                local_1b0 = (longlong)*(int *)&pFVar6[1].Data;
                local_1a8 = 0x10;
                local_1c8 = (FShaderValueTypeHandle *)&local_178;
                local_1c0 = pFVar25;
                local_1b8 = lVar23;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar12) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar14 = *(int *)&pFVar6[1].Data;
              piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
              if (iVar14 == *piVar1) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,pFVar6,piVar1);
                *(int *)&pFVar6[1].Data = iVar14 + 1;
              }
              else {
                *(int *)&pFVar6[1].Data = iVar14 + 1;
              }
              pFVar25 = pFVar6->Data + (longlong)iVar14 * 0x10;
              *(undefined8 *)pFVar25 = 0;
              *(FScriptContainerElement **)pFVar25 = local_178.Data.AllocatorInstance.Data;
              *(int *)(pFVar25 + 8) = local_178.Data.ArrayNum;
              *(int *)(pFVar25 + 0xc) = local_178.Data.ArrayMax;
              local_178.Data.ArrayNum = 0;
              local_178.Data.ArrayMax = 0;
              local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              Emplace<FString_const_&>
                        (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this,
                         &local_138,(bool *)&local_148);
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            FVar27.Data = FVar27.Data + 8;
          }
          local_88.HashSize = 0;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_88.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_88.Elements);
          this_01 = local_160;
          if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.AllocatorInstance.Data);
            this_01 = local_160;
          }
        }
      }
    }
    this_01 = (FOptimusDataTypeRef *)&this_01[2].TypeObject.SoftObjectPtr.field_0x18;
    uVar22 = (ulonglong)local_180;
  } while( true );
}

// UOptimusNode_CustomComputeKernel @ 14e15b680

UOptimusNode_CustomComputeKernel * __thiscall
UOptimusNode_CustomComputeKernel::UOptimusNode_CustomComputeKernel
          (UOptimusNode_CustomComputeKernel *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComputeKernelProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusShaderTextProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusParameterBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeAdderPinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusExecutionDomainProvider__;
  this->Category = UOptimusNode::CategoryName::Deformers;
  (this->KernelName).Name = (FName)0x0;
  (this->ExecutionDomain).Type = DomainName;
  (this->ExecutionDomain).Name.ComparisonIndex = 0;
  (this->ExecutionDomain).Name.Number = 0;
  (this->ExecutionDomain).Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDomain).Expression.Data.ArrayNum = 0;
  (this->ExecutionDomain).Expression.Data.ArrayMax = 0;
  (this->Parameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters_DEPRECATED).ArrayNum = 0;
  (this->Parameters_DEPRECATED).ArrayMax = 0;
  (this->InputBindings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindings_DEPRECATED).ArrayNum = 0;
  (this->InputBindings_DEPRECATED).ArrayMax = 0;
  (this->OutputBindings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindings_DEPRECATED).ArrayNum = 0;
  (this->OutputBindings_DEPRECATED).ArrayMax = 0;
  (this->InputBindingArray).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindingArray).InnerArray.ArrayNum = 0;
  (this->InputBindingArray).InnerArray.ArrayMax = 0;
  (this->OutputBindingArray).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindingArray).InnerArray.ArrayNum = 0;
  (this->OutputBindingArray).InnerArray.ArrayMax = 0;
  (this->SecondaryInputBindingGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecondaryInputBindingGroups).ArrayNum = 0;
  (this->SecondaryInputBindingGroups).ArrayMax = 0;
  (this->AdditionalSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSources).ArrayNum = 0;
  (this->AdditionalSources).ArrayMax = 0;
  (this->ShaderSource).Declarations.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderSource).Declarations.Data.ArrayNum = 0;
  (this->ShaderSource).Declarations.Data.ArrayMax = 0;
  (this->ShaderSource).ShaderText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderSource).ShaderText.Data.ArrayNum = 0;
  (this->ShaderSource).ShaderText.Data.ArrayMax = 0;
  (this->GroupSize).field0_0x0._s_0.X = 0x40;
  (this->GroupSize).field0_0x0._s_0.Y = 1;
  (this->GroupSize).field0_0x0._s_0.Z = 1;
  return this;
}

// UOptimusNode_CustomComputeKernel @ 14e15b7c0

UOptimusNode_CustomComputeKernel * __thiscall
UOptimusNode_CustomComputeKernel::UOptimusNode_CustomComputeKernel
          (UOptimusNode_CustomComputeKernel *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComputeKernelProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusShaderTextProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusParameterBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeAdderPinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusExecutionDomainProvider__;
  this->Category = UOptimusNode::CategoryName::Deformers;
  (this->KernelName).Name = (FName)0x0;
  (this->ExecutionDomain).Type = DomainName;
  (this->ExecutionDomain).Name.ComparisonIndex = 0;
  (this->ExecutionDomain).Name.Number = 0;
  (this->ExecutionDomain).Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDomain).Expression.Data.ArrayNum = 0;
  (this->ExecutionDomain).Expression.Data.ArrayMax = 0;
  (this->Parameters_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters_DEPRECATED).ArrayNum = 0;
  (this->Parameters_DEPRECATED).ArrayMax = 0;
  (this->InputBindings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindings_DEPRECATED).ArrayNum = 0;
  (this->InputBindings_DEPRECATED).ArrayMax = 0;
  (this->OutputBindings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindings_DEPRECATED).ArrayNum = 0;
  (this->OutputBindings_DEPRECATED).ArrayMax = 0;
  (this->InputBindingArray).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindingArray).InnerArray.ArrayNum = 0;
  (this->InputBindingArray).InnerArray.ArrayMax = 0;
  (this->OutputBindingArray).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindingArray).InnerArray.ArrayNum = 0;
  (this->OutputBindingArray).InnerArray.ArrayMax = 0;
  (this->SecondaryInputBindingGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecondaryInputBindingGroups).ArrayNum = 0;
  (this->SecondaryInputBindingGroups).ArrayMax = 0;
  (this->AdditionalSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSources).ArrayNum = 0;
  (this->AdditionalSources).ArrayMax = 0;
  (this->ShaderSource).Declarations.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderSource).Declarations.Data.ArrayNum = 0;
  (this->ShaderSource).Declarations.Data.ArrayMax = 0;
  (this->ShaderSource).ShaderText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderSource).ShaderText.Data.ArrayNum = 0;
  (this->ShaderSource).ShaderText.Data.ArrayMax = 0;
  (this->GroupSize).field0_0x0._s_0.X = 0x40;
  (this->GroupSize).field0_0x0._s_0.Y = 1;
  (this->GroupSize).field0_0x0._s_0.Z = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  UpdatePreamble(this);
  (this->KernelName).Name = DefaultKernelName;
  return this;
}

// ~UOptimusNode_CustomComputeKernel @ 14e1634f0

void __thiscall
UOptimusNode_CustomComputeKernel::~UOptimusNode_CustomComputeKernel
          (UOptimusNode_CustomComputeKernel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComputeKernelProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusShaderTextProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusParameterBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeAdderPinProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusExecutionDomainProvider__;
  pFVar1 = (this->ShaderSource).ShaderText.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderSource).Declarations.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusSecondaryInputBindingsGroup,int>
            ((FOptimusSecondaryInputBindingsGroup *)
             (this->SecondaryInputBindingGroups).AllocatorInstance.Data,
             (this->SecondaryInputBindingGroups).ArrayNum);
  pFVar1 = (this->SecondaryInputBindingGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)
             (this->OutputBindingArray).InnerArray.AllocatorInstance.Data,
             (this->OutputBindingArray).InnerArray.ArrayNum);
  pFVar1 = (this->OutputBindingArray).InnerArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->InputBindingArray).InnerArray.AllocatorInstance.Data
             ,(this->InputBindingArray).InnerArray.ArrayNum);
  pFVar1 = (this->InputBindingArray).InnerArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->OutputBindings_DEPRECATED).AllocatorInstance.Data,
             (this->OutputBindings_DEPRECATED).ArrayNum);
  pFVar1 = (this->OutputBindings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->InputBindings_DEPRECATED).AllocatorInstance.Data,
             (this->InputBindings_DEPRECATED).ArrayNum);
  pFVar1 = (this->InputBindings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimus_ShaderBinding,int>
            ((FOptimus_ShaderBinding *)(this->Parameters_DEPRECATED).AllocatorInstance.Data,
             (this->Parameters_DEPRECATED).ArrayNum);
  pFVar1 = (this->Parameters_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecutionDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusExecutionDomainProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodeAdderPinProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusParameterBindingProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusShaderTextProvider__6B_;
  this->_padding_ = (longlong)&UOptimusNode_ComputeKernelBase::_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&___7IOptimusComputeKernelProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// operator() @ 14e169830

bool __thiscall
`UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_2>::operator()
          (void *this,FOptimusParameterBinding *param_1,FOptimusParameterBinding *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar6 = (param_2->DataDomain).DimensionNames.ArrayNum;
  uVar7 = 0;
  if ((param_1->DataDomain).DimensionNames.ArrayNum < iVar6) {
    iVar6 = (param_1->DataDomain).DimensionNames.ArrayNum;
  }
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (param_2->DataDomain).DimensionNames.ArrayNum) {
        uVar5 = uVar9;
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
      pFVar1 = (param_2->DataDomain).DimensionNames.AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->DataDomain).DimensionNames.ArrayNum) {
        uVar5 = uVar9;
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
      iVar6 = (param_2->DataDomain).DimensionNames.ArrayNum;
      if (*(longlong *)((param_1->DataDomain).DimensionNames.AllocatorInstance.Data + lVar8 * 8) !=
          *(longlong *)(pFVar1 + lVar8 * 8)) {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (param_2->DataDomain).DimensionNames.AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar7 < (param_1->DataDomain).DimensionNames.ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = ::FName::Compare((FName *)((param_1->DataDomain).DimensionNames.AllocatorInstance.
                                           Data + (longlong)(int)uVar7 * 8),
                                 (FName *)(pFVar1 + (longlong)(int)uVar7 * 8));
        return SUB41((uint)iVar6 >> 0x1f,0);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
      if ((param_1->DataDomain).DimensionNames.ArrayNum < iVar6) {
        iVar6 = (param_1->DataDomain).DimensionNames.ArrayNum;
      }
    } while ((int)uVar7 < iVar6);
  }
  return false;
}

// operator() @ 14e16b7b0

/* WARNING: Removing unreachable block (ram,0x00014e16b981) */

void __thiscall
`UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_3>::operator()
          (void *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  int iVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1->ArrayNum != 0) {
    this_00 = *(TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                **)((longlong)this + 8);
    uVar7 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>(param_1);
    iVar8 = TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>(this_00,uVar7,param_1);
    if (iVar8 == -1) {
      pFVar11 = (FName *)(param_1->AllocatorInstance).Data;
      iVar8 = param_1->ArrayNum;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar2 = pFVar11 + iVar8;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      while( true ) {
        if (param_1->ArrayNum != iVar8) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar11 == pFVar2) break;
        local_res20 = *pFVar11;
        pFVar9 = ::FName::ToString(&local_res20,&local_48);
        iVar3 = (pFVar9->Data).ArrayNum;
        iVar12 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar12 = 0;
        }
        ::FString::AppendChars(&local_58,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar12);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar11 = pFVar11 + 1;
      }
      pFVar4 = *(ForAnyElementType **)this;
      ::FString::PrintfImpl(&local_68,L"uint Num%s();");
      if (((pFVar4->Data <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x10)) &&
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
      iVar8 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar8 + 1;
      pFVar10 = pFVar4->Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(FScriptContainerElement **)pFVar10 = local_68.Data.AllocatorInstance.Data;
      *(int *)(pFVar10 + 8) = local_68.Data.ArrayNum;
      *(int *)(pFVar10 + 0xc) = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_const_&>
                (*(TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   **)((longlong)this + 8),(TArray<FName,TSizedDefaultAllocator<32>_> *)local_res18,
                 (bool *)param_1);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e16c0f0

/* WARNING: Removing unreachable block (ram,0x00014e16c393) */

void __thiscall
`UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_4>::operator()
          (void *this,TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FOptimusDataType *pFVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FOptimusDataTypeRef *this_00;
  FOptimusParameterBinding *this_01;
  FOptimusParameterBinding *pFVar13;
  undefined1 local_res10 [8];
  FString local_78;
  FString local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  FString local_38;
  
  this_01 = (FOptimusParameterBinding *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar13 = this_01 + iVar2;
  this_00 = &this_01->DataType;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FOptimusParameterBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (this_01 == pFVar13) {
        return;
      }
      __l2::<lambda_3>::operator()
                (*(void **)this,(TArray<FName,TSizedDefaultAllocator<32>_> *)&this_00[1].TypeObject)
      ;
      pTVar10 = FOptimusDataTypeRef::Resolve(this_00,&local_58);
      pFVar3 = pTVar10->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (pFVar3 == (FOptimusDataType *)0x0) break;
      pTVar10 = FOptimusDataTypeRef::Resolve(this_00,&local_48);
      pFVar3 = pTVar10->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if ((pFVar3->ShaderValueType).ValueTypePtr == (FShaderValueType *)0x0) break;
      pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar11 = (FScriptContainerElement *)
                UOptimusNode_CustomComputeKernel::GetDeclarationForBinding(&local_38,this_01,true);
      if (((pFVar4->Data <= pFVar11) &&
          (pFVar11 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      pFVar12 = pFVar4->Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar12 = 0;
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar11;
      *(undefined8 *)pFVar11 = 0;
      *(undefined4 *)(pFVar12 + 8) = *(undefined4 *)(pFVar11 + 8);
      *(undefined4 *)(pFVar12 + 0xc) = *(undefined4 *)(pFVar11 + 0xc);
      *(undefined8 *)(pFVar11 + 8) = 0;
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
      uVar7 = local_78.Data._8_8_;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        FVar6.Data = local_78.Data.AllocatorInstance.Data;
        uVar7 = local_78.Data._8_8_;
      }
LAB_14e16c287:
      local_78.Data._8_8_ = uVar7;
      local_78.Data.AllocatorInstance.Data = FVar6.Data;
      this_01 = this_01 + 1;
      this_00 = (FOptimusDataTypeRef *)&this_00[2].TypeObject.SoftObjectPtr.field_0x18;
    }
    pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
    ::FName::ToString((FName *)this_01,&local_68);
    ::FString::PrintfImpl(&local_78,L"// Error: Binding \"%s\" is not supported");
    if (((pFVar4->Data <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar9 + 1;
    pFVar11 = pFVar4->Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    uVar7 = local_78.Data._8_8_;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14e16c287;
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    this_01 = this_01 + 1;
    this_00 = (FOptimusDataTypeRef *)&this_00[2].TypeObject.SoftObjectPtr.field_0x18;
  } while( true );
}

// ConstructNode @ 14e193050

void __thiscall
UOptimusNode_CustomComputeKernel::ConstructNode(UOptimusNode_CustomComputeKernel *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FName *pFVar5;
  FText *pFVar6;
  FName FVar7;
  UOptimusNode *pUVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  UOptimusNodeGraph *pUVar11;
  undefined8 *puVar12;
  FName local_res8;
  FName *local_res10;
  FText local_78;
  undefined1 local_68 [48];
  
  local_res8 = (this->KernelName).Name;
  pFVar6 = FText::FromName(&local_78,&local_res8);
  UOptimusNode::SetDisplayName((UOptimusNode *)this,pFVar6);
  FVar7 = (FName)NewObject<UOptimusNodePin>
                           ((UObject *)this,PrimaryGroupPinName,RF_NoFlags,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  *(undefined2 *)((longlong)FVar7 + 0x28) = 0x101;
  lVar4 = this->_padding_;
  local_res8 = FVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)FVar7);
  }
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TObjectPtr<UOptimusNodePin> *)&local_res8,(int)lVar4);
  if ((*(char *)((longlong)&this->_padding_ + 2) != '\0') || ((char)this->_padding_ == '\0'))
  goto LAB_14e193148;
  pUVar8 = UOptimusNodePin::GetOwningNode((UOptimusNodePin *)FVar7);
  pUVar11 = (UOptimusNodeGraph *)pUVar8->_padding_;
  if (pUVar11 == (UOptimusNodeGraph *)0x0) {
LAB_14e193135:
    pUVar11 = (UOptimusNodeGraph *)0x0;
  }
  else {
    pUVar9 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar9->_padding_)) goto LAB_14e193135;
  }
  UOptimusNodeGraph::Notify(pUVar11,PinAdded,(UObject *)FVar7);
LAB_14e193148:
  pFVar3 = (this->InputBindingArray).InnerArray.AllocatorInstance.Data;
  iVar1 = (this->InputBindingArray).InnerArray.ArrayNum;
  pFVar10 = pFVar3 + 0x10;
  while( true ) {
    if ((this->InputBindingArray).InnerArray.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if ((FName *)(pFVar10 + -0x10) == (FName *)(pFVar3 + (longlong)iVar1 * 0x80)) break;
    local_68._0_8_ = *(FName *)(pFVar10 + -8);
    local_68._8_8_ = *(undefined8 *)pFVar10;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_68 + 0x10),(FSoftObjectPath *)(pFVar10 + 8));
    UOptimusNode::AddPinDirect
              ((UOptimusNode *)this,*(FName *)(pFVar10 + -0x10),Input,
               (FOptimusDataDomain *)(pFVar10 + 0x28),(FOptimusDataTypeRef *)local_68,
               (UOptimusNodePin *)0x0,(UOptimusNodePin *)FVar7);
    pFVar10 = pFVar10 + 0x80;
  }
  pFVar3 = (this->OutputBindingArray).InnerArray.AllocatorInstance.Data;
  iVar1 = (this->OutputBindingArray).InnerArray.ArrayNum;
  pFVar10 = pFVar3 + 0x10;
  while( true ) {
    if ((this->OutputBindingArray).InnerArray.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if ((FName *)(pFVar10 + -0x10) == (FName *)(pFVar3 + (longlong)iVar1 * 0x80)) break;
    local_68._0_8_ = *(FName *)(pFVar10 + -8);
    local_68._8_8_ = *(undefined8 *)pFVar10;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_68 + 0x10),(FSoftObjectPath *)(pFVar10 + 8));
    UOptimusNode::AddPinDirect
              ((UOptimusNode *)this,*(FName *)(pFVar10 + -0x10),Output,
               (FOptimusDataDomain *)(pFVar10 + 0x28),(FOptimusDataTypeRef *)local_68,
               (UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
    pFVar10 = pFVar10 + 0x80;
  }
  iVar1 = (this->SecondaryInputBindingGroups).ArrayNum;
  pFVar3 = (this->SecondaryInputBindingGroups).AllocatorInstance.Data;
  pFVar10 = pFVar3 + 0x10;
  local_res10 = (FName *)(pFVar3 + (longlong)iVar1 * 0x18);
  do {
    pFVar5 = local_res10;
    if ((this->SecondaryInputBindingGroups).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOptimusSecondaryInputBindingsGroup,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if ((FName *)(pFVar10 + -0x10) == pFVar5) {
      return;
    }
    FVar7 = (FName)NewObject<UOptimusNodePin>
                             ((UObject *)this,*(FName *)(pFVar10 + -0x10),RF_NoFlags,(UObject *)0x0,
                              false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    *(undefined2 *)((longlong)FVar7 + 0x28) = 0x101;
    lVar4 = this->_padding_;
    local_res8 = FVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar7);
    }
    TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TObjectPtr<UOptimusNodePin> *)&local_res8,(int)lVar4);
    if ((*(char *)((longlong)&this->_padding_ + 2) == '\0') && ((char)this->_padding_ != '\0')) {
      pUVar8 = UOptimusNodePin::GetOwningNode((UOptimusNodePin *)FVar7);
      pUVar11 = (UOptimusNodeGraph *)pUVar8->_padding_;
      if (pUVar11 == (UOptimusNodeGraph *)0x0) {
LAB_14e193343:
        pUVar11 = (UOptimusNodeGraph *)0x0;
      }
      else {
        pUVar9 = UOptimusNodeGraph::StaticClass();
        iVar2 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar9->_padding_)) goto LAB_14e193343;
      }
      UOptimusNodeGraph::Notify(pUVar11,PinAdded,(UObject *)FVar7);
    }
    lVar4 = *(longlong *)(pFVar10 + -8);
    iVar2 = *(int *)pFVar10;
    puVar12 = (undefined8 *)(lVar4 + 0x10);
    while( true ) {
      if (*(int *)pFVar10 != iVar2) {
        `TCheckedPointerIterator<FOptimusParameterBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if ((FName *)(puVar12 + -2) == (FName *)((longlong)iVar2 * 0x80 + lVar4)) break;
      local_68._0_8_ = *(FName *)(puVar12 + -1);
      local_68._8_8_ = *puVar12;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_68 + 0x10),(FSoftObjectPath *)(puVar12 + 1));
      UOptimusNode::AddPinDirect
                ((UOptimusNode *)this,*(FName *)(puVar12 + -2),Input,
                 (FOptimusDataDomain *)(puVar12 + 5),(FOptimusDataTypeRef *)local_68,
                 (UOptimusNodePin *)0x0,(UOptimusNodePin *)FVar7);
      puVar12 = puVar12 + 0x10;
    }
    pFVar10 = pFVar10 + 0x18;
  } while( true );
}

// DoesOutputPinSupportAtomic @ 14e1a4930

bool __thiscall
UOptimusNode_CustomComputeKernel::DoesOutputPinSupportAtomic
          (UOptimusNode_CustomComputeKernel *this,UOptimusNodePin *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FOptimusDataTypeRegistry *this_00;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar5;
  longlong *plVar6;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  if (param_1->Direction == Output) {
    plVar6 = (longlong *)this->_padding_;
    plVar4 = plVar6 + (longlong)(int)this->_padding_ * 0x10;
    if (plVar6 != plVar4) {
      while (*plVar6 != param_1->_padding_) {
        plVar6 = plVar6 + 0x10;
        if (plVar6 == plVar4) {
          return false;
        }
      }
      if ((char)plVar6[0xf] != '\0') {
        this_00 = FOptimusDataTypeRegistry::Get();
        pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(plVar6 + 1),&local_18);
        bVar2 = FOptimusDataTypeRegistry::DoesTypeSupportAtomic(this_00,pTVar5);
        if (bVar2) {
          return true;
        }
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3516376994675687561>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                       ,0x89,"InPin->GetDirection() == EOptimusNodePinDirection::Output");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// DoesOutputPinSupportRead @ 14e1a4a30

bool __thiscall
UOptimusNode_CustomComputeKernel::DoesOutputPinSupportRead
          (UOptimusNode_CustomComputeKernel *this,UOptimusNodePin *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_1->Direction == Output) {
    plVar4 = (longlong *)this->_padding_;
    plVar5 = plVar4 + (longlong)(int)this->_padding_ * 0x10;
    if (plVar4 != plVar5) {
      do {
        if (*plVar4 == param_1->_padding_) {
          return (bool)*(undefined1 *)((longlong)plVar4 + 0x79);
        }
        plVar4 = plVar4 + 0x10;
      } while (plVar4 != plVar5);
      return false;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3516376994675687578>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                       ,0x9a,"InPin->GetDirection() == EOptimusNodePinDirection::Output");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// DoesSourceSupportUnifiedDispatch @ 14e1a4ac0

bool __cdecl
UOptimusNode_CustomComputeKernel::DoesSourceSupportUnifiedDispatch(UOptimusNodePin *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  
  if (param_1->Direction == Output) {
    pUVar4 = UOptimusNodePin::GetOwningNode(param_1);
    if (pUVar4 != (UOptimusNode *)0x0) {
      pUVar5 = UOptimusNode_DataInterface::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pcVar2 = *(code **)(pUVar4[1]._padding_ + 0x10);
        pUVar6 = GetTransientPackage();
        plVar7 = (longlong *)(*pcVar2)(pUVar4 + 1,pUVar6);
        if (plVar7 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar7 + 0x2c0))(plVar7);
          return cVar3 != '\0';
        }
      }
    }
  }
  return true;
}

// GetAdditionalSources @ 14e1b7d90

TArray<TObjectPtr<UComputeSource>,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_CustomComputeKernel::GetAdditionalSources
          (UOptimusNode_CustomComputeKernel *this,
          TArray<TObjectPtr<UComputeSource>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->AdditionalSources).ArrayNum;
  pFVar2 = (this->AdditionalSources).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TObjectPtr<UComputeSource>,TObjectPtr<UComputeSource>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(TObjectPtr<UComputeSource> *)pFVar2,
             iVar1);
  return __return_storage_ptr__;
}

// GetAvailableAdderPinActions @ 14e1ba8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_CustomComputeKernel::GetAvailableAdderPinActions
          (UOptimusNode_CustomComputeKernel *this,
          TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UOptimusNodePin *param_1,EOptimusNodePinDirection param_2,
          FString *param_3)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  EOptimusDataTypeUsageFlags EVar3;
  ITextData *pIVar4;
  longlong lVar5;
  code *pcVar6;
  TRefCountPtr<ITextData> TVar7;
  EOptimusDataTypeUsageFlags EVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_> *pTVar13;
  UOptimusNode *pUVar14;
  UClass *pUVar15;
  FText *pFVar16;
  UOptimusNodePin *pUVar17;
  ForAnyElementType FVar18;
  UOptimusNodeGraph *pUVar19;
  FName FVar20;
  FScriptContainerElement *pFVar21;
  FName *pFVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  UOptimusNodeGraph *pUVar25;
  undefined1 auStackY_498 [32];
  ForAnyElementType local_448;
  undefined8 local_440;
  EOptimusNodePinDirection local_438;
  undefined1 local_437;
  undefined1 local_436 [6];
  ForAnyElementType local_430;
  uint local_428;
  uint local_424;
  ForAnyElementType local_420;
  undefined8 local_418;
  undefined1 local_410 [8];
  longlong local_408;
  FName local_400;
  undefined1 local_3f8;
  longlong local_3f4;
  FText local_3e8;
  undefined1 local_3d8;
  FName local_3d0;
  EOptimusNodePinDirection local_3c8;
  FName local_3c4;
  FText local_3b8;
  undefined1 local_3a8;
  undefined8 local_3a0;
  FScriptContainerElement local_398;
  undefined8 local_394;
  FText local_388;
  FScriptContainerElement local_378;
  FName local_370;
  undefined1 local_368;
  FName local_364;
  FText local_358;
  undefined1 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_330 [4];
  undefined1 local_32c [4];
  undefined1 local_328 [4];
  undefined1 local_324 [12];
  UOptimusNode_CustomComputeKernel *local_318;
  FName local_310;
  TSharedPtr<FOptimusDataType_const_,1> local_308;
  TSharedPtr<FOptimusDataType_const_,1> local_2f8;
  FAdderPinAction local_2e8;
  FText local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_278;
  FOptimusPinTraversalContext local_228;
  FOptimusPinTraversalContext local_1f8;
  FOptimusPinTraversalContext local_1c8;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_198;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_148;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_f8;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_438 = param_2;
  local_318 = this;
  FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_2f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.SharedReferenceCount.ReferenceController);
  if (local_2f8.Object != (FOptimusDataType *)0x0) {
    EVar8 = (**(code **)(*(longlong *)&this[-1].ShaderSource.ShaderText.Data.ArrayNum + 0x28))
                      (&this[-1].ShaderSource.ShaderText.Data.ArrayNum,&param_1->DataDomain);
    FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_308);
    if ((local_308.Object == (FOptimusDataType *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_> *
                )(*pcVar6)();
      return pTVar13;
    }
    EVar3 = (local_308.Object)->UsageFlags;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
    if ((EVar8 & EVar3) == None) {
      if (param_3 != (FString *)0x0) {
        ::FString::operator=(param_3,L"Can\'t add pin with this type");
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  pUVar25 = (UOptimusNodeGraph *)0x0;
  local_228.ReferenceNesting.AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_228.ReferenceNesting.ArrayNum = 0;
  local_228.ReferenceNesting.ArrayMax = 4;
  pUVar14 = UOptimusNodePin::GetOwningNode(param_1);
  pUVar19 = (UOptimusNodeGraph *)pUVar14->_padding_;
  if (pUVar19 == (UOptimusNodeGraph *)0x0) {
LAB_14e1baa19:
    pUVar19 = pUVar25;
  }
  else {
    pUVar15 = UOptimusNodeGraph::StaticClass();
    iVar12 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar15->_padding_)) goto LAB_14e1baa19;
  }
  UOptimusNodeGraph::GetComponentSourceBindingsForPin(pUVar19,&local_278,param_1,&local_228);
  if (local_228.ReferenceNesting.AllocatorInstance.SecondaryData !=
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)local_228.ReferenceNesting.AllocatorInstance.SecondaryData);
  }
  FVar20 = this[-1].Category;
  uVar11 = this[-1].KernelName.Name.ComparisonIndex.Value;
  local_430.Data = (FScriptContainerElement *)0x0;
  local_428 = 0;
  local_424 = 0;
  pUVar19 = pUVar25;
  if ((int)uVar11 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_> *
                )(*pcVar6)();
      return pTVar13;
    }
    pUVar19 = (UOptimusNodeGraph *)(ulonglong)local_428;
  }
  FVar1 = (FName)((longlong)FVar20 + (longlong)(int)uVar11 * 8);
  FVar24.Data = local_430.Data;
  for (; uVar11 = (uint)pUVar19, FVar20 != FVar1; FVar20 = (FName)((longlong)FVar20 + 8)) {
    local_408 = *(longlong *)FVar20;
    if ((*(char *)(local_408 + 0x29) == '\x01') && (*(char *)(local_408 + 0x28) != '\0')) {
      if ((FVar24.Data <= (FScriptContainerElement *)&local_408) &&
         (((FScriptContainerElement *)&local_408 < FVar24.Data + (longlong)(int)local_424 * 8 &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), FVar24.Data = local_430.Data, uVar11 = local_428, bVar9)))) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar13;
      }
      if (uVar11 == local_424) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_430,(int *)&local_424);
        FVar24.Data = local_430.Data;
      }
      local_428 = uVar11 + 1;
      *(longlong *)(FVar24.Data + (longlong)(int)uVar11 * 8) = local_408;
      pUVar19 = (UOptimusNodeGraph *)(ulonglong)local_428;
      FVar24.Data = local_430.Data;
    }
  }
  if (local_438 == Output) {
    if (((param_1->DataDomain).Type != Dimensional) ||
       ((param_1->DataDomain).DimensionNames.ArrayNum != 0)) {
      local_3d0.ComparisonIndex.Value = 0;
      local_3d0.Number = 0;
      local_3c4.ComparisonIndex.Value = 0;
      local_3c4.Number = 0;
      FText::FText(&local_3b8);
      local_3a8 = 0;
      local_3d0.ComparisonIndex.Value = 0;
      local_3d0.Number = 0;
      local_3c4.ComparisonIndex.Value = 0;
      local_3c4.Number = 0;
      local_340 = 0;
      local_3c8 = Output;
      local_338 = 0;
      pFVar16 = FText::GetEmpty();
      TVar7.Reference = local_3b8.TextData.Reference;
      pIVar4 = (pFVar16->TextData).Reference;
      if (local_3b8.TextData.Reference != pIVar4) {
        local_3b8.TextData.Reference = pIVar4;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_330);
        }
        if (TVar7.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
        }
      }
      local_3b8.Flags = pFVar16->Flags;
      local_3a8 = 0;
      if (param_1->Direction != Output) {
        pUVar17 = (UOptimusNodePin *)
                  (**(code **)(*(longlong *)&local_318[-1].ShaderSource.Declarations.Data.ArrayNum +
                              0x20))();
        local_1f8.ReferenceNesting.AllocatorInstance.SecondaryData =
             (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
        local_1f8.ReferenceNesting.ArrayNum = 0;
        local_1f8.ReferenceNesting.ArrayMax = 4;
        UOptimusNodePin::GetComponentSourceBindingsRecursively(pUVar17,&local_198,&local_1f8);
        if (local_1f8.ReferenceNesting.AllocatorInstance.SecondaryData !=
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)local_1f8.ReferenceNesting.AllocatorInstance.SecondaryData);
        }
        TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
        ::Intersect(&local_198,&local_f8,&local_278);
        if (((0 < (int)(local_f8.Elements._8_4_ - local_f8.Elements._52_4_)) ||
            (local_278.Elements._8_4_ == local_278.Elements._52_4_)) ||
           (local_198.Elements._8_4_ == local_198.Elements._52_4_)) {
          local_3a8 = 1;
        }
        local_f8.HashSize = 0;
        if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_f8.Elements);
        local_198.HashSize = 0;
        if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_198.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_198.Elements);
      }
      local_2e8.DisplayName = local_3d0;
      local_2e8.NewPinDirection = local_3c8;
      local_2e8.Key = local_3c4;
      local_2e8.ToolTip.TextData.Reference = local_3b8.TextData.Reference;
      if (local_3b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3b8.TextData.Reference + 8))
                  (local_3b8.TextData.Reference,local_32c);
      }
      local_2e8.ToolTip.Flags = local_3b8.Flags;
      local_2e8.bCanAutoLink = (bool)local_3a8;
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<IOptimusNodeAdderPinProvider::FAdderPinAction,IOptimusNodeAdderPinProvider::FAdderPinAction,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,&local_2e8,1);
      if (local_2e8.ToolTip.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e8.ToolTip.TextData.Reference + 0x10))();
      }
      FVar24.Data = local_430.Data;
      if (local_3b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
        FVar24.Data = local_430.Data;
      }
      goto joined_r0x00014e1bb041;
    }
    if (param_3 != (FString *)0x0) {
      ::FString::operator=(param_3,L"Can\'t add parameter pin as output");
      FVar24.Data = local_430.Data;
    }
  }
  else if (local_438 == Input) {
    if (param_1->Direction == Input) {
      local_420.Data = (FScriptContainerElement *)0x0;
      local_418 = 0;
      pFVar2 = FVar24.Data + (longlong)(int)uVar11 * 8;
      while( true ) {
        if ((uint)pUVar19 != uVar11) {
          local_437 = 0;
          `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_437);
        }
        if (FVar24.Data == pFVar2) break;
        lVar5 = *(longlong *)FVar24.Data;
        local_3a0 = 0;
        local_394 = 0;
        FText::FText(&local_388);
        local_3a0 = *(undefined8 *)(lVar5 + 0x18);
        local_398 = (FScriptContainerElement)0x1;
        local_378 = (FScriptContainerElement)0x0;
        local_394 = local_3a0;
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_2b8,L"OptimusNode_CustomComputeKernel",
                             L"AdderPinToolTipDirectionMismatch",
                             L"Add pin only, can\'t link input to input");
        FText::operator=(&local_388,pFVar16);
        if (local_2b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
        }
        if (((local_420.Data <= (FScriptContainerElement *)&local_3a0) &&
            ((FScriptContainerElement *)&local_3a0 <
             local_420.Data + (longlong)local_418._4_4_ * 0x30)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar13 = (TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar13;
        }
        iVar12 = (int)local_418;
        if ((int)local_418 == local_418._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_420,(int *)((longlong)&local_418 + 4));
        }
        local_418 = CONCAT44(local_418._4_4_,iVar12 + 1);
        pFVar21 = local_420.Data + (longlong)iVar12 * 0x30;
        *(undefined8 *)pFVar21 = local_3a0;
        pFVar21[8] = local_398;
        *(undefined8 *)(pFVar21 + 0xc) = local_394;
        *(undefined8 *)(pFVar21 + 0x18) = 0;
        *(ITextData **)(pFVar21 + 0x18) = local_388.TextData.Reference;
        if (local_388.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_388.TextData.Reference + 8))
                    (local_388.TextData.Reference,local_328);
        }
        *(uint *)(pFVar21 + 0x20) = local_388.Flags;
        pFVar21[0x28] = local_378;
        if (local_388.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
        }
        pUVar19 = (UOptimusNodeGraph *)(ulonglong)local_428;
        FVar24.Data = FVar24.Data + 8;
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_420.Data;
      __return_storage_ptr__->ArrayNum = (int)local_418;
      __return_storage_ptr__->ArrayMax = local_418._4_4_;
      local_418 = 0;
      local_420.Data = (FScriptContainerElement *)0x0;
      DestructItems<IOptimusNodeAdderPinProvider::FAdderPinAction,int>((FAdderPinAction *)0x0,0);
      FVar18.Data = local_420.Data;
    }
    else {
      if (param_1->Direction != Output) goto LAB_14e1babb8;
      local_448.Data = (FScriptContainerElement *)0x0;
      local_440 = 0;
      bVar9 = DoesSourceSupportUnifiedDispatch(param_1);
      pUVar19 = pUVar25;
      if (0 < (int)local_428) {
        do {
          uVar23 = (uint)pUVar25;
          uVar11 = 0;
          if ((int)uVar23 < (int)local_428) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
                       *)(*pcVar6)();
            return pTVar13;
          }
          pUVar17 = *(UOptimusNodePin **)(local_430.Data + (longlong)&pUVar19->_padding_);
          local_400.ComparisonIndex.Value = 0;
          local_400.Number = 0;
          local_3f4 = 0;
          FText::FText(&local_3e8);
          local_3d8 = 0;
          local_3f8 = 1;
          local_400 = (FName)pUVar17->_padding_;
          local_3f4 = pUVar17->_padding_;
          local_1c8.ReferenceNesting.AllocatorInstance.SecondaryData =
               (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
          local_1c8.ReferenceNesting.ArrayNum = 0;
          local_1c8.ReferenceNesting.ArrayMax = 4;
          UOptimusNodePin::GetComponentSourceBindingsRecursively(pUVar17,&local_148,&local_1c8);
          if (local_1c8.ReferenceNesting.AllocatorInstance.SecondaryData !=
              (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
            FMemory::Free((void *)local_1c8.ReferenceNesting.AllocatorInstance.SecondaryData);
          }
          TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
          ::Intersect(&local_148,&local_a8,&local_278);
          if ((((int)(local_a8.Elements._8_4_ - local_a8.Elements._52_4_) < 1) &&
              (local_278.Elements._8_4_ != local_278.Elements._52_4_)) &&
             (local_148.Elements._8_4_ != local_148.Elements._52_4_)) {
            local_3d8 = 0;
            pFVar16 = FText::AsLocalizable_Advanced_LocText
                                (&local_2a8,L"OptimusNode_CustomComputeKernel",
                                 L"AdderPinToolTipComponentMismatch",
                                 L"Add pin only, can\'t auto-link due to group\'s component binding not matching that of the source pin"
                                );
            FText::operator=(&local_3e8,pFVar16);
            if (local_2a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
            }
          }
          else {
            local_3d8 = 1;
          }
          if ((0 < (int)uVar23) && (!bVar9)) {
            local_3d8 = 0;
            pFVar16 = FText::AsLocalizable_Advanced_LocText
                                (&local_298,L"OptimusNode_CustomComputeKernel",
                                 L"AdderPinToolTipCannotLinkNonUnified",
                                 L"Add pin only, can\'t link due to data interface not supporting unified dispatch, consider insert kernel inbetween"
                                );
            FText::operator=(&local_3e8,pFVar16);
            if (local_298.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
            }
          }
          if (((local_448.Data <= &local_400) &&
              (&local_400 < (FName *)(local_448.Data + (longlong)local_440._4_4_ * 0x30))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
                       *)(*pcVar6)();
            return pTVar13;
          }
          iVar12 = (int)local_440;
          if ((int)local_440 == local_440._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&local_448,(int *)((longlong)&local_440 + 4));
          }
          local_440 = CONCAT44(local_440._4_4_,iVar12 + 1);
          pFVar22 = (FName *)(local_448.Data + (longlong)iVar12 * 0x30);
          *pFVar22 = local_400;
          *(undefined1 *)&pFVar22[1].ComparisonIndex.Value = local_3f8;
          *(longlong *)&pFVar22[1].Number = local_3f4;
          pFVar22[3].ComparisonIndex = 0;
          pFVar22[3].Number = 0;
          pFVar22[3] = (FName)local_3e8.TextData.Reference;
          if ((FName)local_3e8.TextData.Reference != (FName)0x0) {
            (**(code **)((longlong)*local_3e8.TextData.Reference + 8))
                      (local_3e8.TextData.Reference,local_324);
          }
          pFVar22[4].ComparisonIndex.Value = local_3e8.Flags;
          *(undefined1 *)&pFVar22[5].ComparisonIndex.Value = local_3d8;
          local_a8.HashSize = 0;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_a8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_a8.Elements);
          local_148.HashSize = 0;
          if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_148.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_148.Elements);
          if ((FName)local_3e8.TextData.Reference != (FName)0x0) {
            (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
          }
          pUVar25 = (UOptimusNodeGraph *)(ulonglong)(uVar23 + 1);
          pUVar19 = (UOptimusNodeGraph *)&pUVar19->_padding_;
        } while ((int)(uVar23 + 1) < (int)local_428);
      }
      iVar12 = (int)local_440;
      pFVar22 = (FName *)(local_448.Data + (longlong)(int)local_440 * 0x30);
      FVar24.Data = local_448.Data;
      while( true ) {
        if ((int)local_440 != iVar12) {
          local_436[0] = 0;
          `TCheckedPointerIterator<IOptimusNodeAdderPinProvider::FAdderPinAction,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_436);
        }
        if ((FName *)FVar24.Data == pFVar22) break;
        if ((char)(((FName *)((longlong)FVar24.Data + 0x28))->ComparisonIndex).Value != '\0')
        goto LAB_14e1bb4f7;
        FVar24.Data = FVar24.Data + 0x30;
      }
      if (bVar9) {
        local_370.ComparisonIndex.Value = 0;
        local_370.Number = 0;
        local_364.ComparisonIndex.Value = 0;
        local_364.Number = 0;
        FText::FText(&local_358);
        local_348 = 0;
        ::FName::FName(&local_310,L"Add a New Group");
        local_370 = local_310;
        local_364 = AdderPinActionKeyAddNewGroup;
        local_368 = 1;
        local_348 = 1;
        if (((local_448.Data <= &local_370) &&
            (&local_370 < (FName *)(local_448.Data + (longlong)local_440._4_4_ * 0x30))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar13 = (TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar13;
        }
        iVar12 = (int)local_440;
        if ((int)local_440 == local_440._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_448,(int *)((longlong)&local_440 + 4));
        }
        local_440 = CONCAT44(local_440._4_4_,iVar12 + 1);
        pFVar22 = (FName *)(local_448.Data + (longlong)iVar12 * 0x30);
        *pFVar22 = local_370;
        *(undefined1 *)&pFVar22[1].ComparisonIndex.Value = local_368;
        *(FName *)&pFVar22[1].Number = local_364;
        pFVar22[3].ComparisonIndex = 0;
        pFVar22[3].Number = 0;
        pFVar22[3] = (FName)local_358.TextData.Reference;
        if ((FName)local_358.TextData.Reference != (FName)0x0) {
          (**(code **)((longlong)*local_358.TextData.Reference + 8))();
        }
        pFVar22[4].ComparisonIndex.Value = local_358.Flags;
        *(undefined1 *)&pFVar22[5].ComparisonIndex.Value = local_348;
        if ((FName)local_358.TextData.Reference != (FName)0x0) {
          (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
        }
      }
LAB_14e1bb4f7:
      iVar12 = (int)local_440;
      pFVar22 = (FName *)(local_448.Data + (longlong)(int)local_440 * 0x30);
      FVar24.Data = local_448.Data;
      while( true ) {
        if ((int)local_440 != iVar12) {
          `TCheckedPointerIterator<IOptimusNodeAdderPinProvider::FAdderPinAction,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_410);
        }
        if ((FName *)FVar24.Data == pFVar22) goto LAB_14e1bb572;
        if ((char)(((FName *)((longlong)FVar24.Data + 0x28))->ComparisonIndex).Value != '\0') break;
        FVar24.Data = FVar24.Data + 0x30;
      }
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_288,L"OptimusNode_CustomComputeKernel",L"AdderPinToolTipAutoLink",
                           L"Group accepts pin connection");
      FText::operator=((FText *)((longlong)FVar24.Data + 0x18),pFVar16);
      if (local_288.TextData.Reference == (ITextData *)0x0) {
LAB_14e1bb572:
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      }
      else {
        (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_448.Data;
      __return_storage_ptr__->ArrayNum = (int)local_440;
      __return_storage_ptr__->ArrayMax = local_440._4_4_;
      local_440 = 0;
      local_448.Data = (FScriptContainerElement *)0x0;
      DestructItems<IOptimusNodeAdderPinProvider::FAdderPinAction,int>((FAdderPinAction *)0x0,0);
      FVar18.Data = local_448.Data;
    }
    FVar24.Data = local_430.Data;
    if (FVar18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar18.Data);
      FVar24.Data = local_430.Data;
    }
    goto joined_r0x00014e1bb041;
  }
LAB_14e1babb8:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
joined_r0x00014e1bb041:
  if (FVar24.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar24.Data);
  }
  local_278.HashSize = 0;
  if (local_278.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_278.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_278.Elements);
  return __return_storage_ptr__;
}

// GetBindingDeclaration @ 14e1bba00

FString * __thiscall
UOptimusNode_CustomComputeKernel::GetBindingDeclaration
          (UOptimusNode_CustomComputeKernel *this,FString *__return_storage_ptr__,FName param_1)

{
  longlong lVar1;
  int iVar2;
  FOptimusParameterBinding *pFVar3;
  FOptimusParameterBinding *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (FOptimusParameterBinding *)this->_padding_;
  pFVar3 = pFVar4 + (int)this->_padding_;
  for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 1) {
    if ((pFVar4->Name).Name == param_1) {
      GetDeclarationForBinding(__return_storage_ptr__,pFVar4,true);
      return __return_storage_ptr__;
    }
  }
  pFVar4 = (FOptimusParameterBinding *)this->_padding_;
  pFVar3 = pFVar4 + (int)this->_padding_;
  for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 1) {
    if ((pFVar4->Name).Name == param_1) {
      GetDeclarationForBinding(__return_storage_ptr__,pFVar4,false);
      return __return_storage_ptr__;
    }
  }
  lVar5 = this->_padding_;
  iVar2 = (int)this->_padding_;
  lVar1 = lVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FOptimusSecondaryInputBindingsGroup_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (lVar5 == lVar1) break;
    pFVar4 = *(FOptimusParameterBinding **)(lVar5 + 8);
    pFVar3 = pFVar4 + *(int *)(lVar5 + 0x10);
    for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 1) {
      if ((pFVar4->Name).Name == param_1) {
        GetDeclarationForBinding(__return_storage_ptr__,pFVar4,true);
        return __return_storage_ptr__;
      }
    }
    lVar5 = lVar5 + 0x18;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetBindingSupportAtomicCheckBoxVisibility @ 14e1bbed0

bool __thiscall
UOptimusNode_CustomComputeKernel::GetBindingSupportAtomicCheckBoxVisibility
          (UOptimusNode_CustomComputeKernel *this,FName param_1)

{
  bool bVar1;
  FName *pFVar2;
  FOptimusDataTypeRegistry *this_00;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar3;
  FName *pFVar4;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  pFVar4 = (FName *)this->_padding_;
  pFVar2 = pFVar4 + (longlong)(int)this->_padding_ * 0x10;
  while( true ) {
    if (pFVar4 == pFVar2) {
      return false;
    }
    if (*pFVar4 == param_1) break;
    pFVar4 = pFVar4 + 0x10;
  }
  this_00 = FOptimusDataTypeRegistry::Get();
  pTVar3 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(pFVar4 + 1),&local_18);
  bVar1 = FOptimusDataTypeRegistry::DoesTypeSupportAtomic(this_00,pTVar3);
  return bVar1;
}

// GetBindingSupportReadCheckBoxVisibility @ 14e1bbf70

bool __thiscall
UOptimusNode_CustomComputeKernel::GetBindingSupportReadCheckBoxVisibility
          (UOptimusNode_CustomComputeKernel *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)this->_padding_;
  pFVar2 = pFVar1 + (longlong)(int)this->_padding_ * 0x10;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return false;
    }
    if (*pFVar1 == param_1) break;
    pFVar1 = pFVar1 + 0x10;
  }
  return true;
}

// GetDeclarationForBinding @ 14e1c1ee0

/* WARNING: Removing unreachable block (ram,0x00014e1c265c) */
/* WARNING: Removing unreachable block (ram,0x00014e1c20ad) */
/* WARNING: Removing unreachable block (ram,0x00014e1c2407) */
/* WARNING: Removing unreachable block (ram,0x00014e1c2864) */

FString * __cdecl
UOptimusNode_CustomComputeKernel::GetDeclarationForBinding
          (FString *__return_storage_ptr__,FOptimusParameterBinding *param_1,bool param_2)

{
  void *_Src;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  ulonglong uVar7;
  FOptimusDataTypeRegistry *this;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FOptimusDataTypeRef *pFVar12;
  FScriptContainerElement *pFVar13;
  EOptimusBufferWriteType EVar14;
  undefined1 local_res20 [8];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6 [6];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined1 local_19f [7];
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  FOptimusDataTypeRef *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  TSharedPtr<FOptimusDataType_const_,1> local_60 [2];
  
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  UOptimusNode_ComputeKernelBase::GetIndexNamesFromDataDomain(&local_108,&param_1->DataDomain);
  iVar5 = local_108.ArrayNum;
  pFVar13 = local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10;
  FVar11.Data = local_108.AllocatorInstance.Data;
  while( true ) {
    if (local_108.ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar11.Data == pFVar13) break;
    local_150 = *(int *)(FVar11.Data + 8);
    lVar10 = (longlong)local_150;
    _Src = *(void **)FVar11.Data;
    local_158.Data = (FScriptContainerElement *)0x0;
    if (local_150 == 0) {
      local_14c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_150,0,&local_158,local_150,&local_14c);
      memcpy(local_158.Data,_Src,lVar10 * 2);
    }
    ::FString::PrintfImpl(&local_198,L"uint %s");
    if (((local_1b0.Data <= (FScriptContainerElement *)&local_198) &&
        ((FScriptContainerElement *)&local_198 < local_1b0.Data + (longlong)local_1a8._4_4_ * 0x10))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar1)();
      return pFVar6;
    }
    iVar4 = (int)local_1a8;
    if ((int)local_1a8 == local_1a8._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_1b0,(int *)((longlong)&local_1a8 + 4));
    }
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar4 + 1);
    pFVar9 = local_1b0.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_198.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 8) = local_198.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_198.Data.ArrayMax;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
    FVar11.Data = FVar11.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (param_2) {
    iVar5 = (int)local_1a8;
    uVar7 = (ulonglong)(int)local_1a8;
    bVar3 = true;
    pFVar13 = local_1b0.Data + uVar7 * 0x10;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    FVar11.Data = local_1b0.Data;
    while( true ) {
      if ((int)uVar7 != iVar5) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1a0);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_148,L", ",2);
      }
      iVar4 = *(int *)(FVar11.Data + 8) + -1;
      if (*(int *)(FVar11.Data + 8) == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(&local_148,*(wchar_t **)FVar11.Data,iVar4);
      uVar7 = local_1a8 & 0xffffffff;
      FVar11.Data = FVar11.Data + 0x10;
    }
    ::FName::ToString((FName *)param_1,&local_e0);
    GetShaderValueTypeFriendlyName(&local_90,&param_1->DataType);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s Read%s(%s);");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_1b0.Data,(int)local_1a8);
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
  }
  else {
    local_f8 = &param_1->DataType;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0 = 0;
    GetShaderValueTypeFriendlyName(&local_80,local_f8);
    iVar5 = (int)local_1a8;
    uVar7 = (ulonglong)(int)local_1a8;
    bVar3 = true;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    pFVar13 = local_1b0.Data + uVar7 * 0x10;
    FVar11.Data = local_1b0.Data;
    while( true ) {
      if ((int)uVar7 != iVar5) {
        local_1b8 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1b8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_138,L", ",2);
      }
      iVar4 = *(int *)(FVar11.Data + 8) + -1;
      if (*(int *)(FVar11.Data + 8) == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(&local_138,*(wchar_t **)FVar11.Data,iVar4);
      uVar7 = local_1a8 & 0xffffffff;
      FVar11.Data = FVar11.Data + 0x10;
    }
    ::FName::ToString((FName *)param_1,&local_d0);
    ::FString::PrintfImpl(&local_188,L"void Write%s(%s, %s Value);");
    if (((local_1c8.Data <= (FScriptContainerElement *)&local_188) &&
        ((FScriptContainerElement *)&local_188 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar1)();
      return pFVar6;
    }
    iVar5 = (int)local_1c0;
    if ((int)local_1c0 == local_1c0._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
    }
    local_1c0 = CONCAT44(local_1c0._4_4_,iVar5 + 1);
    pFVar13 = local_1c8.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_188.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_188.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_188.Data.ArrayMax;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (param_1->bSupportAtomicIfCompatibleDataType != false) {
      this = FOptimusDataTypeRegistry::Get();
      pTVar8 = FOptimusDataTypeRef::Resolve(&param_1->DataType,local_60);
      bVar3 = FOptimusDataTypeRegistry::DoesTypeSupportAtomic(this,pTVar8);
      if (bVar3) {
        EVar14 = WriteAtomicAdd;
        pFVar12 = &param_1->DataType;
        do {
          ::FName::ToString((FName *)param_1,&local_a0);
          UOptimusNode_ComputeKernelBase::GetAtomicWriteFunctionName(&local_c0,EVar14,&local_a0);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          GetShaderValueTypeFriendlyName(&local_f0,pFVar12);
          iVar5 = (int)local_1a8;
          uVar7 = (ulonglong)(int)local_1a8;
          bVar3 = true;
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar13 = local_1b0.Data + uVar7 * 0x10;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          FVar11.Data = local_1b0.Data;
          while( true ) {
            if ((int)uVar7 != iVar5) {
              local_1b7 = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1b7);
            }
            FVar2.Data = local_c0.Data.AllocatorInstance.Data;
            if (FVar11.Data == pFVar13) break;
            if (bVar3) {
              bVar3 = false;
            }
            else {
              ::FString::AppendChars(&local_128,L", ",2);
            }
            iVar4 = *(int *)(FVar11.Data + 8) + -1;
            if (*(int *)(FVar11.Data + 8) == 0) {
              iVar4 = 0;
            }
            ::FString::AppendChars(&local_128,*(wchar_t **)FVar11.Data,iVar4);
            uVar7 = local_1a8 & 0xffffffff;
            FVar11.Data = FVar11.Data + 0x10;
          }
          ::FString::PrintfImpl(&local_178,L"%s %s(%s, %s Value);");
          if (((local_1c8.Data <= (FScriptContainerElement *)&local_178) &&
              ((FScriptContainerElement *)&local_178 <
               local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar1)();
            return pFVar6;
          }
          iVar5 = (int)local_1c0;
          if ((int)local_1c0 == local_1c0._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
          }
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar5 + 1);
          pFVar13 = local_1c8.Data + (longlong)iVar5 * 0x10;
          *(undefined8 *)pFVar13 = 0;
          *(FScriptContainerElement **)pFVar13 = local_178.Data.AllocatorInstance.Data;
          *(int *)(pFVar13 + 8) = local_178.Data.ArrayNum;
          *(int *)(pFVar13 + 0xc) = local_178.Data.ArrayMax;
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (FVar2.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar2.Data);
          }
          EVar14 = EVar14 + WriteAtomicAdd;
          pFVar12 = local_f8;
        } while (EVar14 < Count);
      }
    }
    if (param_1->bSupportRead != false) {
      iVar5 = (int)local_1a8;
      uVar7 = (ulonglong)(int)local_1a8;
      bVar3 = true;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar13 = local_1b0.Data + uVar7 * 0x10;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FVar11.Data = local_1b0.Data;
      while( true ) {
        if ((int)uVar7 != iVar5) {
          local_1b6[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b6);
        }
        if (FVar11.Data == pFVar13) break;
        if (bVar3) {
          bVar3 = false;
        }
        else {
          ::FString::AppendChars(&local_118,L", ",2);
        }
        iVar4 = *(int *)(FVar11.Data + 8) + -1;
        if (*(int *)(FVar11.Data + 8) == 0) {
          iVar4 = 0;
        }
        ::FString::AppendChars(&local_118,*(wchar_t **)FVar11.Data,iVar4);
        uVar7 = local_1a8 & 0xffffffff;
        FVar11.Data = FVar11.Data + 0x10;
      }
      ::FName::ToString((FName *)param_1,&local_b0);
      GetShaderValueTypeFriendlyName(&local_70,&param_1->DataType);
      ::FString::PrintfImpl(&local_168,L"%s Read%s(%s);");
      if (((local_1c8.Data <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 < local_1c8.Data + (longlong)local_1c0._4_4_ * 0x10
          )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      iVar5 = (int)local_1c0;
      if ((int)local_1c0 == local_1c0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_1c8,(int *)((longlong)&local_1c0 + 4));
      }
      local_1c0 = CONCAT44(local_1c0._4_4_,iVar5 + 1);
      pFVar13 = local_1c8.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_168.Data.AllocatorInstance.Data;
      *(int *)(pFVar13 + 8) = local_168.Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = local_168.Data.ArrayMax;
      local_168.Data.ArrayNum = 0;
      local_168.Data.ArrayMax = 0;
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = true;
    iVar5 = (int)local_1c0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = local_1c8.Data + (longlong)(int)local_1c0 * 0x10;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    FVar11.Data = local_1c8.Data;
    while( true ) {
      if ((int)local_1c0 != iVar5) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_19f);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
      }
      iVar4 = *(int *)(FVar11.Data + 8) + -1;
      if (*(int *)(FVar11.Data + 8) == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar11.Data,iVar4);
      FVar11.Data = FVar11.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_1c8.Data,(int)local_1c0);
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    DestructItems<FString,int>((FString *)local_1b0.Data,(int)local_1a8);
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetExecutionDomain @ 14e1c4e90

FOptimusExecutionDomain * __thiscall
UOptimusNode_CustomComputeKernel::GetExecutionDomain
          (UOptimusNode_CustomComputeKernel *this,FOptimusExecutionDomain *__return_storage_ptr__)

{
  __return_storage_ptr__->Type = (EOptimusExecutionDomainType)this->_padding_;
  __return_storage_ptr__->Name = *(FName *)((longlong)&this->_padding_ + 4);
  ::FString::FString(&__return_storage_ptr__->Expression,(FString *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetExecutionDomains @ 14e1c4f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_CustomComputeKernel::GetExecutionDomains
          (UOptimusNode_CustomComputeKernel *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UOptimusNodePin *this_00;
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  UOptimusComponentSource *pUVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_01;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> local_f8;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_e8;
  FOptimusPinTraversalContext local_98;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = (UOptimusNodePin *)
            (**(code **)(this[-1].ShaderSource.Declarations.Data.AllocatorInstance.Data + 0x20))
                      (&this[-1].ShaderSource);
  local_98.ReferenceNesting.ArrayMax = 4;
  local_98.ReferenceNesting.AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_98.ReferenceNesting.ArrayNum = 0;
  UOptimusNodePin::GetComponentSourceBindingsRecursively(this_00,&local_e8,&local_98);
  if (local_98.ReferenceNesting.AllocatorInstance.SecondaryData !=
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)local_98.ReferenceNesting.AllocatorInstance.SecondaryData);
  }
  if (local_e8.Elements._8_4_ - local_e8.Elements._52_4_ == 1) {
    pTVar3 = TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
             ::Array(&local_e8,&local_f8);
    if (pTVar3->ArrayNum < 1) {
      local_108 = 0;
      local_100 = (longlong)pTVar3->ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pUVar5 = UOptimusComponentSourceBinding::GetComponentSource
                       (*(UOptimusComponentSourceBinding **)(pTVar3->AllocatorInstance).Data);
    (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5,__return_storage_ptr__);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  else {
    this_01 = UOptimusComponentSource::GetAllExecutionDomains(&local_68);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array(this_01,__return_storage_ptr__)
    ;
    local_68.HashSize = 0;
    if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_68.Elements);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  return __return_storage_ptr__;
}

// GetGroupSize @ 14e1c5960

TIntVector3<int> * __thiscall
UOptimusNode_CustomComputeKernel::GetGroupSize
          (UOptimusNode_CustomComputeKernel *this,TIntVector3<int> *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = (this->GroupSize).field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->GroupSize).field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
  return __return_storage_ptr__;
}

// GetKernelHlslName @ 14e1c8e40

FString * __thiscall
UOptimusNode_CustomComputeKernel::GetKernelHlslName
          (UOptimusNode_CustomComputeKernel *this,FString *__return_storage_ptr__)

{
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  ::FName::ToString(&(this->KernelName).Name,&local_28);
  ::FString::ConcatFC(&local_38,&local_28,L"_");
  ::FString::ConcatFF(__return_storage_ptr__,&local_38,&local_18);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetKernelSourceText @ 14e1c8f90

FString * __thiscall
UOptimusNode_CustomComputeKernel::GetKernelSourceText
          (UOptimusNode_CustomComputeKernel *this,FString *__return_storage_ptr__,bool param_1)

{
  undefined8 uVar1;
  int iVar2;
  UClass *pUVar3;
  UOptimusCustomComputeKernelDataInterface *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString *pFVar7;
  FString *pFVar8;
  TIntVector3<int>_u_0 local_58;
  FString local_48;
  void *local_38 [2];
  
  pUVar3 = UOptimusCustomComputeKernelDataInterface::StaticClass();
  pUVar4 = UClass::GetDefaultObject<UOptimusCustomComputeKernelDataInterface>(pUVar3);
  pwVar5 = (wchar_t *)(**(code **)(pUVar4->_padding_ + 0x38))(&pUVar4->_padding_);
  pUVar3 = UOptimusCustomComputeKernelDataInterface::StaticClass();
  pUVar4 = UClass::GetDefaultObject<UOptimusCustomComputeKernelDataInterface>(pUVar3);
  pwVar6 = (wchar_t *)(**(code **)(pUVar4->_padding_ + 0x30))(&pUVar4->_padding_);
  uVar1 = *(undefined8 *)&(this->GroupSize).field0_0x0;
  iVar2 = (this->GroupSize).field0_0x0._s_0.Z;
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x338))(this,local_38);
  pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
  local_58._0_8_ = uVar1;
  local_58._s_0.Z = iVar2;
  Optimus::GetCookedKernelSource
            (__return_storage_ptr__,pFVar8,&(this->ShaderSource).ShaderText,pFVar7,
             (TIntVector3<int> *)&local_58._s_0,pwVar6,pwVar5,param_1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  return __return_storage_ptr__;
}

// GetNodeCategory @ 14e1cadb0

FName __thiscall
UOptimusNode_CustomComputeKernel::GetNodeCategory(UOptimusNode_CustomComputeKernel *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusNode::CategoryName::Deformers;
  return in_RDX;
}

// GetPrimaryGroupPin @ 14e1d4200

UOptimusNodePin * __thiscall
UOptimusNode_CustomComputeKernel::GetPrimaryGroupPin(UOptimusNode_CustomComputeKernel *this)

{
  UOptimusNodePin *pUVar1;
  
  pUVar1 = GetPrimaryGroupPin_Internal((UOptimusNode_CustomComputeKernel *)&this[-1]._padding_);
  return pUVar1;
}

// GetPrimaryGroupPin_Internal @ 14e1d4220

UOptimusNodePin * __thiscall
UOptimusNode_CustomComputeKernel::GetPrimaryGroupPin_Internal
          (UOptimusNode_CustomComputeKernel *this)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  UOptimusNodePin *pUVar5;
  
  iVar1 = (int)this->_padding_;
  puVar2 = (undefined8 *)this->_padding_;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UOptimusNodePin *)(*pcVar3)();
      return pUVar5;
    }
  }
  else if (0 < iVar1) goto LAB_14e1d4294;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UOptimusNodePin *)(*pcVar3)();
    return pUVar5;
  }
LAB_14e1d4294:
  return (UOptimusNodePin *)*puVar2;
}

// GetPrivateStaticClass @ 14e1d7820

UClass * __cdecl UOptimusNode_CustomComputeKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_CustomComputeKernel",
               &Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.InnerSingleton,
               StaticRegisterNativesUOptimusNode_CustomComputeKernel,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_CustomComputeKernel>,
               InternalVTableHelperCtorCaller<UOptimusNode_CustomComputeKernel>,local_res8,
               UOptimusNode_ComputeKernelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.InnerSingleton;
}

// GetSanitizedNewPinName @ 14e1e0470

FName __thiscall
UOptimusNode_CustomComputeKernel::GetSanitizedNewPinName
          (UOptimusNode_CustomComputeKernel *this,UOptimusNodePin *param_1,FName param_2)

{
  bool bVar1;
  FName FVar2;
  FName FVar3;
  UObject *pUVar4;
  
  Optimus::GetSanitizedNameForHlsl((FName)param_1);
  bVar1 = ::FName::Equals((FName)param_1->_padding_,NumThreadsReservedName);
  if (bVar1) {
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
  }
  FVar2 = (FName)GetPrimaryGroupPin_Internal(this);
  if ((param_2 == (FName)0x0) || (param_2 == FVar2)) {
    FVar3 = UOptimusNode::GetAvailablePinNameStable((UObject *)&stack0x00000010,(FName)this);
    pUVar4 = (UObject *)&stack0x00000018;
    param_1->_padding_ = *(longlong *)FVar3;
  }
  else {
    pUVar4 = (UObject *)&stack0x00000010;
    FVar2 = param_2;
  }
  FVar2 = UOptimusNode::GetAvailablePinNameStable(pUVar4,FVar2);
  param_1->_padding_ = *(longlong *)FVar2;
  return (FName)param_1;
}

// GetTypeUsageFlags @ 14e1e7e00

EOptimusDataTypeUsageFlags __thiscall
UOptimusNode_CustomComputeKernel::GetTypeUsageFlags
          (UOptimusNode_CustomComputeKernel *this,FOptimusDataDomain *param_1)

{
  EOptimusDataTypeUsageFlags EVar1;
  
  if ((param_1->Type != Dimensional) ||
     (EVar1 = DataInterfaceOutput|AnimAttributes|Variable, (param_1->DimensionNames).ArrayNum != 0))
  {
    EVar1 = PerBoneAnimAttribute|Resource;
  }
  return EVar1;
}

// MakeKernelDataInterface @ 14e1f19a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataInterface * __thiscall
UOptimusNode_CustomComputeKernel::MakeKernelDataInterface
          (UOptimusNode_CustomComputeKernel *this,UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UOptimusCustomComputeKernelDataInterface::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UComputeDataInterface *)pUVar2;
}

// OnDataTypeChanged @ 14e1f4c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e22e896) */
/* WARNING: Removing unreachable block (ram,0x00014e22e3ca) */
/* WARNING: Removing unreachable block (ram,0x00014e22e9a3) */
/* WARNING: Removing unreachable block (ram,0x00014e22e24e) */
/* WARNING: Removing unreachable block (ram,0x00014e22e55f) */

void __thiscall
UOptimusNode_CustomComputeKernel::OnDataTypeChanged
          (UOptimusNode_CustomComputeKernel *this,FName param_1)

{
  int *piVar1;
  FOptimusParameterBindingArray *pFVar2;
  FOptimusShaderText *this_00;
  FName *pFVar3;
  FOptimusParameterBinding *pFVar4;
  void *_Src;
  code *pcVar5;
  FIdentityFunctor FVar6;
  ForAnyElementType *pFVar7;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FString *pFVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FName *pFVar17;
  longlong lVar18;
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *pTVar19;
  FString *pFVar20;
  ForAnyElementType FVar21;
  int iVar22;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar23;
  undefined1 auStackY_2d8 [32];
  FIdentityFunctor FStack_288;
  undefined1 auStack_287 [7];
  ForAnyElementType FStack_280;
  undefined8 uStack_278;
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> TStack_270;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined1 uStack_25e;
  undefined1 uStack_25d;
  undefined1 auStack_25c [4];
  ForAnyElementType FStack_258;
  undefined8 uStack_250;
  ForAnyElementType FStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined1 auStack_237 [7];
  FString FStack_230;
  FString FStack_220;
  FString FStack_210;
  FString FStack_200;
  FString FStack_1f0;
  FString *pFStack_1e0;
  ulonglong uStack_1d8;
  ForAnyElementType FStack_1d0;
  int iStack_1c8;
  int iStack_1c4;
  uint uStack_1c0;
  UOptimusNode_CustomComputeKernel *pUStack_1b8;
  FString FStack_1b0;
  FString FStack_1a0;
  FString FStack_190;
  ForAnyElementType *pFStack_180;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_178;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_170;
  FString **ppFStack_168;
  undefined1 auStack_160 [8];
  FName FStack_158;
  FName FStack_150;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTStack_148;
  FString FStack_140;
  ForAnyElementType **ppFStack_130;
  ForAnyElementType *pFStack_128;
  FString FStack_120;
  FString FStack_110;
  FString FStack_100;
  FString FStack_f0;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  TStack_d8;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  TStack_88;
  void *pvStack_48;
  undefined4 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pTStack_170 = &TStack_88;
  TStack_88._0_8_ = 0;
  ppFStack_168 = &pFStack_1e0;
  TStack_88._8_8_ = 0;
  TStack_88._32_8_ = 0;
  TStack_88._40_4_ = 0;
  TStack_88._44_4_ = 0x80;
  TStack_88._48_4_ = 0xffffffff;
  TStack_88._52_4_ = 0;
  pvStack_48 = (void *)0x0;
  uStack_40 = 0;
  pFStack_1e0 = (FString *)0x0;
  uStack_1d8 = 0;
  pUStack_1b8 = this;
  `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_1>::
  operator()<FOptimusParameterBindingArray>(&pTStack_170,&this->InputBindingArray);
  pFVar2 = &this->OutputBindingArray;
  `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_1>::
  operator()<FOptimusParameterBindingArray>(&pTStack_170,pFVar2);
  iVar11 = (this->SecondaryInputBindingGroups).ArrayNum;
  pFVar16 = (this->SecondaryInputBindingGroups).AllocatorInstance.Data;
  pFVar15 = pFVar16 + (longlong)iVar11 * 0x18;
  while( true ) {
    if ((this->SecondaryInputBindingGroups).ArrayNum != iVar11) {
      uStack_260 = 0;
      `TCheckedPointerIterator<FOptimusSecondaryInputBindingsGroup,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&uStack_260);
    }
    if (pFVar16 == pFVar15) break;
    `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_1>::
    operator()<FOptimusParameterBindingArray>
              (&pTStack_170,(FOptimusParameterBindingArray *)(pFVar16 + 8));
    pFVar16 = pFVar16 + 0x18;
  }
  uVar10 = (this->InputBindingArray).InnerArray.ArrayNum;
  pFStack_180 = &FStack_280;
  pFVar4 = (FOptimusParameterBinding *)(this->InputBindingArray).InnerArray.AllocatorInstance.Data;
  pTStack_178 = &TStack_d8;
  ppFStack_130 = &pFStack_180;
  pFStack_128 = &FStack_280;
  FStack_280.Data = (FScriptContainerElement *)0x0;
  uStack_278 = 0;
  TStack_d8.Elements._0_8_ = 0;
  TStack_d8.Elements._8_8_ = 0;
  TStack_d8.Elements._32_8_ = 0;
  TStack_d8.Elements._40_4_ = 0;
  TStack_d8.Elements._44_4_ = 0x80;
  TStack_d8.Elements._48_4_ = 0xffffffff;
  TStack_d8.Elements._52_4_ = 0;
  TStack_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_d8.HashSize = 0;
  TStack_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_270.ArrayNum = uVar10;
  if (uVar10 == 0) {
    TStack_270.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,uVar10,0,&TStack_270.AllocatorInstance,uVar10,&TStack_270.ArrayMax);
    ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
              (TStack_270.AllocatorInstance.Data,pFVar4,uVar10);
  }
  AlgoImpl::
  StableSortInternal<FOptimusParameterBinding,FIdentityFunctor,TDereferenceWrapper<FOptimusParameterBinding,_UOptimusNode_CustomComputeKernel::UpdatePreamble_::__l2::<lambda_2>_>_>
            ((FOptimusParameterBinding *)TStack_270.AllocatorInstance.Data,TStack_270.ArrayNum,
             FStack_288,(<lambda_2> *)auStack_287);
  `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_4>::operator()
            (&ppFStack_130,&TStack_270);
  if (&TStack_270 != &pFVar2->InnerArray) {
    DestructItems<FOptimusParameterBinding,int>
              ((FOptimusParameterBinding *)TStack_270.AllocatorInstance.Data,TStack_270.ArrayNum);
    uVar10 = (this->OutputBindingArray).InnerArray.ArrayNum;
    pFVar4 = (FOptimusParameterBinding *)(pFVar2->InnerArray).AllocatorInstance.Data;
    TStack_270.ArrayNum = uVar10;
    if ((uVar10 == 0) && (TStack_270.ArrayMax == 0)) {
      TStack_270.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,uVar10,TStack_270.ArrayMax,&TStack_270.AllocatorInstance,uVar10,
                 &TStack_270.ArrayMax);
      ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
                (TStack_270.AllocatorInstance.Data,pFVar4,uVar10);
    }
  }
  AlgoImpl::
  StableSortInternal<FOptimusParameterBinding,FIdentityFunctor,TDereferenceWrapper<FOptimusParameterBinding,_UOptimusNode_CustomComputeKernel::UpdatePreamble_::__l2::<lambda_2>_>_>
            ((FOptimusParameterBinding *)TStack_270.AllocatorInstance.Data,TStack_270.ArrayNum,
             FStack_288,(<lambda_2> *)auStack_287);
  uVar14 = (ulonglong)TStack_270.ArrayNum;
  pTStack_148 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
                (TStack_270.AllocatorInstance.Data + uVar14 * 0x80);
  uStack_1c0 = TStack_270.ArrayNum;
  pTVar23 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(TStack_270.AllocatorInstance.Data + 0x40);
  while( true ) {
    pTVar8 = pTStack_148;
    if (TStack_270.ArrayNum != (uint)uVar14) {
      uStack_25f = 0;
      `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&uStack_25f);
    }
    this_01 = pTStack_178;
    FVar6 = FStack_288;
    if (pTVar23 + -4 == pTVar8) {
      pFVar17 = (FName *)(pUStack_1b8->SecondaryInputBindingGroups).AllocatorInstance.Data;
      iVar11 = (pUStack_1b8->SecondaryInputBindingGroups).ArrayNum;
      pTVar19 = (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)(pFVar17 + 1);
      pFVar3 = pFVar17 + (longlong)iVar11 * 3;
      do {
        if ((pUStack_1b8->SecondaryInputBindingGroups).ArrayNum != iVar11) {
          FStack_288 = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<FOptimusSecondaryInputBindingsGroup,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&FStack_288);
        }
        if (pFVar17 == pFVar3) {
          this_00 = &pUStack_1b8->ShaderSource;
          ::FString::Reset(&this_00->Declarations,0);
          if ((int)uStack_1d8 != 0) {
            ::FString::AppendChars(&this_00->Declarations,L"// Type declarations\n",0x15);
            iVar11 = (int)uStack_1d8;
            uVar14 = (ulonglong)(int)uStack_1d8;
            bVar9 = true;
            pFVar20 = pFStack_1e0 + uVar14;
            FStack_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FStack_190.Data.ArrayNum = 0;
            FStack_190.Data.ArrayMax = 0;
            pFVar13 = pFStack_1e0;
            while( true ) {
              if ((int)uVar14 != iVar11) {
                `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&uStack_238);
              }
              if (pFVar13 == pFVar20) break;
              if (bVar9) {
                bVar9 = false;
              }
              else {
                ::FString::AppendChars(&FStack_190,L"\n",1);
              }
              iVar12 = (pFVar13->Data).ArrayNum;
              iVar22 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar22 = 0;
              }
              ::FString::AppendChars
                        (&FStack_190,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar22);
              uVar14 = uStack_1d8 & 0xffffffff;
              pFVar13 = pFVar13 + 1;
            }
            ::FString::ConcatFC(&FStack_120,&FStack_190,L"\n");
            iVar11 = FStack_120.Data.ArrayNum + -1;
            if (FStack_120.Data.ArrayNum == 0) {
              iVar11 = 0;
            }
            ::FString::AppendChars
                      (&this_00->Declarations,(wchar_t *)FStack_120.Data.AllocatorInstance.Data,
                       iVar11);
            if (FStack_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_120.Data.AllocatorInstance.Data);
            }
            if (FStack_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_190.Data.AllocatorInstance.Data);
            }
          }
          if ((int)uStack_278 != 0) {
            ::FString::AppendChars
                      (&this_00->Declarations,L"// Parameters and resource read/write functions\n",
                       0x30);
            iVar11 = (int)uStack_278;
            uVar14 = (ulonglong)(int)uStack_278;
            bVar9 = true;
            pFVar15 = FStack_280.Data + uVar14 * 0x10;
            FStack_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FStack_1b0.Data.ArrayNum = 0;
            FStack_1b0.Data.ArrayMax = 0;
            FVar21.Data = FStack_280.Data;
            while( true ) {
              if ((int)uVar14 != iVar11) {
                `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(auStack_237);
              }
              if (FVar21.Data == pFVar15) break;
              if (bVar9) {
                bVar9 = false;
              }
              else {
                ::FString::AppendChars(&FStack_1b0,L"\n",1);
              }
              iVar12 = *(int *)(FVar21.Data + 8) + -1;
              if (*(int *)(FVar21.Data + 8) == 0) {
                iVar12 = 0;
              }
              ::FString::AppendChars(&FStack_1b0,*(wchar_t **)FVar21.Data,iVar12);
              uVar14 = uStack_278 & 0xffffffff;
              FVar21.Data = FVar21.Data + 0x10;
            }
            iVar11 = FStack_1b0.Data.ArrayNum + -1;
            if (FStack_1b0.Data.ArrayNum == 0) {
              iVar11 = 0;
            }
            ::FString::AppendChars
                      (&this_00->Declarations,(wchar_t *)FStack_1b0.Data.AllocatorInstance.Data,
                       iVar11);
            if (FStack_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_1b0.Data.AllocatorInstance.Data);
            }
          }
          ::FString::AppendChars(&this_00->Declarations,"\n// Resource Indexing\n",0x16);
          ::FString::AppendChars
                    (&this_00->Declarations,"uint Index;\t// From SV_DispatchThreadID.x\n",0x2a);
          ::FString::AppendChars(&this_00->Declarations,"uint3 ReadNumThreads();\n",0x18);
          DestructItems<FOptimusParameterBinding,int>
                    ((FOptimusParameterBinding *)TStack_270.AllocatorInstance.Data,
                     TStack_270.ArrayNum);
          if ((FOptimusParameterBinding *)TStack_270.AllocatorInstance.Data !=
              (FOptimusParameterBinding *)0x0) {
            FMemory::Free(TStack_270.AllocatorInstance.Data);
          }
          TStack_d8.HashSize = 0;
          if (TStack_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)TStack_d8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&TStack_d8.Elements);
          DestructItems<FString,int>((FString *)FStack_280.Data,(int)uStack_278);
          if (FStack_280.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_280.Data);
          }
          DestructItems<FString,int>(pFStack_1e0,(int)uStack_1d8);
          if (pFStack_1e0 != (FString *)0x0) {
            FMemory::Free(pFStack_1e0);
          }
          uStack_40 = 0;
          if (pvStack_48 != (void *)0x0) {
            FMemory::Free(pvStack_48);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&TStack_88);
          return;
        }
        if (&TStack_270 != pTVar19) {
          DestructItems<FOptimusParameterBinding,int>
                    ((FOptimusParameterBinding *)TStack_270.AllocatorInstance.Data,
                     TStack_270.ArrayNum);
          uVar10 = pTVar19->ArrayNum;
          pFVar4 = (FOptimusParameterBinding *)(pTVar19->AllocatorInstance).Data;
          TStack_270.ArrayNum = uVar10;
          if ((uVar10 == 0) && (TStack_270.ArrayMax == 0)) {
            TStack_270.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,uVar10,TStack_270.ArrayMax,&TStack_270.AllocatorInstance,uVar10,
                       &TStack_270.ArrayMax);
            ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
                      (TStack_270.AllocatorInstance.Data,pFVar4,uVar10);
          }
        }
        if (TStack_270.ArrayNum != 0) {
          AlgoImpl::
          IntroSortInternal<FOptimusParameterBinding,int,FIdentityFunctor,TDereferenceWrapper<FOptimusParameterBinding,_UOptimusNode_CustomComputeKernel::UpdatePreamble_::__l2::<lambda_2>_>_>
                    ((FOptimusParameterBinding *)TStack_270.AllocatorInstance.Data,
                     TStack_270.ArrayNum,FVar6,(<lambda_2> *)auStack_287);
          ::FName::ToString(pFVar17,&FStack_140);
          ::FString::PrintfImpl(&FStack_200,L"namespace %s {");
          if (((FStack_280.Data <= (FScriptContainerElement *)&FStack_200) &&
              ((FScriptContainerElement *)&FStack_200 <
               FStack_280.Data + (longlong)uStack_278._4_4_ * 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (int)uStack_278;
          if ((int)uStack_278 == uStack_278._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_280,(int *)((longlong)&uStack_278 + 4));
          }
          pFVar15 = FStack_280.Data + (longlong)iVar12 * 0x10;
          *(undefined8 *)pFVar15 = 0;
          *(FScriptContainerElement **)pFVar15 = FStack_200.Data.AllocatorInstance.Data;
          *(int *)(pFVar15 + 8) = FStack_200.Data.ArrayNum;
          *(int *)(pFVar15 + 0xc) = FStack_200.Data.ArrayMax;
          FStack_200.Data.ArrayNum = 0;
          FStack_200.Data.ArrayMax = 0;
          FStack_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uStack_278._0_4_ = iVar12 + 1;
          if (FStack_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_140.Data.AllocatorInstance.Data);
          }
          `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_4>::operator()
                    (&ppFStack_130,&TStack_270);
          ::FString::FString(&FStack_1f0,"}");
          if (((FStack_280.Data <= (FScriptContainerElement *)&FStack_1f0) &&
              ((FScriptContainerElement *)&FStack_1f0 <
               FStack_280.Data + (longlong)uStack_278._4_4_ * 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (int)uStack_278;
          if ((int)uStack_278 == uStack_278._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_280,(int *)((longlong)&uStack_278 + 4));
          }
          uStack_278 = CONCAT44(uStack_278._4_4_,iVar12 + 1);
          pFVar15 = FStack_280.Data + (longlong)iVar12 * 0x10;
          *(undefined8 *)pFVar15 = 0;
          *(FScriptContainerElement **)pFVar15 = FStack_1f0.Data.AllocatorInstance.Data;
          FStack_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar15 + 8) = FStack_1f0.Data.ArrayNum;
          *(int *)(pFVar15 + 0xc) = FStack_1f0.Data.ArrayMax;
          FStack_1f0.Data.ArrayNum = 0;
          FStack_1f0.Data.ArrayMax = 0;
        }
        pFVar17 = pFVar17 + 3;
        pTVar19 = (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
                  &pTVar19[1].ArrayNum;
      } while( true );
    }
    if (pTVar23->ArrayNum != 0) {
      uVar10 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>(pTVar23);
      iVar11 = TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>(this_01,uVar10,pTVar23)
      ;
      if (iVar11 == -1) {
        pFVar17 = (FName *)(pTVar23->AllocatorInstance).Data;
        iVar11 = pTVar23->ArrayNum;
        FStack_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1a0.Data.ArrayNum = 0;
        FStack_1a0.Data.ArrayMax = 0;
        pFVar3 = pFVar17 + iVar11;
        while( true ) {
          if (pTVar23->ArrayNum != iVar11) {
            uStack_25e = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&uStack_25e);
          }
          pFVar7 = pFStack_180;
          if (pFVar17 == pFVar3) break;
          FStack_158 = *pFVar17;
          pFVar13 = ::FName::ToString(&FStack_158,&FStack_110);
          iVar22 = (pFVar13->Data).ArrayNum;
          iVar12 = iVar22 + -1;
          if (iVar22 == 0) {
            iVar12 = 0;
          }
          ::FString::AppendChars
                    (&FStack_1a0,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar12);
          if (FStack_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_110.Data.AllocatorInstance.Data);
          }
          pFVar17 = pFVar17 + 1;
        }
        ::FString::PrintfImpl(&FStack_230,L"uint Num%s();");
        if (((pFVar7->Data <= (FScriptContainerElement *)&FStack_230) &&
            ((FScriptContainerElement *)&FStack_230 <
             pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = *(int *)&pFVar7[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar7,piVar1);
        }
        *(int *)&pFVar7[1].Data = iVar11 + 1;
        pFVar15 = pFVar7->Data + (longlong)iVar11 * 0x10;
        *(undefined8 *)pFVar15 = 0;
        *(FScriptContainerElement **)pFVar15 = FStack_230.Data.AllocatorInstance.Data;
        *(int *)(pFVar15 + 8) = FStack_230.Data.ArrayNum;
        *(int *)(pFVar15 + 0xc) = FStack_230.Data.ArrayMax;
        FStack_230.Data.ArrayNum = 0;
        FStack_230.Data.ArrayMax = 0;
        FStack_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_const_&>
                  (pTStack_178,(TArray<FName,TSizedDefaultAllocator<32>_> *)auStack_160,
                   (bool *)pTVar23);
        if (FStack_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1a0.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar17 = (FName *)(pTVar23->AllocatorInstance).Data;
    iVar11 = pTVar23->ArrayNum;
    FStack_248.Data = (FScriptContainerElement *)0x0;
    uStack_240 = 0;
    FStack_258.Data = (FScriptContainerElement *)0x0;
    pFVar3 = pFVar17 + iVar11;
    uStack_250 = 0;
    while( true ) {
      if (pTVar23->ArrayNum != iVar11) {
        uStack_25d = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_25d);
      }
      if (pFVar17 == pFVar3) break;
      FStack_150 = *pFVar17;
      ::FName::ToString(&FStack_150,&FStack_100);
      ::FString::PrintfImpl(&FStack_220,L"%sIndex");
      if (((FStack_258.Data <= (FScriptContainerElement *)&FStack_220) &&
          ((FScriptContainerElement *)&FStack_220 <
           FStack_258.Data + (longlong)uStack_250._4_4_ * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (int)uStack_250;
      if ((int)uStack_250 == uStack_250._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&FStack_258,(int *)((longlong)&uStack_250 + 4));
      }
      uStack_250 = CONCAT44(uStack_250._4_4_,iVar12 + 1);
      pFVar15 = FStack_258.Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar15 = 0;
      *(FScriptContainerElement **)pFVar15 = FStack_220.Data.AllocatorInstance.Data;
      *(int *)(pFVar15 + 8) = FStack_220.Data.ArrayNum;
      *(int *)(pFVar15 + 0xc) = FStack_220.Data.ArrayMax;
      FStack_220.Data.ArrayNum = 0;
      FStack_220.Data.ArrayMax = 0;
      FStack_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FStack_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.Data.AllocatorInstance.Data);
      }
      pFVar17 = pFVar17 + 1;
    }
    iVar11 = (int)uStack_250;
    pFVar15 = FStack_258.Data + (longlong)(int)uStack_250 * 0x10;
    FVar21.Data = FStack_258.Data;
    while( true ) {
      if ((int)uStack_250 != iVar11) {
        auStack_25c[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_25c);
      }
      if (FVar21.Data == pFVar15) break;
      iStack_1c8 = *(int *)(FVar21.Data + 8);
      lVar18 = (longlong)iStack_1c8;
      _Src = *(void **)FVar21.Data;
      FStack_1d0.Data = (FScriptContainerElement *)0x0;
      if (iStack_1c8 == 0) {
        iStack_1c4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iStack_1c8,0,&FStack_1d0,iStack_1c8,&iStack_1c4);
        memcpy(FStack_1d0.Data,_Src,lVar18 * 2);
      }
      ::FString::PrintfImpl(&FStack_210,L"uint %s");
      if (((FStack_248.Data <= (FScriptContainerElement *)&FStack_210) &&
          ((FScriptContainerElement *)&FStack_210 <
           FStack_248.Data + (longlong)uStack_240._4_4_ * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (int)uStack_240;
      if ((int)uStack_240 == uStack_240._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&FStack_248,(int *)((longlong)&uStack_240 + 4));
      }
      uStack_240 = CONCAT44(uStack_240._4_4_,iVar12 + 1);
      pFVar16 = FStack_248.Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar16 = 0;
      *(FScriptContainerElement **)pFVar16 = FStack_210.Data.AllocatorInstance.Data;
      *(int *)(pFVar16 + 8) = FStack_210.Data.ArrayNum;
      *(int *)(pFVar16 + 0xc) = FStack_210.Data.ArrayMax;
      FStack_210.Data.ArrayNum = 0;
      FStack_210.Data.ArrayMax = 0;
      FStack_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FStack_1d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1d0.Data);
      }
      FVar21.Data = FVar21.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)FStack_258.Data,(int)uStack_250);
    if (FStack_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_258.Data);
    }
    pFVar15 = (FScriptContainerElement *)
              GetDeclarationForBinding(&FStack_f0,(FOptimusParameterBinding *)(pTVar23 + -4),false);
    if (((FStack_280.Data <= pFVar15) &&
        (pFVar15 < FStack_280.Data + (longlong)uStack_278._4_4_ * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar11 = (int)uStack_278;
    if ((int)uStack_278 == uStack_278._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&FStack_280,(int *)((longlong)&uStack_278 + 4));
    }
    uStack_278 = CONCAT44(uStack_278._4_4_,iVar11 + 1);
    pFVar16 = FStack_280.Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar16 = 0;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar15;
    *(undefined8 *)pFVar15 = 0;
    *(int *)(pFVar16 + 8) = *(int *)(pFVar15 + 8);
    *(int *)(pFVar16 + 0xc) = *(int *)(pFVar15 + 0xc);
    *(undefined8 *)(pFVar15 + 8) = 0;
    if (FStack_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)FStack_248.Data,(int)uStack_240);
    if (FStack_248.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_248.Data);
    }
    pTVar23 = pTVar23 + 8;
    uVar14 = (ulonglong)uStack_1c0;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// PostLoadAddMissingPrimaryGroupPin @ 14e1fc540

void __thiscall
UOptimusNode_CustomComputeKernel::PostLoadAddMissingPrimaryGroupPin
          (UOptimusNode_CustomComputeKernel *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UOptimusNodePin *pUVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  UOptimusNodePin *pUVar12;
  undefined1 local_res8 [8];
  UOptimusNodePin *local_48;
  ForAnyElementType local_40;
  uint local_38;
  uint local_34 [3];
  
  iVar3 = (int)this->_padding_;
  pUVar12 = (UOptimusNodePin *)0x0;
  plVar10 = (longlong *)this->_padding_;
  local_38 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_34[0] = 0;
  pUVar8 = pUVar12;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar8 = (UOptimusNodePin *)(ulonglong)local_38;
  }
  plVar1 = plVar10 + iVar3;
  for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
    local_48 = (UOptimusNodePin *)*plVar10;
    if ((local_48->Direction == Input) && (local_48->bIsGroupingPin == false)) {
      uVar7 = (uint)pUVar8;
      if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)(int)local_34[0] * 8))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar7 = local_38, bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar7 == local_34[0]) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_40,(int *)local_34);
      }
      local_38 = uVar7 + 1;
      *(UOptimusNodePin **)(local_40.Data + (longlong)(int)uVar7 * 8) = local_48;
      pUVar8 = (UOptimusNodePin *)(ulonglong)local_38;
    }
    else if (pUVar12 == (UOptimusNodePin *)0x0) {
      pUVar12 = local_48;
    }
  }
  pUVar8 = NewObject<UOptimusNodePin>
                     ((UObject *)this,PrimaryGroupPinName,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pUVar8->bIsGroupingPin = true;
  pUVar8->Direction = Input;
  UOptimusNode::InsertPinIntoHierarchy((UOptimusNode *)this,pUVar8,(UOptimusNodePin *)0x0,pUVar12);
  uVar7 = local_38;
  uVar9 = (ulonglong)(int)local_38;
  pFVar2 = local_40.Data + uVar9 * 8;
  FVar11.Data = local_40.Data;
  while( true ) {
    if ((uint)uVar9 != uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar11.Data == pFVar2) break;
    UOptimusNode::MovePinToGroupPinDirect
              ((UOptimusNode *)this,*(UOptimusNodePin **)FVar11.Data,pUVar8);
    uVar9 = (ulonglong)local_38;
    FVar11.Data = FVar11.Data + 8;
  }
  iVar3 = (int)this->_padding_;
  plVar10 = (longlong *)this->_padding_;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14e1fc733:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (iVar3 < 1) goto LAB_14e1fc733;
  if ((UOptimusNodePin *)*plVar10 == pUVar8) goto LAB_14e1fc80d;
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3516376994675689257>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                     ,0x729,"GetPins()[0] == PrimaryGroupPin");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (int)this->_padding_;
  puVar4 = (undefined8 *)this->_padding_;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14e1fc7cf:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (iVar3 < 1) goto LAB_14e1fc7cf;
  UOptimusNode::MovePinDirect((UOptimusNode *)this,pUVar8,(UOptimusNodePin *)*puVar4);
LAB_14e1fc80d:
  iVar3 = (pUVar8->SubPins).ArrayNum;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UOptimusNodePin::SetIsExpanded(pUVar8,0 < iVar3);
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// PostLoadExtractAtomicModeFromConnectedResource @ 14e1fc880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusNode_CustomComputeKernel::PostLoadExtractAtomicModeFromConnectedResource
          (UOptimusNode_CustomComputeKernel *this)

{
  FString *pFVar1;
  UOptimusNodePin *pUVar2;
  UOptimusNodePin *pUVar3;
  longlong lVar4;
  code *pcVar5;
  UOptimusNode_CustomComputeKernel *this_00;
  ForAnyElementType FVar6;
  char cVar7;
  FOptimusDataType *pFVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FOptimusDataTypeRegistry *pFVar12;
  FFieldClass *pFVar13;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar14;
  UOptimusNode *pUVar15;
  UClass *pUVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  UOptimusNodeGraph *this_01;
  FOptimusDataType *pFVar19;
  char cVar20;
  FOptimusDataType *pFVar21;
  ForAnyElementType FVar22;
  int iVar23;
  ForAnyElementType FVar24;
  FOptimusRoutedNodePin *pFVar25;
  ForAnyElementType FVar26;
  undefined8 *puVar27;
  FScriptContainerElement *pFVar28;
  FOptimusDataType *pFVar29;
  UOptimusNodePin *pUVar30;
  FScriptContainerElement *pFVar31;
  undefined1 auStack_1b8 [32];
  UOptimusNodePin **local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  char local_168 [8];
  FOptimusDataType *local_160;
  uint local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e [6];
  FString local_138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  UOptimusNode_CustomComputeKernel *local_118;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_110;
  undefined8 *local_100;
  UOptimusNodePin *local_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  FString local_e8;
  undefined8 *local_d8;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  UOptimusNodePin *local_b0;
  UOptimusNodePin *pUStack_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_a0;
  FString local_90;
  FString local_80;
  undefined8 local_70;
  undefined8 local_68;
  FOptimusPinTraversalContext local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pFVar29 = (FOptimusDataType *)0x0;
  local_160 = (FOptimusDataType *)((ulonglong)local_160 & 0xffffffff00000000);
  local_118 = this;
  pFVar12 = FOptimusDataTypeRegistry::Get();
  pFVar13 = FIntProperty::StaticClass();
  pTVar14 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                    *)&pFVar12->RegisteredTypes,pFVar13->Name);
  if ((pTVar14 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
     (&pTVar14->field_0x10 == (undefined1 *)0x0)) {
    local_160 = (FOptimusDataType *)0x0;
    pUStack_a8 = (UOptimusNodePin *)0x0;
    local_b0 = (UOptimusNodePin *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_158 = 0;
    pFVar19 = pFVar29;
    pFVar21 = pFVar29;
  }
  else {
    pFVar21 = *(FOptimusDataType **)&pTVar14->field_0x10;
    pFVar19 = *(FOptimusDataType **)&pTVar14->field_0x18;
    if (pFVar19 != (FOptimusDataType *)0x0) {
      LOCK();
      *(int *)&(pFVar19->DisplayName).TextData.Reference =
           *(int *)&(pFVar19->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    local_68 = 0;
    local_70 = 0;
    local_158 = 0;
    local_160 = pFVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  iVar10 = (int)this->_padding_;
  puVar27 = (undefined8 *)this->_padding_;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  local_100 = puVar27;
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_d8 = puVar27 + iVar10;
  pFVar8 = local_160;
  if (puVar27 != local_d8) {
    do {
      pUVar2 = (UOptimusNodePin *)*puVar27;
      if (pUVar2->Direction == Output) {
        local_158 = (uint)pFVar29 | 1;
        pFVar29 = (FOptimusDataType *)(ulonglong)local_158;
        FOptimusDataTypeRef::Resolve(&pUVar2->DataType,&local_a0);
        if (local_a0.Object != pFVar21) goto LAB_14e1fc9cb;
        bVar9 = true;
      }
      else {
LAB_14e1fc9cb:
        bVar9 = false;
      }
      if (((ulonglong)pFVar29 & 1) != 0) {
        local_158 = (uint)pFVar29 & 0xfffffffe;
        pFVar29 = (FOptimusDataType *)(ulonglong)local_158;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.SharedReferenceCount.ReferenceController);
      }
      if (bVar9) {
        local_60.ReferenceNesting.AllocatorInstance.SecondaryData =
             (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
        local_60.ReferenceNesting.ArrayNum = 0;
        local_60.ReferenceNesting.ArrayMax = 4;
        pUVar15 = UOptimusNodePin::GetOwningNode(pUVar2);
        this_01 = (UOptimusNodeGraph *)pUVar15->_padding_;
        if (this_01 == (UOptimusNodeGraph *)0x0) {
LAB_14e1fca36:
          this_01 = (UOptimusNodeGraph *)0x0;
        }
        else {
          pUVar16 = UOptimusNodeGraph::StaticClass();
          iVar10 = (int)pUVar16->_padding_;
          if ((*(int *)(this_01->_padding_ + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar16->_padding_)) goto LAB_14e1fca36;
        }
        UOptimusNodeGraph::GetConnectedPinsWithRouting(this_01,&local_110,pUVar2,&local_60);
        if (local_60.ReferenceNesting.AllocatorInstance.SecondaryData !=
            (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          FMemory::Free((void *)local_60.ReferenceNesting.AllocatorInstance.SecondaryData);
        }
        uVar17 = (ulonglong)local_110.ArrayNum;
        local_160 = (FOptimusDataType *)CONCAT44(local_160._4_4_,local_110.ArrayNum);
        pFVar25 = (FOptimusRoutedNodePin *)(local_110.AllocatorInstance.Data + uVar17 * 0x38);
        FVar26.Data = local_110.AllocatorInstance.Data;
        while( true ) {
          if (local_110.ArrayNum != (int)uVar17) {
            local_168[0] = '\0';
            `TCheckedPointerIterator<FOptimusRoutedNodePin,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_168);
          }
          if ((FOptimusRoutedNodePin *)FVar26.Data == pFVar25) break;
          pUVar3 = ((FOptimusRoutedNodePin *)FVar26.Data)->NodePin;
          while (pUVar30 = pUVar3, pUVar3 = (UOptimusNodePin *)pUVar30->_padding_,
                pUVar3 != (UOptimusNodePin *)0x0) {
            pUVar16 = UOptimusNodePin::StaticClass();
            iVar10 = (int)pUVar16->_padding_;
            if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar10) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
                &pUVar16->_padding_)) break;
          }
          lVar4 = pUVar30->_padding_;
          if (lVar4 == 0) {
LAB_14e1fcc45:
            uVar17 = (ulonglong)local_160 & 0xffffffff;
            FVar26.Data = FVar26.Data + 0x38;
          }
          else {
            pUVar16 = UOptimusNode::StaticClass();
            iVar10 = (int)pUVar16->_padding_;
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar10) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
                &pUVar16->_padding_)) goto LAB_14e1fcc45;
            pUVar16 = UOptimusNode_ResourceAccessorBase::StaticClass();
            iVar10 = (int)pUVar16->_padding_;
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar10) ||
               (((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
                 &pUVar16->_padding_ || (*(char *)(lVar4 + 0x130) == '\0')))) goto LAB_14e1fcc45;
            pFVar28 = (local_118->OutputBindingArray).InnerArray.AllocatorInstance.Data;
            pFVar31 = pFVar28 + (longlong)(local_118->OutputBindingArray).InnerArray.ArrayNum * 0x80
            ;
            if (pFVar28 == pFVar31) goto LAB_14e1fcc45;
            do {
              if (*(longlong *)pFVar28 == pUVar2->_padding_) {
                if ((pFVar28 != (FScriptContainerElement *)0x0) &&
                   (pFVar28[0x78] = (FScriptContainerElement)0x1, local_110.ArrayNum == 1)) {
                  uStack_f0 = *(undefined1 *)(lVar4 + 0x130);
                  local_f8 = pUVar2;
                  if (local_150.Data <= (FScriptContainerElement *)&local_f8) {
                    if ((FScriptContainerElement *)&local_f8 <
                        local_150.Data + (longlong)local_148._4_4_ * 0x10) {
                      local_180 = (longlong)(int)local_148;
                      local_178 = 0x10;
                      local_198 = &local_f8;
                      local_190 = local_150.Data;
                      local_188 = (longlong)local_148._4_4_;
                      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar9) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                    }
                  }
                  iVar10 = (int)local_148;
                  if ((int)local_148 == local_148._4_4_) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_150,(int *)((longlong)&local_148 + 4));
                  }
                  local_148 = CONCAT44(local_148._4_4_,iVar10 + 1);
                  *(UOptimusNodePin **)(local_150.Data + (longlong)iVar10 * 0x10) = local_f8;
                  *(ulonglong *)(local_150.Data + (longlong)iVar10 * 0x10 + 8) =
                       CONCAT71(uStack_ef,uStack_f0);
                }
                goto LAB_14e1fcc45;
              }
              pFVar28 = pFVar28 + 0x80;
            } while (pFVar28 != pFVar31);
            uVar17 = (ulonglong)local_160 & 0xffffffff;
            FVar26.Data = FVar26.Data + 0x38;
          }
        }
        DestructItems<FOptimusRoutedNodePin,int>
                  ((FOptimusRoutedNodePin *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
        if ((FOptimusRoutedNodePin *)local_110.AllocatorInstance.Data !=
            (FOptimusRoutedNodePin *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
        }
        pFVar29 = (FOptimusDataType *)(ulonglong)local_158;
      }
      puVar27 = local_100 + 1;
      this = local_118;
      pFVar8 = pFVar19;
      local_100 = puVar27;
    } while (puVar27 != local_d8);
  }
  local_160 = pFVar8;
  if ((int)local_148 != 0) {
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    ::FString::ParseIntoArray(&(this->ShaderSource).ShaderText,&local_128,L";",true);
    iVar10 = local_128.ArrayNum;
    cVar20 = '\0';
    pFVar28 = local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 0x10;
    local_168[0] = '\0';
    FVar26.Data = local_128.AllocatorInstance.Data;
    while( true ) {
      if (local_128.ArrayNum != iVar10) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_140);
      }
      pFVar19 = local_160;
      if (FVar26.Data == pFVar28) break;
      iVar23 = (int)local_148;
      pFVar31 = local_150.Data + (longlong)(int)local_148 * 0x10;
      FVar22.Data = local_150.Data;
      while( true ) {
        if ((int)local_148 != iVar23) {
          `TCheckedPointerIterator<TTuple<UOptimusNodePin_*,enum_EOptimusBufferWriteType>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_13f);
        }
        cVar7 = local_168[0];
        if (FVar22.Data == pFVar31) goto LAB_14e1fce3d;
        pUVar2 = *(UOptimusNodePin **)FVar22.Data;
        pUStack_a8 = *(UOptimusNodePin **)(FVar22.Data + 8);
        local_d0 = (FName)pUVar2->_padding_;
        local_b0 = pUVar2;
        ::FName::ToString(&local_d0,&local_c0);
        ::FString::PrintfImpl(&local_e8,L"Write%s");
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        local_c8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_c8,&local_90);
        UOptimusNode_ComputeKernelBase::GetAtomicWriteFunctionName
                  (&local_80,(EOptimusBufferWriteType)pUStack_a8,&local_90);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        FVar6.Data = local_80.Data.AllocatorInstance.Data;
        FVar24.Data = (FScriptContainerElement *)L"";
        if (local_80.Data.ArrayNum != 0) {
          FVar24.Data = local_80.Data.AllocatorInstance.Data;
        }
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar18.Data = local_e8.Data.AllocatorInstance.Data;
        }
        iVar11 = ::FString::ReplaceInline
                           ((FString *)FVar26.Data,(wchar_t *)FVar18.Data,(wchar_t *)FVar24.Data,
                            CaseSensitive);
        if (0 < iVar11) break;
        if (FVar6.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar6.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        FVar22.Data = FVar22.Data + 0x10;
      }
      cVar20 = '\x01';
      local_168[0] = '\x01';
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      cVar7 = '\x01';
      if (local_e8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_14e1fce3d:
        cVar20 = cVar7;
        FVar26.Data = FVar26.Data + 0x10;
      }
      else {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        FVar26.Data = FVar26.Data + 0x10;
      }
    }
    if (cVar20 != '\0') {
      iVar10 = local_128.ArrayNum;
      bVar9 = true;
      pFVar28 = local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 0x10;
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      FVar26.Data = local_128.AllocatorInstance.Data;
      while( true ) {
        if (local_128.ArrayNum != iVar10) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_13e);
        }
        this_00 = local_118;
        if (FVar26.Data == pFVar28) break;
        if (bVar9) {
          bVar9 = false;
        }
        else {
          ::FString::AppendChars(&local_138,L";",1);
        }
        iVar23 = *(int *)(FVar26.Data + 8) + -1;
        if (*(int *)(FVar26.Data + 8) == 0) {
          iVar23 = 0;
        }
        ::FString::AppendChars(&local_138,*(wchar_t **)FVar26.Data,iVar23);
        FVar26.Data = FVar26.Data + 0x10;
      }
      pFVar1 = &(local_118->ShaderSource).ShaderText;
      if (pFVar1 != &local_138) {
        pFVar28 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar28 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar28);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
        (this_00->ShaderSource).ShaderText.Data.ArrayNum = local_138.Data.ArrayNum;
        (this_00->ShaderSource).ShaderText.Data.ArrayMax = local_138.Data.ArrayMax;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      UpdatePreamble(this_00);
    }
    DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
  }
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  return;
}

// PostLoadExtractExecutionDomain @ 14e1fcfa0

void __thiscall
UOptimusNode_CustomComputeKernel::PostLoadExtractExecutionDomain
          (UOptimusNode_CustomComputeKernel *this)

{
  FString *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UOptimusNodePin *this_00;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FOptimusDataTypeRegistry *this_01;
  UScriptStruct *pUVar8;
  UOptimusNode *pUVar9;
  UClass *pUVar10;
  UPackage *pUVar11;
  UObjectBaseUtility *this_02;
  longlong *plVar12;
  undefined8 *puVar13;
  UOptimusNodeGraph *this_03;
  bool bVar14;
  FNameEntryId local_d8;
  uint uStack_d4;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_d0;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_a0;
  TSharedPtr<FOptimusDataType_const_,1> local_90;
  FOptimusPinTraversalContext local_80;
  undefined8 local_40 [3];
  
  bVar14 = false;
  pFVar1 = &(this->ExecutionDomain).Expression;
  local_d8.Value = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  (this->ExecutionDomain).Name.ComparisonIndex = 0;
  (this->ExecutionDomain).Name.Number = 0;
  local_b0 = 0;
  local_a8 = 0;
  (this->ExecutionDomain).Type = DomainName;
  if (pFVar1 != (FString *)&local_b0) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ExecutionDomain).Expression.Data.ArrayNum = 0;
    (this->ExecutionDomain).Expression.Data.ArrayMax = 0;
  }
  this_01 = FOptimusDataTypeRegistry::Get();
  pUVar8 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
  FOptimusDataTypeRegistry::FindType(this_01,&local_90,pUVar8);
  iVar3 = (int)this->_padding_;
  puVar13 = (undefined8 *)this->_padding_;
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = puVar13 + iVar3;
  do {
    if (puVar13 == puVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      return;
    }
    this_00 = (UOptimusNodePin *)*puVar13;
    if (this_00->Direction == Input) {
      bVar14 = true;
      FOptimusDataTypeRef::Resolve(&this_00->DataType,&local_a0);
      if (local_a0.Object != local_90.Object) goto LAB_14e1fd09a;
      bVar7 = true;
    }
    else {
LAB_14e1fd09a:
      bVar7 = false;
    }
    if (bVar14) {
      bVar14 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
    }
    if (bVar7) {
      local_80.ReferenceNesting.ArrayMax = 4;
      local_80.ReferenceNesting.AllocatorInstance.SecondaryData =
           (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
      local_80.ReferenceNesting.ArrayNum = 0;
      pUVar9 = UOptimusNodePin::GetOwningNode(this_00);
      this_03 = (UOptimusNodeGraph *)pUVar9->_padding_;
      if (this_03 == (UOptimusNodeGraph *)0x0) {
LAB_14e1fd0fd:
        this_03 = (UOptimusNodeGraph *)0x0;
      }
      else {
        pUVar10 = UOptimusNodeGraph::StaticClass();
        iVar3 = (int)pUVar10->_padding_;
        if ((*(int *)(this_03->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar10->_padding_)) goto LAB_14e1fd0fd;
      }
      UOptimusNodeGraph::GetConnectedPinsWithRouting(this_03,&local_d0,this_00,&local_80);
      if (local_80.ReferenceNesting.AllocatorInstance.SecondaryData !=
          (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
        FMemory::Free((void *)local_80.ReferenceNesting.AllocatorInstance.SecondaryData);
      }
      if ((local_d0.ArrayNum == 1) &&
         (pUVar9 = UOptimusNodePin::GetOwningNode
                             (*(UOptimusNodePin **)local_d0.AllocatorInstance.Data),
         pUVar9 != (UOptimusNode *)0x0)) {
        pUVar10 = UOptimusNode_DataInterface::StaticClass();
        iVar3 = (int)pUVar10->_padding_;
        if ((iVar3 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar10->_padding_)) {
          pcVar5 = *(code **)(pUVar9[1]._padding_ + 0x10);
          pUVar11 = GetTransientPackage();
          this_02 = (UObjectBaseUtility *)(*pcVar5)(pUVar9 + 1,pUVar11);
          if (this_02 != (UObjectBaseUtility *)0x0) {
            pUVar10 = Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister();
            plVar12 = UObjectBaseUtility::GetInterfaceAddress(this_02,pUVar10);
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12,&local_d8);
              FVar6.Number = uStack_d4;
              FVar6.ComparisonIndex.Value = local_d8.Value;
              pFVar1 = &(this->ExecutionDomain).Expression;
              (this->ExecutionDomain).Name = FVar6;
              (this->ExecutionDomain).Type = DomainName;
              if (pFVar1 != (FString *)local_40) {
                pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
                if (pFVar4 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar4);
                }
                (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (this->ExecutionDomain).Expression.Data.ArrayNum = 0;
                (this->ExecutionDomain).Expression.Data.ArrayMax = 0;
              }
            }
          }
        }
      }
      DestructItems<FOptimusRoutedNodePin,int>
                ((FOptimusRoutedNodePin *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if ((FOptimusRoutedNodePin *)local_d0.AllocatorInstance.Data != (FOptimusRoutedNodePin *)0x0)
      {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
    }
    puVar13 = puVar13 + 1;
  } while( true );
}

// PostLoadNodeSpecificData @ 14e1fe970

void __thiscall
UOptimusNode_CustomComputeKernel::PostLoadNodeSpecificData(UOptimusNode_CustomComputeKernel *this)

{
  FOptimusParameterBindingArray *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  FName *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FText *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  size_t _Size;
  FName *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  ForAnyElementType local_178;
  undefined8 local_170;
  undefined8 local_168;
  FScriptContainerElement *local_160;
  undefined8 local_158;
  undefined8 local_150;
  FScriptContainerElement *local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  TPersistentObjectPtr<FSoftObjectPath> local_118;
  FOptimusDataDomain local_f0;
  undefined2 local_b0;
  FName local_a8;
  FName *local_a0;
  FName local_98 [2];
  FGuid local_88;
  FGuid local_78;
  FGuid local_68;
  FText local_58;
  
  UOptimusNode::PostLoadNodeSpecificData((UOptimusNode *)this);
  local_88 = FOptimusObjectVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_88);
  if (iVar6 < 3) {
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
              (&(this->InputBindingArray).InnerArray,&this->InputBindings_DEPRECATED);
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
              (&(this->OutputBindingArray).InnerArray,&this->OutputBindings_DEPRECATED);
  }
  iVar6 = (this->Parameters_DEPRECATED).ArrayNum;
  if (iVar6 != 0) {
    pFVar11 = (FName *)(this->Parameters_DEPRECATED).AllocatorInstance.Data;
    local_a0 = pFVar11 + (longlong)iVar6 * 7;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    while( true ) {
      pFVar4 = local_a0;
      if ((this->Parameters_DEPRECATED).ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FOptimus_ShaderBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar4) break;
      local_res10 = 0;
      local_118.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_118.ObjectID.AssetPath.AssetName.Number = 0;
      local_118.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_118.ObjectID.AssetPath.PackageName.Number = 0;
      local_128._0_4_ = 0;
      local_128._4_4_ = 0;
      local_128._8_4_ = 0;
      local_128._12_4_ = 0;
      local_118.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ObjectID.SubPathString.Data.ArrayNum = 0;
      local_118.ObjectID.SubPathString.Data.ArrayMax = 0;
      local_118.WeakPtr.ObjectIndex = 0;
      local_118.WeakPtr.ObjectSerialNumber = 0;
      FUtf8String::Reset(&local_118.ObjectID.SubPathString,0);
      local_res18 = 0;
      local_128._8_4_ = 0;
      local_128._12_4_ = 0;
      local_res20 = 0;
      local_118.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_118.ObjectID.AssetPath.AssetName.Number = 0;
      local_118.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_118.ObjectID.AssetPath.PackageName.Number = 0;
      local_118.WeakPtr.ObjectIndex = 0;
      local_118.WeakPtr.ObjectSerialNumber = 0;
      FUtf8String::Reset(&local_118.ObjectID.SubPathString,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FOptimusDataDomain::FOptimusDataDomain(&local_f0);
      local_128._0_8_ = *pFVar11;
      local_128._8_8_ = pFVar11[1];
      local_b0._0_1_ = (FScriptContainerElement)0x0;
      local_b0._1_1_ = (FScriptContainerElement)0x0;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                (&local_118,(TPersistentObjectPtr<FSoftObjectPath> *)(pFVar11 + 2));
      local_168 = 0;
      local_150 = 1;
      local_130 = local_130 & 0xffffffff;
      local_160 = (FScriptContainerElement *)0x0;
      local_158 = 0;
      local_148 = (FScriptContainerElement *)0x0;
      local_140 = 0;
      ::FName::FName(&local_a8,"Vertex");
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = CONCAT44(local_130._4_4_,1);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,0,&local_138,1,(int *)((longlong)&local_130 + 4));
      *(FName *)local_138.Data = local_a8;
      local_f0.Type = (EOptimusDataDomainType)local_168;
      if (local_f0.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.DimensionNames.AllocatorInstance.Data);
      }
      local_f0.DimensionNames.AllocatorInstance.Data = local_160;
      local_f0.DimensionNames.ArrayNum = (int)local_158;
      local_f0.DimensionNames.ArrayMax = local_158._4_4_;
      local_f0.Multiplier = (int)local_150;
      local_160 = (void *)0x0;
      local_158 = 0;
      if (local_f0.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Expression.Data.AllocatorInstance.Data);
      }
      local_f0.Expression.Data.AllocatorInstance.Data = local_148;
      local_f0.Expression.Data.ArrayNum = (int)local_140;
      local_f0.Expression.Data.ArrayMax = local_140._4_4_;
      local_148 = (void *)0x0;
      local_140 = 0;
      if (local_f0.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.LevelNames_DEPRECATED.AllocatorInstance.Data);
      }
      local_f0.LevelNames_DEPRECATED.AllocatorInstance.Data = local_138.Data;
      local_f0.LevelNames_DEPRECATED.ArrayNum = (int)local_130;
      local_f0.LevelNames_DEPRECATED.ArrayMax = local_130._4_4_;
      local_130 = 0;
      local_138.Data = (FScriptContainerElement *)0x0;
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_160 != (void *)0x0) {
        FMemory::Free(local_160);
      }
      if (((local_178.Data <= (FOptimusParameterBinding *)local_128) &&
          ((FScriptContainerElement *)local_128 < local_178.Data + (longlong)local_170._4_4_ * 0x80)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = (int)local_170;
      if ((int)local_170 == local_170._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x880,&local_178,(int *)((longlong)&local_170 + 4));
      }
      _Src.Data = local_118.ObjectID.SubPathString.Data.AllocatorInstance.Data;
      local_170 = CONCAT44(local_170._4_4_,iVar7 + 1);
      pFVar9 = local_178.Data + (longlong)iVar7 * 0x80;
      pFVar2 = pFVar9 + 0x28;
      *(undefined8 *)&pFVar9->field_0x0 = local_128._0_8_;
      *(undefined8 *)(pFVar9 + 8) = local_128._8_8_;
      *(FWeakObjectPtr *)(pFVar9 + 0x10) = local_118.WeakPtr;
      *(FName *)(pFVar9 + 0x18) = local_118.ObjectID.AssetPath.PackageName;
      *(FName *)(pFVar9 + 0x20) = local_118.ObjectID.AssetPath.AssetName;
      *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
      _Size = (size_t)local_118.ObjectID.SubPathString.Data.ArrayNum;
      *(int *)(pFVar9 + 0x30) = local_118.ObjectID.SubPathString.Data.ArrayNum;
      if (local_118.ObjectID.SubPathString.Data.ArrayNum == 0) {
        *(int *)(pFVar9 + 0x34) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_118.ObjectID.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,
                   local_118.ObjectID.SubPathString.Data.ArrayNum,(int *)(pFVar9 + 0x34));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar2,_Src.Data,_Size);
      }
      FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)(pFVar9 + 0x38),&local_f0);
      pFVar9[0x78] = local_b0._0_1_;
      pFVar9[0x79] = local_b0._1_1_;
      if (local_f0.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.LevelNames_DEPRECATED.AllocatorInstance.Data);
      }
      if (local_f0.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Expression.Data.AllocatorInstance.Data);
      }
      if (local_f0.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.DimensionNames.AllocatorInstance.Data);
      }
      if (local_118.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar11 = pFVar11 + 7;
    }
    pFVar1 = &this->InputBindingArray;
    if ((pFVar1 == (FOptimusParameterBindingArray *)&local_178) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(const void*)this != (const void*)&Items",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x767,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (int)local_170;
    lVar10 = (longlong)(int)local_170;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,(int)local_170,(ForAnyElementType *)pFVar1,
                       &(this->InputBindingArray).InnerArray.ArrayNum,
                       &(this->InputBindingArray).InnerArray.ArrayMax);
    pFVar2 = (pFVar1->InnerArray).AllocatorInstance.Data;
    memmove(pFVar2 + lVar10 * 0x80,pFVar2,(longlong)iVar7 << 7);
    ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
              ((pFVar1->InnerArray).AllocatorInstance.Data,
               (FOptimusParameterBinding *)local_178.Data,iVar6);
    DestructItems<FOptimusParameterBinding,int>
              ((FOptimusParameterBinding *)local_178.Data,(int)local_170);
    if ((FOptimusParameterBinding *)local_178.Data != (FOptimusParameterBinding *)0x0) {
      FMemory::Free(local_178.Data);
    }
  }
  local_78 = FOptimusObjectVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_78);
  if (iVar6 < 8) {
    PostLoadExtractExecutionDomain(this);
    PostLoadAddMissingPrimaryGroupPin(this);
  }
  local_68 = FOptimusObjectVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_68);
  if (iVar6 < 9) {
    PostLoadExtractAtomicModeFromConnectedResource(this);
  }
  local_98[0] = (this->KernelName).Name;
  pFVar8 = FText::FromName(&local_58,local_98);
  UOptimusNode::SetDisplayName((UOptimusNode *)this,pFVar8);
  return;
}

// PostLoadRemoveDeprecatedNumThreadsPin @ 14e1ffaa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UOptimusNode_CustomComputeKernel::PostLoadRemoveDeprecatedNumThreadsPin
          (UOptimusNode_CustomComputeKernel *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UOptimusNodePin *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UOptimusNodePin *pUVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FName local_res10;
  
  ::FName::FName(&local_res10,NumThreadsReservedName);
  pUVar8 = GetPrimaryGroupPin_Internal(this);
  iVar1 = (pUVar8->SubPins).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((this->InputBindingArray).InnerArray.ArrayNum != iVar1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3516376994675689345>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                       ,0x781,
                       "InputBindingArray.InnerArray.Num() == PrimaryGroupPin->GetSubPins().Num()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    return false;
  }
  uVar9 = 0;
  lVar11 = 0;
  lVar10 = 0;
  do {
    iVar1 = (pUVar8->SubPins).ArrayNum;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    if (iVar1 <= (int)uVar9) {
      bVar5 = false;
LAB_14e1ffce7:
      UpdatePreamble(this);
      return bVar5;
    }
    iVar1 = (pUVar8->SubPins).ArrayNum;
    pFVar2 = (pUVar8->SubPins).AllocatorInstance.Data;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    uVar7 = 0;
    if ((int)uVar9 < iVar1) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pUVar3 = *(UOptimusNodePin **)(pFVar2 + lVar10);
    if ((FName)pUVar3->_padding_ == local_res10) {
      uVar7 = 0;
      if ((int)uVar9 < (this->InputBindingArray).InnerArray.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      if (*(FName *)((this->InputBindingArray).InnerArray.AllocatorInstance.Data + lVar11) ==
          local_res10) {
        UOptimusNode::RemovePin((UOptimusNode *)this,pUVar3);
        TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&(this->InputBindingArray).InnerArray,uVar9,Default);
        bVar5 = true;
        goto LAB_14e1ffce7;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3516376994675689361>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                         ,0x791,
                         "InputBindingArray.InnerArray[BindingIndex].Name == NumThreadsPinName");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 8;
    lVar11 = lVar11 + 0x80;
  } while( true );
}

// RemoveAddedPins @ 14e211a10

bool __thiscall
UOptimusNode_CustomComputeKernel::RemoveAddedPins
          (UOptimusNode_CustomComputeKernel *this,TArrayView<UOptimusNodePin_*_const,int> *param_1)

{
  FName *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char *pcVar6;
  UOptimusNodePin **ppUVar7;
  UOptimusNodePin *pUVar8;
  TObjectPtr<UOptimusNodePin>_u_0 *pTVar9;
  atomic<unsigned_char> *paVar10;
  longlong *plVar11;
  longlong *plVar12;
  UOptimusNodePin *this_00;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  FName *local_res10;
  TArrayView<TObjectPtr<UOptimusNodePin>_const_,int> local_48;
  
  iVar14 = param_1->ArrayNum;
  if (iVar14 == 0) {
    return true;
  }
  if (2 < iVar14) {
    pcVar6 = "InAddedPinsToRemove.Num() <= 2";
    iVar14 = 0x241;
    paVar10 = &bGEnsureHasExecuted<3516376994675688001>;
LAB_14e211b12:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar10,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                       ,iVar14,pcVar6);
    if (!bVar4) {
      return false;
    }
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (iVar14 == 1) {
    ppUVar7 = TArrayView<UOptimusNodePin_*_const,int>::operator[](param_1,0);
    this_00 = *ppUVar7;
    lVar19 = 0x80;
    if (this_00->Direction != Input) {
      lVar19 = 0x90;
    }
    local_res10 = (FName *)((longlong)&this->_padding_ + lVar19);
    pUVar8 = UOptimusNodePin::GetParentPin(this_00);
    if ((pUVar8 != (UOptimusNodePin *)0x0) && ((FName)pUVar8->_padding_ != PrimaryGroupPinName)) {
      local_res10 = (FName *)this->_padding_;
      pFVar1 = local_res10 + (longlong)(int)this->_padding_ * 3;
      for (; local_res10 != pFVar1; local_res10 = local_res10 + 3) {
        if (*local_res10 == (FName)pUVar8->_padding_) {
          local_res10 = local_res10 + 1;
          goto LAB_14e211b3e;
        }
      }
      pcVar6 = "Group";
      iVar14 = 600;
      paVar10 = &bGEnsureHasExecuted<3516376994675688024>;
      goto LAB_14e211b12;
    }
LAB_14e211b3e:
    uVar16 = local_res10[1].ComparisonIndex.Value;
    lVar19 = (longlong)(int)uVar16;
    if (uVar16 != 0) {
      FVar2 = *local_res10;
      uVar20 = 0;
      bVar4 = *(longlong *)FVar2 != this_00->_padding_;
      lVar13 = 0;
      uVar16 = 0;
      do {
        lVar13 = lVar13 + 1;
        uVar17 = uVar16 + 1;
        if (lVar13 < lVar19) {
          plVar11 = (longlong *)(lVar13 * 0x80 + (longlong)FVar2);
          do {
            if (bVar4 != (*plVar11 != this_00->_padding_)) break;
            uVar17 = uVar17 + 1;
            lVar13 = lVar13 + 1;
            plVar11 = plVar11 + 0x10;
          } while (lVar13 < lVar19);
        }
        iVar14 = uVar17 - uVar16;
        if (bVar4 == false) {
          DestructItems<FOptimusParameterBinding,int>
                    ((FOptimusParameterBinding *)((longlong)(int)uVar16 * 0x80 + (longlong)FVar2),
                     iVar14);
        }
        else {
          if (uVar20 != uVar16) {
            memmove((longlong *)((longlong)(int)uVar20 * 0x80 + (longlong)FVar2),
                    (longlong *)((longlong)(int)uVar16 * 0x80 + (longlong)FVar2),
                    (longlong)iVar14 << 7);
          }
          uVar20 = uVar20 + iVar14;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        uVar16 = uVar17;
      } while (lVar13 < lVar19);
      local_res10[1].ComparisonIndex.Value = uVar20;
    }
    UpdatePreamble((UOptimusNode_CustomComputeKernel *)&this[-1]._padding_);
    goto LAB_14e211e6c;
  }
  if ((iVar14 != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAddedPinsToRemove.Num() == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                         ,0x26b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppUVar7 = TArrayView<UOptimusNodePin_*_const,int>::operator[](param_1,0);
  this_00 = *ppUVar7;
  if ((this_00->Direction != Input) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupPin->GetDirection() == EOptimusNodePinDirection::Input",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                         ,0x26e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar14 = (this_00->SubPins).ArrayNum;
  if (iVar14 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
LAB_14e211cca:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupPin->GetSubPins().Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                       ,0x26f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else if (iVar14 != 1) goto LAB_14e211cca;
  ppUVar7 = TArrayView<UOptimusNodePin_*_const,int>::operator[](param_1,1);
  local_48.DataPtr = (TObjectPtr<UOptimusNodePin> *)(this_00->SubPins).AllocatorInstance.Data;
  local_48.ArrayNum = (this_00->SubPins).ArrayNum;
  if ((local_48.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pTVar9 = &TArrayView<TObjectPtr<UOptimusNodePin>_const_,int>::operator[](&local_48,0)->field0_0x0;
  if (pTVar9->DebugPtr == (UOptimusNodePin *)0x0) {
    bVar4 = *ppUVar7 == (UOptimusNodePin *)0x0;
  }
  else {
    bVar4 = pTVar9->DebugPtr == *ppUVar7;
  }
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupPin->GetSubPins()[0] == InAddedPinsToRemove[1]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                         ,0x270,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar14 = (int)this->_padding_;
  lVar19 = (longlong)iVar14;
  if (iVar14 != 0) {
    plVar11 = (longlong *)this->_padding_;
    iVar21 = 0;
    bVar4 = *plVar11 != this_00->_padding_;
    lVar13 = 0;
    iVar14 = 0;
    do {
      lVar13 = lVar13 + 1;
      iVar18 = iVar14 + 1;
      if (lVar13 < lVar19) {
        plVar12 = plVar11 + lVar13 * 3;
        do {
          if (bVar4 != (*plVar12 != this_00->_padding_)) break;
          iVar18 = iVar18 + 1;
          lVar13 = lVar13 + 1;
          plVar12 = plVar12 + 3;
        } while (lVar13 < lVar19);
      }
      iVar15 = iVar18 - iVar14;
      if (bVar4 == false) {
        DestructItems<FOptimusSecondaryInputBindingsGroup,int>
                  ((FOptimusSecondaryInputBindingsGroup *)(plVar11 + (longlong)iVar14 * 3),iVar15);
      }
      else {
        if (iVar21 != iVar14) {
          memmove(plVar11 + (longlong)iVar21 * 3,plVar11 + (longlong)iVar14 * 3,
                  (longlong)iVar15 * 0x18);
        }
        iVar21 = iVar21 + iVar15;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar14 = iVar18;
    } while (lVar13 < lVar19);
    *(int *)&this->_padding_ = iVar21;
  }
  UpdatePreamble((UOptimusNode_CustomComputeKernel *)&this[-1]._padding_);
LAB_14e211e6c:
  bVar4 = UOptimusNode::RemovePinDirect((UOptimusNode *)&this[-1]._padding_,this_00);
  return bVar4;
}

// Serialize @ 14e21b910

void __thiscall
UOptimusNode_CustomComputeKernel::Serialize
          (UOptimusNode_CustomComputeKernel *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOptimusObjectVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x00014e21b943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOptimusObjectVersion::GUID);
  return;
}

// Serialize @ 14e21b950

void __thiscall
UOptimusNode_CustomComputeKernel::Serialize
          (UOptimusNode_CustomComputeKernel *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FOptimusObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FOptimusObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUOptimusNode_CustomComputeKernel @ 14e225ca0

void __cdecl
UOptimusNode_CustomComputeKernel::StaticRegisterNativesUOptimusNode_CustomComputeKernel(void)

{
  return;
}

// TryAddPinFromPin @ 14e227c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_CustomComputeKernel::TryAddPinFromPin
          (UOptimusNode_CustomComputeKernel *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FAdderPinAction *param_1,UOptimusNodePin *param_2,FName param_3)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FNameEntryId FVar8;
  int iVar9;
  UOptimusNode *pUVar10;
  UClass *pUVar11;
  FName FVar12;
  FName FVar13;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar14;
  ForAnyElementType FVar15;
  UObject *pUVar16;
  uint uVar17;
  FName *pFVar18;
  FName FVar19;
  ulonglong uVar20;
  FName *pFVar21;
  ulonglong uVar22;
  uint *puVar23;
  undefined1 auStackY_2f8 [32];
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  ForAnyElementType local_298;
  uint local_290;
  uint local_28c;
  FName local_288;
  FName local_280;
  UOptimusNodePin *local_278;
  UOptimusNodePin *local_270;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  FAdderPinAction *local_240;
  FName local_238;
  FName local_230;
  TPersistentObjectPtr<FSoftObjectPath> local_228;
  FOptimusDataDomain local_200;
  undefined2 local_1c0;
  undefined1 local_1b8 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_1b0;
  int local_188;
  undefined1 local_184 [16];
  undefined1 local_174 [16];
  undefined1 local_164 [12];
  TSharedPtr<FOptimusDataType_const_,1> local_158;
  TSharedPtr<FOptimusDataType_const_,1> local_148;
  undefined1 local_138 [16];
  FSoftObjectPath local_128;
  undefined4 local_f0;
  int iStack_ec;
  undefined1 local_d8 [40];
  int local_b0;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  FOptimusPinTraversalContext local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  local_240 = param_1;
  if (param_1->NewPinDirection == Output) {
    FVar19 = (FName)&this->_padding_;
LAB_14e228252:
    if (FVar19 != (FName)0x0) {
      if (FVar12 != (FName)0x0) {
        UOptimusNodePin::SetIsExpanded((UOptimusNodePin *)FVar12,true);
      }
      local_260 = 0;
      local_228.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_228.ObjectID.AssetPath.AssetName.Number = 0;
      local_228.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_228.ObjectID.AssetPath.PackageName.Number = 0;
      local_238.ComparisonIndex.Value = 0;
      local_238.Number = 0;
      local_230.ComparisonIndex.Value = 0;
      local_230.Number = 0;
      local_228.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.ObjectID.SubPathString.Data.ArrayNum = 0;
      local_228.ObjectID.SubPathString.Data.ArrayMax = 0;
      local_228.WeakPtr.ObjectIndex = 0;
      local_228.WeakPtr.ObjectSerialNumber = 0;
      FUtf8String::Reset(&local_228.ObjectID.SubPathString,0);
      local_258 = 0;
      local_230.ComparisonIndex.Value = 0;
      local_230.Number = 0;
      local_250 = 0;
      local_228.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_228.ObjectID.AssetPath.AssetName.Number = 0;
      local_228.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_228.ObjectID.AssetPath.PackageName.Number = 0;
      local_228.WeakPtr.ObjectIndex = 0;
      local_228.WeakPtr.ObjectSerialNumber = 0;
      FUtf8String::Reset(&local_228.ObjectID.SubPathString,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FOptimusDataDomain::FOptimusDataDomain(&local_200);
      local_1c0 = 0;
      plVar2 = &this[-1]._padding_;
      Optimus::GetSanitizedNameForHlsl((FName)&local_280);
      bVar6 = ::FName::Equals(local_280,NumThreadsReservedName);
      if (bVar6) {
        local_280.Number = 1;
      }
      FVar13 = (FName)GetPrimaryGroupPin_Internal((UOptimusNode_CustomComputeKernel *)plVar2);
      if ((FVar12 == (FName)0x0) || (FVar12 == FVar13)) {
        local_280 = UOptimusNode::GetAvailablePinNameStable
                              ((UObject *)(local_174 + 8),(FName)plVar2);
        pUVar16 = (UObject *)local_164;
        local_280 = *(FName *)local_280;
      }
      else {
        pUVar16 = (UObject *)local_174;
        FVar13 = FVar12;
      }
      local_280 = UOptimusNode::GetAvailablePinNameStable(pUVar16,FVar13);
      local_280 = *(FName *)local_280;
      local_238 = local_280;
      FOptimusDataTypeRef::Resolve(&param_2->DataType,&local_158);
      local_1b8._0_4_ = 0;
      local_1b8._4_4_ = 0;
      local_1b0.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_1b0.ObjectID.AssetPath.AssetName.Number = 0;
      local_1b0.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_1b0.ObjectID.AssetPath.PackageName.Number = 0;
      local_1b0.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.ObjectID.SubPathString.Data.ArrayNum = 0;
      local_1b0.ObjectID.SubPathString.Data.ArrayMax = 0;
      local_1b0.WeakPtr.ObjectIndex = 0;
      local_1b0.WeakPtr.ObjectSerialNumber = 0;
      local_248 = 0;
      FUtf8String::Reset(&local_1b0.ObjectID.SubPathString,0);
      local_148.Object = local_158.Object;
      local_148.SharedReferenceCount.ReferenceController =
           local_158.SharedReferenceCount.ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_1b8,&local_148);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      local_230.ComparisonIndex.Value = local_1b8._0_4_;
      local_230.Number = local_1b8._4_4_;
      TPersistentObjectPtr<FSoftObjectPath>::operator=(&local_228,&local_1b0);
      if (local_1b0.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      local_200.Type = (param_2->DataDomain).Type;
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (&local_200.DimensionNames,&(param_2->DataDomain).DimensionNames);
      local_200.Multiplier = (param_2->DataDomain).Multiplier;
      ::FString::operator=(&local_200.Expression,&(param_2->DataDomain).Expression);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (&local_200.LevelNames_DEPRECATED,&(param_2->DataDomain).LevelNames_DEPRECATED);
      if (((*(FName **)FVar19 <= &local_238) &&
          (&local_238 < *(FName **)FVar19 + (longlong)*(int *)((longlong)FVar19 + 0xc) * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar14;
      }
      iVar9 = *(int *)((longlong)FVar19 + 8);
      if (iVar9 == *(int *)((longlong)FVar19 + 0xc)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x880,(ForAnyElementType *)FVar19,(int *)((longlong)FVar19 + 0xc));
      }
      *(int *)((longlong)FVar19 + 8) = iVar9 + 1;
      pFVar21 = (FName *)((longlong)iVar9 * 0x80 + *(longlong *)FVar19);
      *pFVar21 = local_238;
      pFVar21[1] = local_230;
      pFVar21[2].ComparisonIndex = (FNameEntryId)local_228.WeakPtr.ObjectIndex;
      pFVar21[2].Number = local_228.WeakPtr.ObjectSerialNumber;
      FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(pFVar21 + 3),&local_228.ObjectID);
      FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)(pFVar21 + 7),&local_200);
      *(undefined1 *)&pFVar21[0xf].ComparisonIndex.Value = (undefined1)local_1c0;
      *(undefined1 *)((longlong)&pFVar21[0xf].ComparisonIndex.Value + 1) = local_1c0._1_1_;
      UpdatePreamble((UOptimusNode_CustomComputeKernel *)plVar2);
      local_138._0_4_ = local_230.ComparisonIndex.Value;
      local_138._4_4_ = local_230.Number;
      local_138._8_4_ = local_228.WeakPtr.ObjectIndex;
      local_138._12_4_ = local_228.WeakPtr.ObjectSerialNumber;
      FSoftObjectPath::FSoftObjectPath(&local_128,&local_228.ObjectID);
      local_278 = UOptimusNode::AddPinDirect
                            ((UOptimusNode *)plVar2,local_238,local_240->NewPinDirection,&local_200,
                             (FOptimusDataTypeRef *)local_138,(UOptimusNodePin *)0x0,
                             (UOptimusNodePin *)FVar12);
      if (((local_2a8.Data <= (FScriptContainerElement *)&local_278) &&
          ((FScriptContainerElement *)&local_278 <
           local_2a8.Data + (longlong)(int)local_2a0._4_4_ * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar14;
      }
      if ((uint)local_2a0 == local_2a0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_2a8,(int *)((longlong)&local_2a0 + 4));
        *(UOptimusNodePin **)(local_2a8.Data + (longlong)iVar9 * 8) = local_278;
        local_2a0._0_4_ = iVar9;
      }
      else {
        *(UOptimusNodePin **)(local_2a8.Data + (longlong)(int)(uint)local_2a0 * 8) = local_278;
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      }
      local_2a0._0_4_ = (uint)local_2a0 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data = local_2a8.Data;
      __return_storage_ptr__->ArrayNum = (uint)local_2a0;
      __return_storage_ptr__->ArrayMax = local_2a0._4_4_;
      local_2a0 = 0;
      local_2a8.Data = (FScriptContainerElement *)0x0;
      if (local_200.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_200.LevelNames_DEPRECATED.AllocatorInstance.Data);
      }
      if (local_200.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Expression.Data.AllocatorInstance.Data);
      }
      FVar15.Data = local_228.ObjectID.SubPathString.Data.AllocatorInstance.Data;
      if (local_200.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.DimensionNames.AllocatorInstance.Data);
        FVar15.Data = local_228.ObjectID.SubPathString.Data.AllocatorInstance.Data;
      }
      goto LAB_14e2283de;
    }
  }
  else if (param_1->NewPinDirection == Input) {
    if (param_1->Key != AdderPinActionKeyAddNewGroup) {
      FVar19 = this[-1].Category;
      local_298.Data = (FScriptContainerElement *)0x0;
      local_28c = 0;
      uVar7 = this[-1].KernelName.Name.ComparisonIndex.Value;
      local_290 = 0;
      FVar13 = FVar12;
      if ((int)uVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar14;
        }
        FVar13.Number = 0;
        FVar13.ComparisonIndex.Value = local_290;
      }
      FVar3 = (FName)((longlong)FVar19 + (longlong)(int)uVar7 * 8);
      for (; FVar8 = FVar13.ComparisonIndex.Value, FVar19 != FVar3;
          FVar19 = (FName)((longlong)FVar19 + 8)) {
        local_268 = *(longlong *)FVar19;
        if ((*(char *)(local_268 + 0x29) == '\x01') && (*(char *)(local_268 + 0x28) != '\0')) {
          if ((local_298.Data <= (FScriptContainerElement *)&local_268) &&
             (((FScriptContainerElement *)&local_268 < local_298.Data + (longlong)(int)local_28c * 8
              && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), FVar8.Value = local_290, bVar6)))) {
            pcVar5 = (code *)swi(3);
            pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar14;
          }
          if (FVar8.Value == local_28c) {
            FVar8.Value = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_298,(int *)&local_28c);
          }
          local_290 = FVar8.Value + 1;
          *(longlong *)(local_298.Data + (longlong)(int)FVar8.Value * 8) = local_268;
          FVar13.Number = 0;
          FVar13.ComparisonIndex.Value = local_290;
        }
      }
      uVar20 = 0;
      uVar22 = uVar20;
      FVar19 = FVar12;
      if (0 < (int)FVar8.Value) {
        do {
          uVar17 = (uint)uVar20;
          uVar7 = 0;
          if ((int)uVar17 < (int)FVar13.ComparisonIndex.Value.Value) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar14;
            }
            FVar13.Number = 0;
            FVar13.ComparisonIndex.Value = local_290;
          }
          FVar3 = *(FName *)(local_298.Data + uVar22);
          if (*(FName *)((longlong)FVar3 + 0x18) == local_240->Key) {
            FVar12 = FVar3;
            if (uVar17 != 0) {
              pFVar18 = (FName *)this->_padding_;
              pFVar21 = pFVar18 + (longlong)(int)this->_padding_ * 3;
              goto joined_r0x00014e228393;
            }
            FVar19 = (FName)&this->_padding_;
            break;
          }
          uVar20 = (ulonglong)(uVar17 + 1);
          uVar22 = uVar22 + 8;
        } while ((int)(uVar17 + 1) < (int)FVar13.ComparisonIndex.Value.Value);
      }
LAB_14e228243:
      if (local_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data);
      }
      goto LAB_14e228252;
    }
    local_88.ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    local_88.ReferenceNesting.ArrayNum = 0;
    local_88.ReferenceNesting.ArrayMax = 4;
    pUVar10 = UOptimusNodePin::GetOwningNode(param_2);
    FVar19 = (FName)pUVar10->_padding_;
    if (FVar19 == (FName)0x0) {
LAB_14e227d15:
      FVar19 = FVar12;
    }
    else {
      pUVar11 = UOptimusNodeGraph::StaticClass();
      iVar9 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar19 + 0x10) + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar19 + 0x10) + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar11->_padding_)) goto LAB_14e227d15;
    }
    UOptimusNodeGraph::GetComponentSourceBindingsForPin
              ((UOptimusNodeGraph *)FVar19,
               (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                *)local_d8,param_2,&local_88);
    if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)local_88.ReferenceNesting.AllocatorInstance.SecondaryData);
    }
    if ((local_d8._8_4_ == local_a4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComponentBindings.Num() != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                           ,0x1e4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
    iStack_ec = 0;
    if (local_b0 != 0) {
      puVar23 = (uint *)(local_d8 + 0x10);
      if ((uint *)local_d8._32_8_ != (uint *)0x0) {
        puVar23 = (uint *)local_d8._32_8_;
      }
      uVar7 = *puVar23;
      FVar19 = FVar12;
      uVar17 = 0;
      while (uVar7 == 0) {
        FVar12.ComparisonIndex.Value = FVar12.ComparisonIndex.Value.Value + 1;
        FVar12.Number = 0;
        FVar19.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value + 0x20;
        FVar19.Number = 0;
        iStack_ec = local_b0;
        if ((int)(local_b0 + -1 + (local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 <
            (int)FVar12.ComparisonIndex.Value) goto LAB_14e227e00;
        uVar17 = FVar19.ComparisonIndex.Value;
        uVar7 = puVar23[(int)FVar12.ComparisonIndex.Value];
      }
      uVar22 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_188 = (int)lVar4;
      iStack_ec = local_188 + -1 + uVar17;
      if (local_b0 < iStack_ec) {
        iStack_ec = local_b0;
      }
    }
LAB_14e227e00:
    local_f0 = 0xffffffff;
    Optimus::GetSanitizedNameForHlsl((FName)&local_288);
    bVar6 = ::FName::Equals(local_288,NumThreadsReservedName);
    if (bVar6) {
      local_288.Number = 1;
    }
    FVar12 = (FName)GetPrimaryGroupPin_Internal
                              ((UOptimusNode_CustomComputeKernel *)&this[-1]._padding_);
    local_288 = UOptimusNode::GetAvailablePinNameStable
                          ((UObject *)local_184,(FName)&this[-1]._padding_);
    local_288 = *(FName *)local_288;
    local_288 = UOptimusNode::GetAvailablePinNameStable((UObject *)(local_184 + 8),FVar12);
    plVar2 = &this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    local_288 = *(FName *)local_288;
    iVar9 = (int)this->_padding_;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)plVar2,piVar1);
    }
    *(int *)&this->_padding_ = iVar9 + 1;
    pFVar21 = (FName *)(*plVar2 + (longlong)iVar9 * 0x18);
    DefaultConstructItems<FOptimusSecondaryInputBindingsGroup,int>(pFVar21,1);
    *pFVar21 = local_288;
    iVar9 = (int)this->_padding_;
    uVar17 = iVar9 - 1;
    uVar7 = 0;
    if ((int)uVar17 < iVar9) {
      uVar7 = ~uVar17 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
    FVar19 = (FName)(*plVar2 + ((longlong)((int)this->_padding_ + -1) * 3 + 1) * 8);
    local_270 = UOptimusNode::AddGroupingPinDirect
                          ((UOptimusNode *)&this[-1]._padding_,local_288,Input,
                           (UOptimusNodePin *)0x0);
    if (((local_2a8.Data <= (FScriptContainerElement *)&local_270) &&
        ((FScriptContainerElement *)&local_270 < local_2a8.Data + (longlong)(int)local_2a0._4_4_ * 8
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
    uVar7 = (uint)local_2a0;
    if ((uint)local_2a0 == local_2a0._4_4_) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_2a8,(int *)((longlong)&local_2a0 + 4));
    }
    iVar9 = uVar7 + 1;
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar9);
    *(UOptimusNodePin **)(local_2a8.Data + (longlong)(int)uVar7 * 8) = local_270;
    uVar17 = 0;
    if ((int)uVar7 < iVar9) {
      uVar17 = ~uVar7 >> 0x1f;
    }
    if (uVar17 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar14;
      }
      iVar9 = (uint)local_2a0;
    }
    FVar12 = *(FName *)(local_2a8.Data + (longlong)(iVar9 + -1) * 8);
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
    goto LAB_14e228252;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3516376994675687967>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                     ,0x21f,"BindingArray");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar14;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  goto LAB_14e22878a;
joined_r0x00014e228393:
  if (pFVar18 == pFVar21) goto LAB_14e2283a3;
  if (*pFVar18 == *(FName *)((longlong)FVar3 + 0x18)) {
    if (pFVar18 != (FName *)0x0) {
      FVar19 = (FName)(pFVar18 + 1);
      goto LAB_14e228243;
    }
    goto LAB_14e2283a3;
  }
  pFVar18 = pFVar18 + 3;
  goto joined_r0x00014e228393;
LAB_14e2283a3:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3516376994675687954>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_CustomComputeKernel.cpp"
                     ,0x212,"Group");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar14;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar15.Data = local_298.Data;
LAB_14e2283de:
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
LAB_14e22878a:
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  return __return_storage_ptr__;
}

// UpdatePreamble @ 14e22ddc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e22e896) */
/* WARNING: Removing unreachable block (ram,0x00014e22e3ca) */
/* WARNING: Removing unreachable block (ram,0x00014e22e9a3) */
/* WARNING: Removing unreachable block (ram,0x00014e22e24e) */
/* WARNING: Removing unreachable block (ram,0x00014e22e55f) */

void __thiscall
UOptimusNode_CustomComputeKernel::UpdatePreamble(UOptimusNode_CustomComputeKernel *this)

{
  int *piVar1;
  FOptimusParameterBindingArray *pFVar2;
  FOptimusShaderText *this_00;
  FName *pFVar3;
  FOptimusParameterBinding *pFVar4;
  void *_Src;
  code *pcVar5;
  FIdentityFunctor FVar6;
  ForAnyElementType *pFVar7;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FString *pFVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FName *pFVar17;
  longlong lVar18;
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *pTVar19;
  FString *pFVar20;
  ForAnyElementType FVar21;
  int iVar22;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar23;
  undefined1 auStackY_2d8 [32];
  FIdentityFunctor local_288;
  undefined1 local_287 [7];
  ForAnyElementType local_280;
  undefined8 local_278;
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> local_270;
  undefined1 local_260;
  undefined1 local_25f;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined1 local_25c [4];
  ForAnyElementType local_258;
  undefined8 local_250;
  ForAnyElementType local_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined1 local_237 [7];
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString *local_1e0;
  ulonglong local_1d8;
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  UOptimusNode_CustomComputeKernel *local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  ForAnyElementType *local_180;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_178;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_170;
  FString **local_168;
  undefined1 local_160 [8];
  FName local_158;
  FName local_150;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_148;
  FString local_140;
  ForAnyElementType **local_130;
  ForAnyElementType *local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_d8;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_170 = &local_88;
  local_88._0_8_ = 0;
  local_168 = &local_1e0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_1e0 = (FString *)0x0;
  local_1d8 = 0;
  local_1b8 = this;
  `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_1>::
  operator()<FOptimusParameterBindingArray>(&local_170,&this->InputBindingArray);
  pFVar2 = &this->OutputBindingArray;
  `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_1>::
  operator()<FOptimusParameterBindingArray>(&local_170,pFVar2);
  iVar11 = (this->SecondaryInputBindingGroups).ArrayNum;
  pFVar16 = (this->SecondaryInputBindingGroups).AllocatorInstance.Data;
  pFVar15 = pFVar16 + (longlong)iVar11 * 0x18;
  while( true ) {
    if ((this->SecondaryInputBindingGroups).ArrayNum != iVar11) {
      local_260 = 0;
      `TCheckedPointerIterator<FOptimusSecondaryInputBindingsGroup,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_260);
    }
    if (pFVar16 == pFVar15) break;
    `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_1>::
    operator()<FOptimusParameterBindingArray>
              (&local_170,(FOptimusParameterBindingArray *)(pFVar16 + 8));
    pFVar16 = pFVar16 + 0x18;
  }
  uVar10 = (this->InputBindingArray).InnerArray.ArrayNum;
  local_180 = &local_280;
  pFVar4 = (FOptimusParameterBinding *)(this->InputBindingArray).InnerArray.AllocatorInstance.Data;
  local_178 = &local_d8;
  local_130 = &local_180;
  local_128 = &local_280;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = 0;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = uVar10;
  if (uVar10 == 0) {
    local_270.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,uVar10,0,&local_270.AllocatorInstance,uVar10,&local_270.ArrayMax);
    ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
              (local_270.AllocatorInstance.Data,pFVar4,uVar10);
  }
  AlgoImpl::
  StableSortInternal<FOptimusParameterBinding,FIdentityFunctor,TDereferenceWrapper<FOptimusParameterBinding,_UOptimusNode_CustomComputeKernel::UpdatePreamble_::__l2::<lambda_2>_>_>
            ((FOptimusParameterBinding *)local_270.AllocatorInstance.Data,local_270.ArrayNum,
             local_288,(<lambda_2> *)local_287);
  `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_4>::operator()
            (&local_130,&local_270);
  if (&local_270 != &pFVar2->InnerArray) {
    DestructItems<FOptimusParameterBinding,int>
              ((FOptimusParameterBinding *)local_270.AllocatorInstance.Data,local_270.ArrayNum);
    uVar10 = (this->OutputBindingArray).InnerArray.ArrayNum;
    pFVar4 = (FOptimusParameterBinding *)(pFVar2->InnerArray).AllocatorInstance.Data;
    local_270.ArrayNum = uVar10;
    if ((uVar10 == 0) && (local_270.ArrayMax == 0)) {
      local_270.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,uVar10,local_270.ArrayMax,&local_270.AllocatorInstance,uVar10,
                 &local_270.ArrayMax);
      ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
                (local_270.AllocatorInstance.Data,pFVar4,uVar10);
    }
  }
  AlgoImpl::
  StableSortInternal<FOptimusParameterBinding,FIdentityFunctor,TDereferenceWrapper<FOptimusParameterBinding,_UOptimusNode_CustomComputeKernel::UpdatePreamble_::__l2::<lambda_2>_>_>
            ((FOptimusParameterBinding *)local_270.AllocatorInstance.Data,local_270.ArrayNum,
             local_288,(<lambda_2> *)local_287);
  uVar14 = (ulonglong)local_270.ArrayNum;
  local_148 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
              (local_270.AllocatorInstance.Data + uVar14 * 0x80);
  local_1c0 = local_270.ArrayNum;
  pTVar23 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(local_270.AllocatorInstance.Data + 0x40);
  while( true ) {
    pTVar8 = local_148;
    if (local_270.ArrayNum != (uint)uVar14) {
      local_25f = 0;
      `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_25f);
    }
    this_01 = local_178;
    FVar6 = local_288;
    if (pTVar23 + -4 == pTVar8) {
      pFVar17 = (FName *)(local_1b8->SecondaryInputBindingGroups).AllocatorInstance.Data;
      iVar11 = (local_1b8->SecondaryInputBindingGroups).ArrayNum;
      pTVar19 = (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)(pFVar17 + 1);
      pFVar3 = pFVar17 + (longlong)iVar11 * 3;
      do {
        if ((local_1b8->SecondaryInputBindingGroups).ArrayNum != iVar11) {
          local_288 = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<FOptimusSecondaryInputBindingsGroup,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_288);
        }
        if (pFVar17 == pFVar3) {
          this_00 = &local_1b8->ShaderSource;
          ::FString::Reset(&this_00->Declarations,0);
          if ((int)local_1d8 != 0) {
            ::FString::AppendChars(&this_00->Declarations,L"// Type declarations\n",0x15);
            iVar11 = (int)local_1d8;
            uVar14 = (ulonglong)(int)local_1d8;
            bVar9 = true;
            pFVar20 = local_1e0 + uVar14;
            local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_190.Data.ArrayNum = 0;
            local_190.Data.ArrayMax = 0;
            pFVar13 = local_1e0;
            while( true ) {
              if ((int)uVar14 != iVar11) {
                `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_238);
              }
              if (pFVar13 == pFVar20) break;
              if (bVar9) {
                bVar9 = false;
              }
              else {
                ::FString::AppendChars(&local_190,L"\n",1);
              }
              iVar12 = (pFVar13->Data).ArrayNum;
              iVar22 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar22 = 0;
              }
              ::FString::AppendChars
                        (&local_190,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar22);
              uVar14 = local_1d8 & 0xffffffff;
              pFVar13 = pFVar13 + 1;
            }
            ::FString::ConcatFC(&local_120,&local_190,L"\n");
            iVar11 = local_120.Data.ArrayNum + -1;
            if (local_120.Data.ArrayNum == 0) {
              iVar11 = 0;
            }
            ::FString::AppendChars
                      (&this_00->Declarations,(wchar_t *)local_120.Data.AllocatorInstance.Data,
                       iVar11);
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
            }
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
          }
          if ((int)local_278 != 0) {
            ::FString::AppendChars
                      (&this_00->Declarations,L"// Parameters and resource read/write functions\n",
                       0x30);
            iVar11 = (int)local_278;
            uVar14 = (ulonglong)(int)local_278;
            bVar9 = true;
            pFVar15 = local_280.Data + uVar14 * 0x10;
            local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b0.Data.ArrayNum = 0;
            local_1b0.Data.ArrayMax = 0;
            FVar21.Data = local_280.Data;
            while( true ) {
              if ((int)uVar14 != iVar11) {
                `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_237);
              }
              if (FVar21.Data == pFVar15) break;
              if (bVar9) {
                bVar9 = false;
              }
              else {
                ::FString::AppendChars(&local_1b0,L"\n",1);
              }
              iVar12 = *(int *)(FVar21.Data + 8) + -1;
              if (*(int *)(FVar21.Data + 8) == 0) {
                iVar12 = 0;
              }
              ::FString::AppendChars(&local_1b0,*(wchar_t **)FVar21.Data,iVar12);
              uVar14 = local_278 & 0xffffffff;
              FVar21.Data = FVar21.Data + 0x10;
            }
            iVar11 = local_1b0.Data.ArrayNum + -1;
            if (local_1b0.Data.ArrayNum == 0) {
              iVar11 = 0;
            }
            ::FString::AppendChars
                      (&this_00->Declarations,(wchar_t *)local_1b0.Data.AllocatorInstance.Data,
                       iVar11);
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
          }
          ::FString::AppendChars(&this_00->Declarations,"\n// Resource Indexing\n",0x16);
          ::FString::AppendChars
                    (&this_00->Declarations,"uint Index;\t// From SV_DispatchThreadID.x\n",0x2a);
          ::FString::AppendChars(&this_00->Declarations,"uint3 ReadNumThreads();\n",0x18);
          DestructItems<FOptimusParameterBinding,int>
                    ((FOptimusParameterBinding *)local_270.AllocatorInstance.Data,local_270.ArrayNum
                    );
          if ((FOptimusParameterBinding *)local_270.AllocatorInstance.Data !=
              (FOptimusParameterBinding *)0x0) {
            FMemory::Free(local_270.AllocatorInstance.Data);
          }
          local_d8.HashSize = 0;
          if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_d8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_d8.Elements);
          DestructItems<FString,int>((FString *)local_280.Data,(int)local_278);
          if (local_280.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Data);
          }
          DestructItems<FString,int>(local_1e0,(int)local_1d8);
          if (local_1e0 != (FString *)0x0) {
            FMemory::Free(local_1e0);
          }
          local_40 = 0;
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_88);
          return;
        }
        if (&local_270 != pTVar19) {
          DestructItems<FOptimusParameterBinding,int>
                    ((FOptimusParameterBinding *)local_270.AllocatorInstance.Data,local_270.ArrayNum
                    );
          uVar10 = pTVar19->ArrayNum;
          pFVar4 = (FOptimusParameterBinding *)(pTVar19->AllocatorInstance).Data;
          local_270.ArrayNum = uVar10;
          if ((uVar10 == 0) && (local_270.ArrayMax == 0)) {
            local_270.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,uVar10,local_270.ArrayMax,&local_270.AllocatorInstance,uVar10,
                       &local_270.ArrayMax);
            ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
                      (local_270.AllocatorInstance.Data,pFVar4,uVar10);
          }
        }
        if (local_270.ArrayNum != 0) {
          AlgoImpl::
          IntroSortInternal<FOptimusParameterBinding,int,FIdentityFunctor,TDereferenceWrapper<FOptimusParameterBinding,_UOptimusNode_CustomComputeKernel::UpdatePreamble_::__l2::<lambda_2>_>_>
                    ((FOptimusParameterBinding *)local_270.AllocatorInstance.Data,local_270.ArrayNum
                     ,FVar6,(<lambda_2> *)local_287);
          ::FName::ToString(pFVar17,&local_140);
          ::FString::PrintfImpl(&local_200,L"namespace %s {");
          if (((local_280.Data <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 <
               local_280.Data + (longlong)local_278._4_4_ * 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (int)local_278;
          if ((int)local_278 == local_278._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_280,(int *)((longlong)&local_278 + 4));
          }
          pFVar15 = local_280.Data + (longlong)iVar12 * 0x10;
          *(undefined8 *)pFVar15 = 0;
          *(FScriptContainerElement **)pFVar15 = local_200.Data.AllocatorInstance.Data;
          *(int *)(pFVar15 + 8) = local_200.Data.ArrayNum;
          *(int *)(pFVar15 + 0xc) = local_200.Data.ArrayMax;
          local_200.Data.ArrayNum = 0;
          local_200.Data.ArrayMax = 0;
          local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_278._0_4_ = iVar12 + 1;
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          `UOptimusNode_CustomComputeKernel::UpdatePreamble'::__l2::<lambda_4>::operator()
                    (&local_130,&local_270);
          ::FString::FString(&local_1f0,"}");
          if (((local_280.Data <= (FScriptContainerElement *)&local_1f0) &&
              ((FScriptContainerElement *)&local_1f0 <
               local_280.Data + (longlong)local_278._4_4_ * 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (int)local_278;
          if ((int)local_278 == local_278._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_280,(int *)((longlong)&local_278 + 4));
          }
          local_278 = CONCAT44(local_278._4_4_,iVar12 + 1);
          pFVar15 = local_280.Data + (longlong)iVar12 * 0x10;
          *(undefined8 *)pFVar15 = 0;
          *(FScriptContainerElement **)pFVar15 = local_1f0.Data.AllocatorInstance.Data;
          local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar15 + 8) = local_1f0.Data.ArrayNum;
          *(int *)(pFVar15 + 0xc) = local_1f0.Data.ArrayMax;
          local_1f0.Data.ArrayNum = 0;
          local_1f0.Data.ArrayMax = 0;
        }
        pFVar17 = pFVar17 + 3;
        pTVar19 = (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
                  &pTVar19[1].ArrayNum;
      } while( true );
    }
    if (pTVar23->ArrayNum != 0) {
      uVar10 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>(pTVar23);
      iVar11 = TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>(this_01,uVar10,pTVar23)
      ;
      if (iVar11 == -1) {
        pFVar17 = (FName *)(pTVar23->AllocatorInstance).Data;
        iVar11 = pTVar23->ArrayNum;
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        pFVar3 = pFVar17 + iVar11;
        while( true ) {
          if (pTVar23->ArrayNum != iVar11) {
            local_25e = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_25e);
          }
          pFVar7 = local_180;
          if (pFVar17 == pFVar3) break;
          local_158 = *pFVar17;
          pFVar13 = ::FName::ToString(&local_158,&local_110);
          iVar22 = (pFVar13->Data).ArrayNum;
          iVar12 = iVar22 + -1;
          if (iVar22 == 0) {
            iVar12 = 0;
          }
          ::FString::AppendChars
                    (&local_1a0,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar12);
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          pFVar17 = pFVar17 + 1;
        }
        ::FString::PrintfImpl(&local_230,L"uint Num%s();");
        if (((pFVar7->Data <= (FScriptContainerElement *)&local_230) &&
            ((FScriptContainerElement *)&local_230 <
             pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = *(int *)&pFVar7[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar7,piVar1);
        }
        *(int *)&pFVar7[1].Data = iVar11 + 1;
        pFVar15 = pFVar7->Data + (longlong)iVar11 * 0x10;
        *(undefined8 *)pFVar15 = 0;
        *(FScriptContainerElement **)pFVar15 = local_230.Data.AllocatorInstance.Data;
        *(int *)(pFVar15 + 8) = local_230.Data.ArrayNum;
        *(int *)(pFVar15 + 0xc) = local_230.Data.ArrayMax;
        local_230.Data.ArrayNum = 0;
        local_230.Data.ArrayMax = 0;
        local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_const_&>
                  (local_178,(TArray<FName,TSizedDefaultAllocator<32>_> *)local_160,(bool *)pTVar23)
        ;
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar17 = (FName *)(pTVar23->AllocatorInstance).Data;
    iVar11 = pTVar23->ArrayNum;
    local_248.Data = (FScriptContainerElement *)0x0;
    local_240 = 0;
    local_258.Data = (FScriptContainerElement *)0x0;
    pFVar3 = pFVar17 + iVar11;
    local_250 = 0;
    while( true ) {
      if (pTVar23->ArrayNum != iVar11) {
        local_25d = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_25d);
      }
      if (pFVar17 == pFVar3) break;
      local_150 = *pFVar17;
      ::FName::ToString(&local_150,&local_100);
      ::FString::PrintfImpl(&local_220,L"%sIndex");
      if (((local_258.Data <= (FScriptContainerElement *)&local_220) &&
          ((FScriptContainerElement *)&local_220 < local_258.Data + (longlong)local_250._4_4_ * 0x10
          )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (int)local_250;
      if ((int)local_250 == local_250._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_258,(int *)((longlong)&local_250 + 4));
      }
      local_250 = CONCAT44(local_250._4_4_,iVar12 + 1);
      pFVar15 = local_258.Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar15 = 0;
      *(FScriptContainerElement **)pFVar15 = local_220.Data.AllocatorInstance.Data;
      *(int *)(pFVar15 + 8) = local_220.Data.ArrayNum;
      *(int *)(pFVar15 + 0xc) = local_220.Data.ArrayMax;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      pFVar17 = pFVar17 + 1;
    }
    iVar11 = (int)local_250;
    pFVar15 = local_258.Data + (longlong)(int)local_250 * 0x10;
    FVar21.Data = local_258.Data;
    while( true ) {
      if ((int)local_250 != iVar11) {
        local_25c[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_25c);
      }
      if (FVar21.Data == pFVar15) break;
      local_1c8 = *(int *)(FVar21.Data + 8);
      lVar18 = (longlong)local_1c8;
      _Src = *(void **)FVar21.Data;
      local_1d0.Data = (FScriptContainerElement *)0x0;
      if (local_1c8 == 0) {
        local_1c4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1c8,0,&local_1d0,local_1c8,&local_1c4);
        memcpy(local_1d0.Data,_Src,lVar18 * 2);
      }
      ::FString::PrintfImpl(&local_210,L"uint %s");
      if (((local_248.Data <= (FScriptContainerElement *)&local_210) &&
          ((FScriptContainerElement *)&local_210 < local_248.Data + (longlong)local_240._4_4_ * 0x10
          )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (int)local_240;
      if ((int)local_240 == local_240._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_248,(int *)((longlong)&local_240 + 4));
      }
      local_240 = CONCAT44(local_240._4_4_,iVar12 + 1);
      pFVar16 = local_248.Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar16 = 0;
      *(FScriptContainerElement **)pFVar16 = local_210.Data.AllocatorInstance.Data;
      *(int *)(pFVar16 + 8) = local_210.Data.ArrayNum;
      *(int *)(pFVar16 + 0xc) = local_210.Data.ArrayMax;
      local_210.Data.ArrayNum = 0;
      local_210.Data.ArrayMax = 0;
      local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data);
      }
      FVar21.Data = FVar21.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_258.Data,(int)local_250);
    if (local_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data);
    }
    pFVar15 = (FScriptContainerElement *)
              GetDeclarationForBinding(&local_f0,(FOptimusParameterBinding *)(pTVar23 + -4),false);
    if (((local_280.Data <= pFVar15) &&
        (pFVar15 < local_280.Data + (longlong)local_278._4_4_ * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar11 = (int)local_278;
    if ((int)local_278 == local_278._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_280,(int *)((longlong)&local_278 + 4));
    }
    local_278 = CONCAT44(local_278._4_4_,iVar11 + 1);
    pFVar16 = local_280.Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar16 = 0;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar15;
    *(undefined8 *)pFVar15 = 0;
    *(int *)(pFVar16 + 8) = *(int *)(pFVar15 + 8);
    *(int *)(pFVar16 + 0xc) = *(int *)(pFVar15 + 0xc);
    *(undefined8 *)(pFVar15 + 8) = 0;
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_248.Data,(int)local_240);
    if (local_248.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data);
    }
    pTVar23 = pTVar23 + 8;
    uVar14 = (ulonglong)local_1c0;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ValidateConnection @ 14e22eff0

bool __thiscall
UOptimusNode_CustomComputeKernel::ValidateConnection
          (UOptimusNode_CustomComputeKernel *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2,
          FString *param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNodePin *pUVar4;
  
  if (param_1->Direction == Input) {
    while (pUVar4 = param_1, param_1 = (UOptimusNodePin *)pUVar4->_padding_,
          param_1 != (UOptimusNodePin *)0x0) {
      pUVar3 = UOptimusNodePin::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) break;
    }
    if (((FName)pUVar4->_padding_ != PrimaryGroupPinName) &&
       (bVar2 = DoesSourceSupportUnifiedDispatch(param_2), !bVar2)) {
      if (param_3 != (FString *)0x0) {
        ::FString::operator=
                  (param_3,
                   L"Can\'t link due to data interface not supporting unified dispatch, consider insert kernel inbetween"
                  );
      }
      return false;
    }
  }
  return true;
}

// ValidateForCompile @ 14e22fea0

TOptional<FText> * __thiscall
UOptimusNode_CustomComputeKernel::ValidateForCompile
          (UOptimusNode_CustomComputeKernel *this,TOptional<FText> *__return_storage_ptr__,
          FOptimusPinTraversalContext *param_1)

{
  TOptional<FText>_u_0 local_18;
  
  UOptimusNode_ComputeKernelBase::ValidateForCompile
            ((UOptimusNode_ComputeKernelBase *)this,(TOptional<FText> *)&local_18.TypedValue,param_1
            );
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  if (local_18.TypedValue.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)__return_storage_ptr__,&local_18.TypedValue);
    if (local_18.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18.TypedValue.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// _getUObject @ 14e238e60

UObject * __thiscall
UOptimusNode_CustomComputeKernel::_getUObject(UOptimusNode_CustomComputeKernel *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e238e70

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_CustomComputeKernel::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_CustomComputeKernel::_getUObject_adjustor_8__(UOptimusNode_CustomComputeKernel *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_CustomComputeKernel *)
                       &this[-1].ShaderSource.ShaderText.Data.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e238e80

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_CustomComputeKernel::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_CustomComputeKernel::_getUObject_adjustor_16__(UOptimusNode_CustomComputeKernel *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_CustomComputeKernel *)&this[-1].ShaderSource.ShaderText);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14e238e90

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_CustomComputeKernel::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_CustomComputeKernel::_getUObject_adjustor_24__(UOptimusNode_CustomComputeKernel *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_CustomComputeKernel *)
                       &this[-1].ShaderSource.Declarations.Data.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{32}' @ 14e238ea0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_CustomComputeKernel::_getUObject`adjustor{32}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_CustomComputeKernel::_getUObject_adjustor_32__(UOptimusNode_CustomComputeKernel *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_CustomComputeKernel *)&this[-1].ShaderSource);
  return (UObject *)pUVar1;
}

