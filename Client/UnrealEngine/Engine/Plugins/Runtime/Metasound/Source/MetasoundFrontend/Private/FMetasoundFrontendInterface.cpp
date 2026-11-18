// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// StaticStruct @ 14ad71a40

UScriptStruct * __cdecl FMetasoundFrontendInterface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendInterface,(UObject *)pUVar1,
                         L"MetasoundFrontendInterface");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterface.OuterSingleton;
}

// FMetasoundFrontendInterface @ 14ad9a940

FMetasoundFrontendInterface * __thiscall
FMetasoundFrontendInterface::FMetasoundFrontendInterface
          (FMetasoundFrontendInterface *this,TSharedPtr<Audio::FParameterInterface,1> *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FMetasoundFrontendVersionNumber FVar8;
  TSharedPtr<Audio::FParameterInterface,1> *pTVar9;
  bool bVar10;
  int iVar11;
  FMetasoundFrontendInterface *pFVar12;
  FVersion *pFVar13;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<Audio::FParameterInterface::FClassOptions,TSizedDefaultAllocator<32>_> *pTVar17;
  FInput *pFVar18;
  FScriptContainerElement *pFVar19;
  FInput *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8 [8];
  TSharedPtr<Audio::FParameterInterface,1> *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  FMetasoundFrontendInterface *local_b0;
  FName local_a8;
  int iStack_a0;
  int iStack_9c;
  FMetasoundFrontendClassInput local_98;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Metadata).Version.Name.ComparisonIndex = 0;
  (this->Metadata).Version.Name.Number = 0;
  (this->Metadata).Version.Number.Major = 1;
  (this->Metadata).Version.Number.Minor = 0;
  (this->Metadata).UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metadata).UClassOptions.ArrayNum = 0;
  (this->Metadata).UClassOptions.ArrayMax = 0;
  local_res10 = param_1;
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
      return pFVar12;
    }
  }
  Audio::FParameterInterface::GetName(param_1->Object);
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
      return pFVar12;
    }
  }
  pFVar13 = Audio::FParameterInterface::GetVersion(param_1->Object);
  iStack_a0 = pFVar13->Major;
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
      return pFVar12;
    }
  }
  pFVar13 = Audio::FParameterInterface::GetVersion(param_1->Object);
  iStack_9c = pFVar13->Minor;
  FVar8.Minor = iStack_9c;
  FVar8.Major = iStack_a0;
  (this->Metadata).Version.Name = local_a8;
  (this->Metadata).Version.Number = FVar8;
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
      return pFVar12;
    }
  }
  local_b0 = this;
  pTVar14 = Audio::FParameterInterface::GetInputs(param_1->Object);
  iVar3 = pTVar14->ArrayNum;
  pFVar18 = (FInput *)(pTVar14->AllocatorInstance).Data;
  pFVar20 = pFVar18 + iVar3;
  while( true ) {
    if (pTVar14->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FParameterInterface::FInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar20) break;
    `FMetasoundFrontendInterface::FMetasoundFrontendInterface'::__l2::<lambda_1>::operator()
              (&local_b0,&local_98,pFVar18);
    if (((FMetasoundFrontendClassInput *)this->_padding_ <= &local_98) &&
       (&local_98 <
        (FMetasoundFrontendClassInput *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
    {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar11 = (int)this->_padding_;
    if (iVar11 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4));
    }
    *(int *)&this->_padding_ = iVar11 + 1;
    lVar4 = this->_padding_;
    plVar1 = (longlong *)(lVar4 + (longlong)iVar11 * 0x48);
    *plVar1 = local_98._padding_;
    plVar1[1] = local_98._padding_;
    lVar4 = lVar4 + (longlong)iVar11 * 0x48;
    *(longlong *)(lVar4 + 0x10) = local_98._padding_;
    *(longlong *)(lVar4 + 0x18) = local_98._padding_;
    *(longlong *)(lVar4 + 0x20) = local_98._padding_;
    *(longlong *)(lVar4 + 0x28) = local_98._padding_;
    *(undefined4 *)(lVar4 + 0x30) = (undefined4)local_98._padding_;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(FScriptContainerElement **)(lVar4 + 0x38) = local_98.Defaults.AllocatorInstance.Data;
    local_98.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar4 + 0x40) = local_98.Defaults.ArrayNum;
    *(int *)(lVar4 + 0x44) = local_98.Defaults.ArrayMax;
    local_98.Defaults.ArrayNum = 0;
    local_98.Defaults.ArrayMax = 0;
    DestructItems<FMetasoundFrontendClassInputDefault,int>
              ((FMetasoundFrontendClassInputDefault *)0x0,0);
    if (local_98.Defaults.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Defaults.AllocatorInstance.Data);
    }
    pFVar18 = pFVar18 + 1;
  }
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
      return pFVar12;
    }
  }
  pTVar15 = Audio::FParameterInterface::GetOutputs(param_1->Object);
  Algo::
  Transform<TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_>_&,_FMetasoundFrontendInterface::FMetasoundFrontendInterface_::__l2::<lambda_2>_>
            (pTVar15,(TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_,(<lambda_2>)this);
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
      return pFVar12;
    }
  }
  pTVar16 = Audio::FParameterInterface::GetEnvironment(param_1->Object);
  iVar3 = pTVar16->ArrayNum;
  pFVar19 = (pTVar16->AllocatorInstance).Data;
  pFVar21 = pFVar19 + (longlong)iVar3 * 0x38;
  while( true ) {
    if (pTVar16->ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Audio::FParameterInterface::FEnvironmentVariable_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    pTVar9 = local_res10;
    if (pFVar19 == pFVar21) break;
    local_d8 = *(undefined8 *)(pFVar19 + 0x28);
    uStack_d0 = 0;
    local_c8 = CONCAT31(local_c8._1_3_,1);
    if (((undefined8 *)this->_padding_ <= &local_d8) &&
       (&local_d8 <
        (undefined8 *)(this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x14))
       ) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar11 = (int)this->_padding_;
    if (iVar11 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x414,(ForAnyElementType *)&this->_padding_,
                          (int *)((longlong)&this->_padding_ + 4));
    }
    pFVar19 = pFVar19 + 0x38;
    *(int *)&this->_padding_ = iVar11 + 1;
    lVar4 = this->_padding_;
    puVar2 = (undefined8 *)(lVar4 + (longlong)iVar11 * 0x14);
    *puVar2 = local_d8;
    puVar2[1] = uStack_d0;
    *(undefined4 *)(lVar4 + (longlong)iVar11 * 0x14 + 0x10) = local_c8;
  }
  if (local_res10->Object == (FParameterInterface *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
      return pFVar12;
    }
  }
  pTVar17 = Audio::FParameterInterface::GetUClassOptions(pTVar9->Object);
  iVar3 = pTVar17->ArrayNum;
  pFVar21 = (pTVar17->AllocatorInstance).Data;
  pFVar19 = pFVar21 + (longlong)iVar3 * 0x14;
  while( true ) {
    if (pTVar17->ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Audio::FParameterInterface::FClassOptions_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar21 == pFVar19) break;
    local_c4 = *(undefined8 *)pFVar21;
    uStack_bc = *(undefined8 *)(pFVar21 + 8);
    pFVar5 = (this->Metadata).UClassOptions.AllocatorInstance.Data;
    local_b4 = CONCAT22(local_b4._2_2_,*(undefined2 *)(pFVar21 + 0x10));
    if ((pFVar5 <= (FScriptContainerElement *)&local_c4) &&
       ((FScriptContainerElement *)&local_c4 <
        pFVar5 + (longlong)(this->Metadata).UClassOptions.ArrayMax * 0x14)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FMetasoundFrontendInterface *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar11 = (this->Metadata).UClassOptions.ArrayNum;
    if (iVar11 == (this->Metadata).UClassOptions.ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x414,&(this->Metadata).UClassOptions.AllocatorInstance,
                          &(this->Metadata).UClassOptions.ArrayMax);
      (this->Metadata).UClassOptions.ArrayNum = iVar11;
    }
    pFVar21 = pFVar21 + 0x14;
    (this->Metadata).UClassOptions.ArrayNum = iVar11 + 1;
    pFVar6 = (this->Metadata).UClassOptions.AllocatorInstance.Data;
    pFVar5 = pFVar6 + (longlong)iVar11 * 0x14;
    *(undefined8 *)pFVar5 = local_c4;
    *(undefined8 *)(pFVar5 + 8) = uStack_bc;
    *(undefined4 *)(pFVar6 + (longlong)iVar11 * 0x14 + 0x10) = local_b4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res10->SharedReferenceCount).ReferenceController);
  return this;
}

// operator() @ 14ada0950

FMetasoundFrontendClassInput * __thiscall
`FMetasoundFrontendInterface::FMetasoundFrontendInterface'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendClassInput *__return_storage_ptr__,FInput *param_1)

{
  longlong lVar1;
  FGuid FVar2;
  char cVar3;
  bool bVar4;
  FMetasoundFrontendLiteral *pFVar5;
  IDataTypeRegistry *pIVar6;
  FName FVar7;
  FClassIDGenerator *this_00;
  FGuid *pFVar8;
  FName local_res10;
  FName *local_res18;
  FName local_res20;
  FGuid local_88;
  FMetasoundFrontendLiteral local_78;
  
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  FVar2 = Metasound::FrontendInvalidID;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  *(FGuid *)&__return_storage_ptr__->_padding_ = FVar2;
  (__return_storage_ptr__->Defaults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Defaults).ArrayNum = 0;
  (__return_storage_ptr__->Defaults).ArrayMax = 0;
  __return_storage_ptr__->_padding_ = (longlong)(param_1->InitValue).ParamName;
  pFVar5 = FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_78,&param_1->InitValue);
  FMetasoundFrontendClassInput::InitDefault(__return_storage_ptr__,pFVar5);
  local_res10 = param_1->DataType;
  if (local_res10 != (FName)0x0) {
    pIVar6 = Metasound::Frontend::IDataTypeRegistry::Get();
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,&local_res10);
    FVar7 = local_res10;
    if (cVar3 != '\0') goto LAB_14ada0a21;
    local_res18 = &local_res10;
    bVar4 = `Metasound::DocumentPrivate::ResolveMemberDataType'::__l6::<lambda_1>::operator()
                      (&local_res18);
    FVar7 = local_res10;
    if (bVar4) goto LAB_14ada0a21;
  }
  Metasound::Frontend::ConvertParameterToDataType((EAudioParameterType)&local_res20);
  FVar7 = local_res20;
LAB_14ada0a21:
  __return_storage_ptr__->_padding_ = (longlong)FVar7;
  this_00 = Metasound::Frontend::FClassIDGenerator::Get();
  pFVar8 = Metasound::Frontend::FClassIDGenerator::CreateInputID(this_00,&local_88,param_1);
  lVar1 = *(longlong *)&pFVar8->C;
  __return_storage_ptr__->_padding_ = *(longlong *)pFVar8;
  __return_storage_ptr__->_padding_ = lVar1;
  return __return_storage_ptr__;
}

// FMetasoundFrontendInterface @ 14addcc20

FMetasoundFrontendInterface * __thiscall
FMetasoundFrontendInterface::FMetasoundFrontendInterface
          (FMetasoundFrontendInterface *this,FMetasoundFrontendInterface *param_1)

{
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FMetasoundFrontendVersionNumber FVar4;
  
  FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
            ((FMetasoundFrontendClassInterface *)this,(FMetasoundFrontendClassInterface *)param_1);
  FVar4 = (param_1->Metadata).Version.Number;
  pTVar1 = &(this->Metadata).UClassOptions;
  piVar2 = &(this->Metadata).UClassOptions.ArrayMax;
  (this->Metadata).Version.Name = (param_1->Metadata).Version.Name;
  (this->Metadata).Version.Number = FVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Metadata).UClassOptions.ArrayNum;
  _Src = (param_1->Metadata).UClassOptions.AllocatorInstance.Data;
  (this->Metadata).UClassOptions.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x14);
  }
  return this;
}

// operator= @ 14addf840

FMetasoundFrontendInterface * __thiscall
FMetasoundFrontendInterface::operator=
          (FMetasoundFrontendInterface *this,FMetasoundFrontendInterface *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FMetasoundFrontendVersionNumber FVar6;
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if (this != param_1) {
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)this->_padding_,(int)this->_padding_);
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
    }
    this->_padding_ = param_1->_padding_;
    param_1->_padding_ = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  plVar1 = &param_1->_padding_;
  plVar2 = &this->_padding_;
  if (plVar2 != plVar1) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  plVar1 = &param_1->_padding_;
  plVar2 = &this->_padding_;
  if (plVar2 != plVar1) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  lVar5 = param_1->_padding_;
  pTVar3 = &(this->Metadata).UClassOptions;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  FVar6 = (param_1->Metadata).Version.Number;
  pTVar7 = &(param_1->Metadata).UClassOptions;
  (this->Metadata).Version.Name = (param_1->Metadata).Version.Name;
  (this->Metadata).Version.Number = FVar6;
  if (pTVar3 != pTVar7) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Metadata).UClassOptions.ArrayNum = (param_1->Metadata).UClassOptions.ArrayNum;
    (this->Metadata).UClassOptions.ArrayMax = (param_1->Metadata).UClassOptions.ArrayMax;
    (param_1->Metadata).UClassOptions.ArrayNum = 0;
    (param_1->Metadata).UClassOptions.ArrayMax = 0;
  }
  return this;
}

// operator= @ 14ae5cb70

FMetasoundFrontendInterface * __thiscall
FMetasoundFrontendInterface::operator=
          (FMetasoundFrontendInterface *this,FMetasoundFrontendInterface *param_1)

{
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  FMetasoundFrontendVersionNumber FVar6;
  
  FMetasoundFrontendClassInterface::operator=
            ((FMetasoundFrontendClassInterface *)this,(FMetasoundFrontendClassInterface *)param_1);
  FVar6 = (param_1->Metadata).Version.Number;
  pTVar1 = &(param_1->Metadata).UClassOptions;
  pTVar2 = &(this->Metadata).UClassOptions;
  (this->Metadata).Version.Name = (param_1->Metadata).Version.Name;
  (this->Metadata).Version.Number = FVar6;
  if (pTVar2 != pTVar1) {
    iVar4 = (param_1->Metadata).UClassOptions.ArrayNum;
    piVar3 = &(this->Metadata).UClassOptions.ArrayMax;
    iVar5 = *piVar3;
    _Src = (pTVar1->AllocatorInstance).Data;
    (this->Metadata).UClassOptions.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x14);
      }
    }
  }
  return this;
}

