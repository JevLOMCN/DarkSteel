// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// StaticStruct @ 14ad7a4b0

UScriptStruct * __cdecl FMetasoundFrontendClassInterface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar1,L"MetasoundFrontendClassInterface");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton;
}

// operator= @ 14ad9f5c0

FMetasoundFrontendClassInterface * __thiscall
FMetasoundFrontendClassInterface::operator=
          (FMetasoundFrontendClassInterface *this,FMetasoundFrontendClassInterface *param_1)

{
  int *piVar1;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMetasoundFrontendClassEnvironmentVariable,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FMetasoundFrontendClassInput *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (this != param_1) {
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)(this->Inputs).AllocatorInstance.Data,
               (this->Inputs).ArrayNum);
    iVar4 = (param_1->Inputs).ArrayNum;
    piVar1 = &(this->Inputs).ArrayMax;
    pFVar5 = (FMetasoundFrontendClassInput *)(param_1->Inputs).AllocatorInstance.Data;
    (this->Inputs).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar4,*piVar1,(ForAnyElementType *)this,iVar4,piVar1);
      ConstructItems<FMetasoundFrontendClassInput,FMetasoundFrontendClassInput,int>
                ((this->Inputs).AllocatorInstance.Data,pFVar5,iVar4);
    }
  }
  pTVar2 = &this->Outputs;
  if (pTVar2 != &param_1->Outputs) {
    iVar4 = (param_1->Outputs).ArrayNum;
    piVar1 = &(this->Outputs).ArrayMax;
    pFVar6 = (param_1->Outputs).AllocatorInstance.Data;
    (this->Outputs).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x34,4,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x34);
      }
    }
  }
  pTVar3 = &this->Environment;
  if (pTVar3 != &param_1->Environment) {
    iVar4 = (param_1->Environment).ArrayNum;
    piVar1 = &(this->Environment).ArrayMax;
    pFVar6 = (param_1->Environment).AllocatorInstance.Data;
    (this->Environment).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x14);
      }
    }
  }
  uVar7 = (param_1->ChangeID).B;
  uVar8 = (param_1->ChangeID).C;
  uVar9 = (param_1->ChangeID).D;
  (this->ChangeID).A = (param_1->ChangeID).A;
  (this->ChangeID).B = uVar7;
  (this->ChangeID).C = uVar8;
  (this->ChangeID).D = uVar9;
  return this;
}

// GenerateClassInterface @ 14adbacd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMetasoundFrontendClassInterface * __cdecl
FMetasoundFrontendClassInterface::GenerateClassInterface
          (FMetasoundFrontendClassInterface *__return_storage_ptr__,FVertexInterface *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FVertexInterface *this;
  FInputVertexInterface *pFVar6;
  ELiteralType EVar7;
  bool bVar8;
  int iVar9;
  FClassIDGenerator *pFVar10;
  FGuid *pFVar11;
  FMetasoundFrontendLiteral *this_00;
  FMetasoundFrontendClassInterface *pFVar12;
  longlong lVar13;
  FOutputVertexInterface *pFVar14;
  FEnvironmentVertexInterface *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStackY_178 [32];
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126 [6];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 local_108 [40];
  longlong lStack_e0;
  undefined4 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  FVertexInterface *local_b8;
  undefined1 local_b0 [56];
  FInputVertexInterface *local_78 [2];
  FGuid local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  piVar1 = &(__return_storage_ptr__->Inputs).ArrayMax;
  (__return_storage_ptr__->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Inputs).ArrayNum = 0;
  (__return_storage_ptr__->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Outputs).ArrayNum = 0;
  (__return_storage_ptr__->Outputs).ArrayMax = 0;
  (__return_storage_ptr__->Environment).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Environment).ArrayNum = 0;
  (__return_storage_ptr__->Environment).ArrayMax = 0;
  (__return_storage_ptr__->ChangeID).A = 0;
  (__return_storage_ptr__->ChangeID).B = 0;
  (__return_storage_ptr__->ChangeID).C = 0;
  (__return_storage_ptr__->ChangeID).D = 0;
  *piVar1 = 0;
  local_b8 = param_1;
  local_78[0] = Metasound::FVertexInterface::GetInputInterface(param_1);
  uVar2 = (uint)local_78[0]->_padding_;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar2,(ForAnyElementType *)__return_storage_ptr__,
               (__return_storage_ptr__->Inputs).ArrayNum,piVar1);
  }
  pFVar6 = local_78[0];
  iVar3 = (int)local_78[0]->_padding_;
  lVar17 = local_78[0]->_padding_;
  lVar18 = (longlong)iVar3 * 0x38 + lVar17;
  while( true ) {
    if ((int)pFVar6->_padding_ != iVar3) {
      local_128 = 0;
      `TCheckedPointerIterator<Metasound::FInputDataVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_128);
    }
    if (lVar17 == lVar18) break;
    local_108._0_8_ = *(longlong *)(lVar17 + 8);
    local_108._8_8_ = *(longlong *)(lVar17 + 0x10);
    local_108._16_8_ = 0;
    local_108._24_8_ = 0;
    stack0xffffffffffffff18 = Metasound::FrontendInvalidID;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8._0_4_ = 0;
    local_c8._4_4_ = 0;
    if ((*(int *)(lVar17 + 0x18) == 0) || (local_d8 = 1, *(int *)(lVar17 + 0x18) != 1)) {
      local_d8 = 0;
    }
    pFVar10 = Metasound::Frontend::FClassIDGenerator::Get();
    pFVar11 = Metasound::Frontend::FClassIDGenerator::CreateInputID
                        (pFVar10,(FGuid *)local_78,(FMetasoundFrontendClassInput *)local_108);
    local_108._16_4_ = pFVar11->A;
    local_108._20_4_ = pFVar11->B;
    local_108._24_4_ = pFVar11->C;
    local_108._28_4_ = pFVar11->D;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,
               (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(lVar17 + 0x20));
    EVar7 = Metasound::FLiteral::GetType((FLiteral *)&local_58);
    if (EVar7 != Invalid) {
      this_00 = FMetasoundFrontendClassInput::InitDefault((FMetasoundFrontendClassInput *)local_108)
      ;
      FMetasoundFrontendLiteral::SetFromLiteral(this_00,(FLiteral *)&local_58);
    }
    pFVar16 = (__return_storage_ptr__->Inputs).AllocatorInstance.Data;
    if ((pFVar16 <= (FScriptContainerElement *)local_108) &&
       ((FScriptContainerElement *)local_108 < pFVar16 + (longlong)*piVar1 * 0x48)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FMetasoundFrontendClassInterface *)(*pcVar5)();
        return pFVar12;
      }
    }
    iVar9 = (__return_storage_ptr__->Inputs).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,(ForAnyElementType *)__return_storage_ptr__,piVar1);
    }
    (__return_storage_ptr__->Inputs).ArrayNum = iVar9 + 1;
    lVar13 = (longlong)iVar9;
    pFVar16 = (__return_storage_ptr__->Inputs).AllocatorInstance.Data;
    *(undefined8 *)(pFVar16 + lVar13 * 0x48) = local_108._0_8_;
    *(undefined8 *)(pFVar16 + lVar13 * 0x48 + 8) = local_108._8_8_;
    *(undefined8 *)(pFVar16 + lVar13 * 0x48 + 0x10) = local_108._16_8_;
    *(undefined8 *)(pFVar16 + lVar13 * 0x48 + 0x10 + 8) = local_108._24_8_;
    *(undefined8 *)(pFVar16 + lVar13 * 0x48 + 0x20) = local_108._32_8_;
    *(longlong *)(pFVar16 + lVar13 * 0x48 + 0x28) = lStack_e0;
    *(undefined4 *)(pFVar16 + lVar13 * 0x48 + 0x30) = local_d8;
    *(undefined8 *)(pFVar16 + lVar13 * 0x48 + 0x38) = 0;
    *(FScriptContainerElement **)(pFVar16 + lVar13 * 0x48 + 0x38) = local_d0.Data;
    local_d0.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar16 + lVar13 * 0x48 + 0x40) = (int)local_c8;
    *(int *)(pFVar16 + lVar13 * 0x48 + 0x44) = local_c8._4_4_;
    local_c8._0_4_ = 0;
    local_c8._4_4_ = 0;
    uVar19 = (ulonglong)local_58.TypeIndex;
    if (0xc < local_58.TypeIndex) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FMetasoundFrontendClassInterface *)(*pcVar5)();
        return pFVar12;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar19])(&local_58);
    DestructItems<FMetasoundFrontendClassInputDefault,int>
              ((FMetasoundFrontendClassInputDefault *)local_d0.Data,(int)local_c8);
    if ((FMetasoundFrontendClassInputDefault *)local_d0.Data !=
        (FMetasoundFrontendClassInputDefault *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    lVar17 = lVar17 + 0x38;
  }
  pFVar14 = Metasound::FVertexInterface::GetOutputInterface(local_b8);
  piVar1 = &(__return_storage_ptr__->Outputs).ArrayMax;
  uVar2 = (uint)pFVar14->_padding_;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x34,4,uVar2,&(__return_storage_ptr__->Outputs).AllocatorInstance,
               (__return_storage_ptr__->Outputs).ArrayNum,piVar1);
  }
  iVar3 = (int)pFVar14->_padding_;
  lVar17 = pFVar14->_padding_;
  lVar18 = (longlong)iVar3 * 0x20 + lVar17;
  while( true ) {
    if ((int)pFVar14->_padding_ != iVar3) {
      local_127 = 0;
      `TCheckedPointerIterator<Metasound::FOutputDataVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_127);
    }
    this = local_b8;
    if (lVar17 == lVar18) break;
    local_b0._0_8_ = *(undefined8 *)(lVar17 + 8);
    local_b0._8_8_ = *(undefined8 *)(lVar17 + 0x10);
    local_b0._16_8_ = 0;
    local_b0._24_8_ = 0;
    local_b0._32_4_ = Metasound::FrontendInvalidID.A;
    local_b0._36_4_ = Metasound::FrontendInvalidID.B;
    local_b0._40_4_ = Metasound::FrontendInvalidID.C;
    local_b0._44_4_ = Metasound::FrontendInvalidID.D;
    if ((*(int *)(lVar17 + 0x18) == 0) || (local_b0._48_4_ = 1, *(int *)(lVar17 + 0x18) != 1)) {
      local_b0._48_4_ = 0;
    }
    pFVar10 = Metasound::Frontend::FClassIDGenerator::Get();
    pFVar11 = Metasound::Frontend::FClassIDGenerator::CreateOutputID
                        (pFVar10,&local_68,(FMetasoundFrontendClassOutput *)local_b0);
    pFVar16 = (__return_storage_ptr__->Outputs).AllocatorInstance.Data;
    local_b0._16_4_ = pFVar11->A;
    local_b0._20_4_ = pFVar11->B;
    local_b0._24_4_ = pFVar11->C;
    local_b0._28_4_ = pFVar11->D;
    if ((pFVar16 <= (FScriptContainerElement *)local_b0) &&
       ((FScriptContainerElement *)local_b0 <
        pFVar16 + (longlong)(__return_storage_ptr__->Outputs).ArrayMax * 0x34)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FMetasoundFrontendClassInterface *)(*pcVar5)();
        return pFVar12;
      }
    }
    iVar9 = (__return_storage_ptr__->Outputs).ArrayNum;
    if (iVar9 == (__return_storage_ptr__->Outputs).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x434,&(__return_storage_ptr__->Outputs).AllocatorInstance,
                         &(__return_storage_ptr__->Outputs).ArrayMax);
    }
    (__return_storage_ptr__->Outputs).ArrayNum = iVar9 + 1;
    pFVar16 = (__return_storage_ptr__->Outputs).AllocatorInstance.Data + (longlong)iVar9 * 0x34;
    lVar17 = lVar17 + 0x20;
    *(undefined8 *)pFVar16 = local_b0._0_8_;
    *(undefined8 *)(pFVar16 + 8) = local_b0._8_8_;
    *(undefined8 *)(pFVar16 + 0x10) = local_b0._16_8_;
    *(undefined8 *)(pFVar16 + 0x18) = local_b0._24_8_;
    *(undefined8 *)(pFVar16 + 0x20) = local_b0._32_8_;
    *(undefined8 *)(pFVar16 + 0x28) = local_b0._40_8_;
    *(undefined4 *)(pFVar16 + 0x30) = local_b0._48_4_;
  }
  pFVar15 = Metasound::FVertexInterface::GetEnvironmentInterface(local_b8);
  uVar2 = *(uint *)&pFVar15->field_0x8;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &(__return_storage_ptr__->Environment).ArrayMax;
  if ((__return_storage_ptr__->Environment).ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar2,&(__return_storage_ptr__->Environment).AllocatorInstance,
               (__return_storage_ptr__->Environment).ArrayNum,piVar1);
  }
  pFVar15 = Metasound::FVertexInterface::GetEnvironmentInterface(this);
  iVar3 = *(int *)&pFVar15->field_0x8;
  lVar17 = *(longlong *)pFVar15;
  lVar18 = (longlong)iVar3 * 0x10 + lVar17;
  while( true ) {
    if (*(int *)&pFVar15->field_0x8 != iVar3) {
      local_126[0] = 0;
      `TCheckedPointerIterator<Metasound::FEnvironmentVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_126);
    }
    if (lVar17 == lVar18) break;
    pFVar16 = (__return_storage_ptr__->Environment).AllocatorInstance.Data;
    uStack_118 = 0;
    local_120 = *(undefined8 *)(lVar17 + 8);
    local_110 = CONCAT31(local_110._1_3_,1);
    if ((pFVar16 <= (FScriptContainerElement *)&local_120) &&
       ((FScriptContainerElement *)&local_120 < pFVar16 + (longlong)*piVar1 * 0x14)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FMetasoundFrontendClassInterface *)(*pcVar5)();
        return pFVar12;
      }
    }
    iVar9 = (__return_storage_ptr__->Environment).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,&(__return_storage_ptr__->Environment).AllocatorInstance,piVar1);
    }
    lVar17 = lVar17 + 0x10;
    (__return_storage_ptr__->Environment).ArrayNum = iVar9 + 1;
    pFVar4 = (__return_storage_ptr__->Environment).AllocatorInstance.Data;
    pFVar16 = pFVar4 + (longlong)iVar9 * 0x14;
    *(undefined8 *)pFVar16 = local_120;
    *(undefined8 *)(pFVar16 + 8) = uStack_118;
    *(undefined4 *)(pFVar4 + (longlong)iVar9 * 0x14 + 0x10) = local_110;
  }
  return __return_storage_ptr__;
}

// FMetasoundFrontendClassInterface @ 14addcad0

FMetasoundFrontendClassInterface * __thiscall
FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
          (FMetasoundFrontendClassInterface *this,FMetasoundFrontendClassInterface *param_1)

{
  int *piVar1;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMetasoundFrontendClassEnvironmentVariable,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FMetasoundFrontendClassInput *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  piVar1 = &(this->Inputs).ArrayMax;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Inputs).ArrayNum;
  pFVar5 = (FMetasoundFrontendClassInput *)(param_1->Inputs).AllocatorInstance.Data;
  (this->Inputs).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    ConstructItems<FMetasoundFrontendClassInput,FMetasoundFrontendClassInput,int>
              ((this->Inputs).AllocatorInstance.Data,pFVar5,iVar4);
  }
  pTVar2 = &this->Outputs;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Outputs).ArrayMax;
  iVar4 = (param_1->Outputs).ArrayNum;
  pFVar6 = (param_1->Outputs).AllocatorInstance.Data;
  (this->Outputs).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x34,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x34);
  }
  pTVar3 = &this->Environment;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Environment).ArrayMax;
  iVar4 = (param_1->Environment).ArrayNum;
  pFVar6 = (param_1->Environment).AllocatorInstance.Data;
  (this->Environment).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x14);
  }
  uVar7 = (param_1->ChangeID).B;
  uVar8 = (param_1->ChangeID).C;
  uVar9 = (param_1->ChangeID).D;
  (this->ChangeID).A = (param_1->ChangeID).A;
  (this->ChangeID).B = uVar7;
  (this->ChangeID).C = uVar8;
  (this->ChangeID).D = uVar9;
  return this;
}

