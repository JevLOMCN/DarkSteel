// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 12

// FModifyRootGraphInterfaces @ 14ae59c00

FModifyRootGraphInterfaces * __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces
          (FModifyRootGraphInterfaces *this,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMetasoundFrontendInterface *pFVar4;
  
  pTVar1 = &this->InterfacesToRemove;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FModifyRootGraphInterfaces_Frontend_Metasound__6B_;
  iVar3 = param_1->ArrayNum;
  piVar2 = &(this->InterfacesToRemove).ArrayMax;
  pFVar4 = (FMetasoundFrontendInterface *)(param_1->AllocatorInstance).Data;
  (this->InterfacesToRemove).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FMetasoundFrontendInterface,FMetasoundFrontendInterface,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  pTVar1 = &this->InterfacesToAdd;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InterfacesToAdd).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (FMetasoundFrontendInterface *)(param_2->AllocatorInstance).Data;
  (this->InterfacesToAdd).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FMetasoundFrontendInterface,FMetasoundFrontendInterface,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  (this->PairedInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PairedInputs).ArrayNum = 0;
  (this->PairedInputs).ArrayMax = 0;
  (this->PairedOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PairedOutputs).ArrayNum = 0;
  (this->PairedOutputs).ArrayMax = 0;
  (this->InputsToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputsToAdd).ArrayNum = 0;
  (this->InputsToAdd).ArrayMax = 0;
  (this->InputsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputsToRemove).ArrayNum = 0;
  (this->InputsToRemove).ArrayMax = 0;
  (this->OutputsToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputsToAdd).ArrayNum = 0;
  (this->OutputsToAdd).ArrayMax = 0;
  (this->OutputsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputsToRemove).ArrayNum = 0;
  (this->OutputsToRemove).ArrayMax = 0;
  Init(this,(TFunction<bool___cdecl(FName,FName)> *)0x0);
  return this;
}

// FModifyRootGraphInterfaces @ 14ae59d30

FModifyRootGraphInterfaces * __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces
          (FModifyRootGraphInterfaces *this,
          TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_2)

{
  <lambda_1> local_res8;
  
  this->_padding_ = (longlong)&___7FModifyRootGraphInterfaces_Frontend_Metasound__6B_;
  (this->InterfacesToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfacesToRemove).ArrayNum = 0;
  (this->InterfacesToRemove).ArrayMax = 0;
  (this->InterfacesToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfacesToAdd).ArrayNum = 0;
  (this->InterfacesToAdd).ArrayMax = 0;
  (this->PairedInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PairedInputs).ArrayNum = 0;
  (this->PairedInputs).ArrayMax = 0;
  (this->PairedOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PairedOutputs).ArrayNum = 0;
  (this->PairedOutputs).ArrayMax = 0;
  (this->InputsToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputsToAdd).ArrayNum = 0;
  (this->InputsToAdd).ArrayMax = 0;
  (this->InputsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputsToRemove).ArrayNum = 0;
  (this->InputsToRemove).ArrayMax = 0;
  (this->OutputsToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputsToAdd).ArrayNum = 0;
  (this->OutputsToAdd).ArrayMax = 0;
  (this->OutputsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputsToRemove).ArrayNum = 0;
  (this->OutputsToRemove).ArrayMax = 0;
  Algo::
  Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces_::__l2::<lambda_1>_>
            (param_1,&this->InterfacesToRemove,local_res8);
  Algo::
  Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces_::__l2::<lambda_2>_>
            (param_2,&this->InterfacesToAdd,(<lambda_2>)local_res8);
  Init(this,(TFunction<bool___cdecl(FName,FName)> *)0x0);
  return this;
}

// operator() @ 14ae5d530

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendInterface * __thiscall
`Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces'::__l2::<lambda_1>::
operator()(void *this,FMetasoundFrontendInterface *__return_storage_ptr__,
          FMetasoundFrontendVersion *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  IInterfaceRegistry *pIVar4;
  FString *pFVar5;
  FMetasoundFrontendInterface *pFVar6;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Metadata).Version.Number.Major = 1;
  (__return_storage_ptr__->Metadata).Version.Number.Minor = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->Metadata).Version.Name.ComparisonIndex = 0;
  (__return_storage_ptr__->Metadata).Version.Name.Number = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayNum = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayMax = 0;
  pIVar4 = Metasound::Frontend::IInterfaceRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x18);
  pFVar5 = Metasound::Frontend::GetInterfaceRegistryKey(&local_28,param_1);
  cVar2 = (*pcVar1)(pIVar4,pFVar5,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7922748002802859936>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                       ,0x60,"bFromInterfaceFound");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMetasoundFrontendInterface *)(*pcVar1)();
      return pFVar6;
    }
    if ((Metasound::Frontend::DocumentTransform::bVersioningLoggingEnabled != false) &&
       (1 < (byte)LogMetaSound._0_1_)) {
      FMetasoundFrontendVersion::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14ae5df20

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendInterface * __thiscall
`Metasound::Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces'::__l2::<lambda_2>::
operator()(void *this,FMetasoundFrontendInterface *__return_storage_ptr__,
          FMetasoundFrontendVersion *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  IInterfaceRegistry *pIVar4;
  FString *pFVar5;
  FMetasoundFrontendInterface *pFVar6;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Metadata).Version.Number.Major = 1;
  (__return_storage_ptr__->Metadata).Version.Number.Minor = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->Metadata).Version.Name.ComparisonIndex = 0;
  (__return_storage_ptr__->Metadata).Version.Name.Number = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayNum = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayMax = 0;
  pIVar4 = Metasound::Frontend::IInterfaceRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x18);
  pFVar5 = Metasound::Frontend::GetInterfaceRegistryKey(&local_28,param_1);
  cVar2 = (*pcVar1)(pIVar4,pFVar5,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7922748002802859925>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                       ,0x6b,"bToInterfaceFound");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMetasoundFrontendInterface *)(*pcVar1)();
      return pFVar6;
    }
    if ((Metasound::Frontend::DocumentTransform::bVersioningLoggingEnabled != false) &&
       (1 < (byte)LogMetaSound._0_1_)) {
      FMetasoundFrontendVersion::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// AddMissingVertices @ 14ae61090

bool __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::AddMissingVertices
          (FModifyRootGraphInterfaces *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  iVar1 = (this->InputsToAdd).ArrayNum;
  pFVar4 = (this->InputsToAdd).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->InputsToAdd).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    (**(code **)(*(longlong *)param_1->Object + 0x170))(param_1->Object,local_28,pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    pFVar4 = pFVar4 + 0x50;
  }
  iVar1 = (this->OutputsToAdd).ArrayNum;
  pFVar4 = (this->OutputsToAdd).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->OutputsToAdd).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    (**(code **)(*(longlong *)param_1->Object + 0x188))(param_1->Object,local_28,pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    pFVar4 = pFVar4 + 0x40;
  }
  if (((this->InputsToAdd).ArrayNum == 0) && ((this->OutputsToAdd).ArrayNum == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar2;
}

// Init @ 14ae78f50

void __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::Init
          (FModifyRootGraphInterfaces *this,TFunction<bool___cdecl(FName,FName)> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FMetasoundFrontendClassInput *pFVar4;
  FInputData *pFVar5;
  FMetasoundFrontendClassInputDefault *pFVar6;
  FMetasoundFrontendClassVertex *pFVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ForAnyElementType FVar15;
  FMetasoundFrontendInterface *pFVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined8 *puVar26;
  FMetasoundFrontendClassVertex *pFVar27;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  FMetasoundFrontendClassVertex *pFVar31;
  TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
  *pTVar32;
  FScriptContainerElement *pFVar33;
  TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData,TSizedDefaultAllocator<32>_>
  *pTVar34;
  uint uVar35;
  uint uVar36;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar37;
  FMetasoundFrontendInterface *pFVar38;
  uint uVar39;
  longlong *plVar40;
  uint uVar41;
  FScriptContainerElement *pFVar42;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTVar43;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_258;
  undefined1 local_257 [3];
  uint local_254;
  FMetasoundFrontendInterface *local_250;
  ulonglong local_248;
  TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
  *local_240;
  TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
  *local_238;
  ForAnyElementType local_230;
  undefined8 local_228;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData,TSizedDefaultAllocator<32>_>
  *local_208;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FInputData local_1c8;
  FMetasoundFrontendInterface *local_178;
  int *local_170;
  int *local_168;
  int *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  FMetasoundFrontendInterface *pFStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pTVar25 = &this->InputsToRemove;
  piVar1 = &(this->InputsToRemove).ArrayNum;
  pFVar4 = (FMetasoundFrontendClassInput *)(pTVar25->AllocatorInstance).Data;
  piVar2 = &(this->InputsToRemove).ArrayMax;
  local_220 = pTVar25;
  local_208 = (TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData,TSizedDefaultAllocator<32>_>
               *)piVar1;
  if ((this->InputsToRemove).ArrayMax < 0) {
    DestructItems<FMetasoundFrontendClassInput,int>(pFVar4,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&pTVar25->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FMetasoundFrontendClassInput,int>(pFVar4,*piVar1);
    *piVar1 = 0;
  }
  piVar1 = &(this->InputsToAdd).ArrayNum;
  pFVar5 = (FInputData *)(this->InputsToAdd).AllocatorInstance.Data;
  piVar2 = &(this->InputsToAdd).ArrayMax;
  local_238 = (TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
               *)piVar1;
  if ((this->InputsToAdd).ArrayMax < 0) {
    DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>(pFVar5,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->InputsToAdd).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>(pFVar5,*piVar1);
    *piVar1 = 0;
  }
  pTVar43 = &this->OutputsToRemove;
  local_168 = &(this->OutputsToRemove).ArrayMax;
  (this->OutputsToRemove).ArrayNum = 0;
  if ((this->OutputsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x34,4,0,&pTVar43->AllocatorInstance,0,local_168);
  }
  local_160 = &(this->OutputsToAdd).ArrayMax;
  (this->OutputsToAdd).ArrayNum = 0;
  if ((this->OutputsToAdd).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->OutputsToAdd).AllocatorInstance,0,local_160);
  }
  local_240 = &this->PairedInputs;
  (this->PairedInputs).ArrayNum = 0;
  if ((this->PairedInputs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,4,0,&local_240->AllocatorInstance,0,&(this->PairedInputs).ArrayMax);
  }
  local_170 = &(this->PairedOutputs).ArrayMax;
  (this->PairedOutputs).ArrayNum = 0;
  if ((this->PairedOutputs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,4,0,&(this->PairedOutputs).AllocatorInstance,0,local_170);
  }
  iVar19 = (this->InterfacesToRemove).ArrayNum;
  pTVar28 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)
            (this->InterfacesToRemove).AllocatorInstance.Data;
  pTVar25 = pTVar28 + 1;
  pTVar37 = pTVar28 + (longlong)iVar19 * 6;
  while( true ) {
    if ((this->InterfacesToRemove).ArrayNum != iVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendInterface,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pTVar28 == pTVar37) break;
    if ((local_220 == pTVar28) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar20 = pTVar25[-1].ArrayNum;
    if (iVar20 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x48,8,iVar20,&local_220->AllocatorInstance,&local_220->ArrayNum,
                          &local_220->ArrayMax);
      ConstructItems<FMetasoundFrontendClassInput,FMetasoundFrontendClassInput,int>
                ((this->InputsToRemove).AllocatorInstance.Data + (longlong)iVar18 * 0x48,
                 (FMetasoundFrontendClassInput *)(pTVar28->AllocatorInstance).Data,iVar20);
    }
    if ((pTVar43 == (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)pTVar25) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar20 = pTVar25->ArrayNum;
    if (iVar20 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x34,4,iVar20,&pTVar43->AllocatorInstance,
                          &(this->OutputsToRemove).ArrayNum,&(this->OutputsToRemove).ArrayMax);
      memcpy((pTVar43->AllocatorInstance).Data + (longlong)iVar18 * 0x34,
             (pTVar25->AllocatorInstance).Data,(longlong)iVar20 * 0x34);
    }
    pTVar28 = pTVar28 + 6;
    pTVar25 = pTVar25 + 6;
  }
  local_254 = (this->InterfacesToAdd).ArrayNum;
  uVar23 = (ulonglong)(int)local_254;
  pFVar38 = (FMetasoundFrontendInterface *)(this->InterfacesToAdd).AllocatorInstance.Data;
  local_178 = pFVar38 + uVar23;
  while( true ) {
    pFVar16 = local_178;
    local_250 = pFVar38;
    if ((this->InterfacesToAdd).ArrayNum != (int)uVar23) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendInterface,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    uVar35 = 0;
    if (pFVar38 == pFVar16) break;
    iVar19 = (int)pFVar38->_padding_;
    uVar23 = (ulonglong)iVar19;
    plVar29 = (longlong *)pFVar38->_padding_;
    local_230.Data = (FScriptContainerElement *)0x0;
    local_228 = 0;
    local_248 = CONCAT44(local_248._4_4_,iVar19);
    local_200 = (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)
                (plVar29 + uVar23 * 9);
    plVar40 = plVar29 + 7;
    while( true ) {
      pTVar43 = local_200;
      if ((int)pFVar38->_padding_ != (int)uVar23) {
        local_258 = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_258);
      }
      if ((TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)plVar29 == pTVar43)
      break;
      local_1c8.Input._padding_ = *plVar29;
      local_1c8.Input._padding_ = plVar29[1];
      local_1c8.Input._padding_._0_4_ = (undefined4)plVar29[6];
      local_1c8.Input._padding_ = plVar29[2];
      local_1c8.Input._padding_ = plVar29[3];
      local_1c8.Input.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Input.Defaults.ArrayNum = 0;
      local_1c8.Input.Defaults.ArrayMax = 0;
      local_1c8.InputInterface = (FMetasoundFrontendInterface *)0x0;
      local_1c8.Input._padding_ = plVar29[4];
      local_1c8.Input._padding_ = plVar29[5];
      if (&local_1c8.Input.Defaults !=
          (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)plVar40) {
        DestructItems<FMetasoundFrontendClassInputDefault,int>
                  ((FMetasoundFrontendClassInputDefault *)0x0,0);
        iVar19 = (int)plVar40[1];
        pFVar6 = (FMetasoundFrontendClassInputDefault *)*plVar40;
        local_1c8.Input.Defaults.ArrayNum = iVar19;
        if ((iVar19 == 0) && (local_1c8.Input.Defaults.ArrayMax == 0)) {
          local_1c8.Input.Defaults.ArrayNum = 0;
          local_1c8.Input.Defaults.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar19,local_1c8.Input.Defaults.ArrayMax,
                     &local_1c8.Input.Defaults.AllocatorInstance,iVar19,
                     &local_1c8.Input.Defaults.ArrayMax);
          ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                    (local_1c8.Input.Defaults.AllocatorInstance.Data,pFVar6,iVar19);
        }
      }
      local_1c8.InputInterface = pFVar38;
      if (((local_230.Data <= &local_1c8) &&
          (&local_1c8 < (FInputData *)(local_230.Data + (longlong)local_228._4_4_ * 0x50))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((int)local_228 == local_228._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_230,(int *)((longlong)&local_228 + 4));
        local_228 = CONCAT44(local_228._4_4_,iVar19);
      }
      FVar15.Data = local_1c8.Input.Defaults.AllocatorInstance.Data;
      lVar24 = (longlong)(int)local_228;
      local_228 = CONCAT44(local_228._4_4_,(int)local_228 + 1);
      pFVar42 = local_230.Data + lVar24 * 0x50;
      *(longlong *)&pFVar42->field_0x0 = local_1c8.Input._padding_;
      *(longlong *)(pFVar42 + 8) = local_1c8.Input._padding_;
      pFVar33 = pFVar42 + 0x38;
      *(longlong *)(pFVar42 + 0x10) = local_1c8.Input._padding_;
      *(longlong *)(pFVar42 + 0x18) = local_1c8.Input._padding_;
      *(longlong *)(pFVar42 + 0x20) = local_1c8.Input._padding_;
      *(longlong *)(pFVar42 + 0x28) = local_1c8.Input._padding_;
      *(undefined4 *)(pFVar42 + 0x30) = (undefined4)local_1c8.Input._padding_;
      *(FScriptContainerElement **)pFVar33 = (FScriptContainerElement *)0x0;
      iVar19 = local_1c8.Input.Defaults.ArrayNum;
      *(int *)(pFVar42 + 0x40) = local_1c8.Input.Defaults.ArrayNum;
      if (local_1c8.Input.Defaults.ArrayNum == 0) {
        *(int *)(pFVar42 + 0x44) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,local_1c8.Input.Defaults.ArrayNum,0,(ForAnyElementType *)pFVar33,
                   local_1c8.Input.Defaults.ArrayNum,(int *)(pFVar42 + 0x44));
                    /* WARNING: Load size is inaccurate */
        ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                  (*pFVar33,(FMetasoundFrontendClassInputDefault *)FVar15.Data,iVar19);
      }
      *(FMetasoundFrontendInterface **)(pFVar42 + 0x48) = local_1c8.InputInterface;
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)
                 local_1c8.Input.Defaults.AllocatorInstance.Data,local_1c8.Input.Defaults.ArrayNum);
      if ((FMetasoundFrontendClassInputDefault *)local_1c8.Input.Defaults.AllocatorInstance.Data !=
          (FMetasoundFrontendClassInputDefault *)0x0) {
        FMemory::Free(local_1c8.Input.Defaults.AllocatorInstance.Data);
      }
      plVar29 = plVar29 + 9;
      uVar23 = local_248 & 0xffffffff;
      plVar40 = plVar40 + 9;
      pFVar38 = local_250;
    }
    pTVar3 = &this->InputsToAdd;
    if ((pTVar3 == (TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,TSizedDefaultAllocator<32>_>
                    *)&local_230) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar19 = (int)local_228;
    if ((int)local_228 != 0) {
      iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x50,8,(int)local_228,&pTVar3->AllocatorInstance,
                          &(this->InputsToAdd).ArrayNum,&(this->InputsToAdd).ArrayMax);
      ConstructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar20 * 0x50,
                 (FInputData *)local_230.Data,iVar19);
    }
    iVar19 = (int)pFVar38->_padding_;
    puVar26 = (undefined8 *)pFVar38->_padding_;
    local_218.Data = (FScriptContainerElement *)0x0;
    puVar30 = (undefined8 *)((longlong)iVar19 * 0x34 + (longlong)puVar26);
    local_210 = 0;
    while( true ) {
      if ((int)pFVar38->_padding_ != iVar19) {
        local_257[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_257);
      }
      if (puVar26 == puVar30) break;
      local_158 = *puVar26;
      uStack_150 = puVar26[1];
      local_128 = *(undefined4 *)(puVar26 + 6);
      local_148 = puVar26[2];
      uStack_140 = puVar26[3];
      local_138 = puVar26[4];
      uStack_130 = puVar26[5];
      pFStack_120 = pFVar38;
      if (((local_218.Data <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 < local_218.Data + (longlong)local_210._4_4_ * 0x40
          )) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((int)local_210 == local_210._4_4_) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&local_218,(int *)((longlong)&local_210 + 4));
        local_210 = CONCAT44(local_210._4_4_,iVar20);
      }
      lVar24 = (longlong)(int)local_210 * 0x40;
      puVar26 = (undefined8 *)((longlong)puVar26 + 0x34);
      local_210 = CONCAT44(local_210._4_4_,(int)local_210 + 1);
      *(undefined8 *)(local_218.Data + lVar24) = local_158;
      *(undefined8 *)(local_218.Data + lVar24 + 8) = uStack_150;
      *(undefined8 *)(local_218.Data + lVar24 + 0x10) = local_148;
      *(undefined8 *)(local_218.Data + lVar24 + 0x10 + 8) = uStack_140;
      *(undefined8 *)(local_218.Data + lVar24 + 0x20) = local_138;
      *(undefined8 *)(local_218.Data + lVar24 + 0x20 + 8) = uStack_130;
      *(ulonglong *)(local_218.Data + lVar24 + 0x30) = CONCAT44(uStack_124,local_128);
      *(FMetasoundFrontendInterface **)(local_218.Data + lVar24 + 0x30 + 8) = pFStack_120;
    }
    pTVar34 = &this->OutputsToAdd;
    if ((pTVar34 ==
         (TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData,TSizedDefaultAllocator<32>_>
          *)&local_218) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar24 = (longlong)(int)local_210;
    if ((int)local_210 != 0) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40,8,(int)local_210,&pTVar34->AllocatorInstance,
                          &(this->OutputsToAdd).ArrayNum,&(this->OutputsToAdd).ArrayMax);
      memcpy((pTVar34->AllocatorInstance).Data + (longlong)iVar19 * 0x40,local_218.Data,lVar24 << 6)
      ;
    }
    if (local_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data);
    }
    DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>
              ((FInputData *)local_230.Data,(int)local_228);
    if ((FInputData *)local_230.Data != (FInputData *)0x0) {
      FMemory::Free(local_230.Data);
    }
    pFVar38 = pFVar38 + 1;
    uVar23 = (ulonglong)local_254;
  }
  uVar36 = (this->InputsToAdd).ArrayNum - 1;
  uVar21 = 0;
  if (-1 < (int)uVar36) {
    local_248 = (ulonglong)(int)uVar36;
    lVar24 = local_248 * 0x50;
    pTVar32 = local_238;
    do {
      uVar39 = ~uVar36 >> 0x1f;
      uVar41 = uVar35;
      if ((int)uVar36 < *(int *)pTVar32) {
        uVar41 = uVar39;
      }
      local_250 = (FMetasoundFrontendInterface *)lVar24;
      if ((uVar41 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar7 = (FMetasoundFrontendClassVertex *)(local_220->AllocatorInstance).Data;
      pFVar31 = (FMetasoundFrontendClassVertex *)
                ((this->InputsToAdd).AllocatorInstance.Data + lVar24);
      iVar19 = *(int *)local_208;
      for (pFVar27 = pFVar7;
          pFVar27 != (FMetasoundFrontendClassVertex *)((longlong)pFVar7 + (longlong)iVar19 * 0x48);
          pFVar27 = (FMetasoundFrontendClassVertex *)&pFVar27[1].field_0x14) {
        if (*(longlong *)&pFVar31->field_0x8 == *(longlong *)&pFVar27->field_0x8) {
          if ((param_1 == (TFunction<bool___cdecl(FName,FName)> *)0x0) ||
             (*(longlong *)param_1 == 0)) {
            local_1e8.ComparisonIndex.Value = 0;
            local_1e8.Number = 0;
            local_1f0.ComparisonIndex.Value = 0;
            local_1f0.Number = 0;
            local_1f8.ComparisonIndex.Value = 0;
            local_1f8.Number = 0;
            FMetasoundFrontendClassVertex::SplitName(pFVar31,&local_1f8,&local_1e8);
            FMetasoundFrontendClassVertex::SplitName(pFVar27,&local_1f8,&local_1f0);
            bVar17 = local_1e8 == local_1f0;
          }
          else {
            FVar8.ComparisonIndex.Value = *(uint *)&pFVar27->field_0x0;
            FVar8.Number = *(uint *)&pFVar27->field_0x4;
            FVar9.ComparisonIndex.Value = *(uint *)&pFVar31->field_0x0;
            FVar9.Number = *(uint *)&pFVar31->field_0x4;
            bVar17 = UE::Core::Private::Function::
                     TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
                     ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
                                   *)param_1,FVar9,FVar8);
          }
          if (bVar17 != false) {
            lVar24 = ((longlong)pFVar27 - (longlong)pFVar7) / 0x12 +
                     ((longlong)pFVar27 - (longlong)pFVar7 >> 0x3f);
            uVar41 = (int)(lVar24 >> 2) - (int)(lVar24 >> 0x3f);
            goto LAB_14ae7982e;
          }
        }
      }
      uVar41 = 0xffffffff;
LAB_14ae7982e:
      pTVar32 = local_238;
      if (uVar41 != 0xffffffff) {
        uVar22 = uVar35;
        if ((int)uVar41 < (this->InputsToRemove).ArrayNum) {
          uVar22 = ~uVar41 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar33 = (local_220->AllocatorInstance).Data + (longlong)(int)uVar41 * 0x48;
        uVar22 = uVar35;
        if ((int)uVar36 < *(int *)local_238) {
          uVar22 = uVar39;
        }
        if ((uVar22 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar38 = local_250;
        local_118 = *(undefined8 *)pFVar33;
        uStack_110 = *(undefined8 *)(pFVar33 + 8);
        local_108 = *(undefined8 *)(pFVar33 + 0x10);
        uStack_100 = *(undefined8 *)(pFVar33 + 0x18);
        local_f8 = *(undefined8 *)(pFVar33 + 0x20);
        uStack_f0 = *(undefined8 *)(pFVar33 + 0x28);
        local_e8 = *(undefined4 *)(pFVar33 + 0x30);
        pFVar33 = (this->InputsToAdd).AllocatorInstance.Data;
        pFVar42 = (local_240->AllocatorInstance).Data;
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)local_250);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 8);
        uStack_e4 = (undefined4)uVar13;
        uStack_e0 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_dc = (undefined4)uVar14;
        uStack_d8 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 0x10);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 0x10 + 8);
        uStack_d4 = (undefined4)uVar13;
        uStack_d0 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_cc = (undefined4)uVar14;
        uStack_c8 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 0x20);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 0x20 + 8);
        local_c4 = (undefined4)uVar13;
        uStack_c0 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_bc = (undefined4)uVar14;
        uStack_b8 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_b4 = *(undefined4 *)(pFVar33 + (longlong)local_250 + 0x30);
        if (((pFVar42 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar42 + (longlong)local_240->ArrayMax * 0x68)
            ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = local_240->ArrayNum;
        if (iVar19 == local_240->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x468,&local_240->AllocatorInstance,&local_240->ArrayMax);
        }
        local_240->ArrayNum = iVar19 + 1;
        lVar24 = (longlong)iVar19 * 0x68;
        pFVar33 = (local_240->AllocatorInstance).Data;
        *(undefined8 *)(pFVar33 + lVar24) = local_118;
        *(undefined8 *)(pFVar33 + lVar24 + 8) = uStack_110;
        *(undefined8 *)(pFVar33 + lVar24 + 0x10) = local_108;
        *(undefined8 *)(pFVar33 + lVar24 + 0x10 + 8) = uStack_100;
        *(undefined8 *)(pFVar33 + lVar24 + 0x20) = local_f8;
        *(undefined8 *)(pFVar33 + lVar24 + 0x20 + 8) = uStack_f0;
        *(ulonglong *)(pFVar33 + lVar24 + 0x30) = CONCAT44(uStack_e4,local_e8);
        *(ulonglong *)(pFVar33 + lVar24 + 0x30 + 8) = CONCAT44(uStack_dc,uStack_e0);
        *(ulonglong *)(pFVar33 + lVar24 + 0x40) = CONCAT44(uStack_d4,uStack_d8);
        *(ulonglong *)(pFVar33 + lVar24 + 0x40 + 8) = CONCAT44(uStack_cc,uStack_d0);
        *(ulonglong *)(pFVar33 + lVar24 + 0x50) = CONCAT44(local_c4,uStack_c8);
        *(ulonglong *)(pFVar33 + lVar24 + 0x50 + 8) = CONCAT44(uStack_bc,uStack_c0);
        *(ulonglong *)(pFVar33 + lVar24 + 0x60) = CONCAT44(uStack_b4,uStack_b8);
        uVar22 = uVar21;
        if ((int)uVar41 < *(int *)local_208) {
          uVar22 = ~uVar41 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar25 = local_220;
        TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (local_220,uVar41);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&pTVar25->AllocatorInstance,pTVar25->ArrayNum,&pTVar25->ArrayMax);
        pTVar32 = local_238;
        uVar41 = uVar21;
        if ((int)uVar36 < *(int *)local_238) {
          uVar41 = uVar39;
        }
        if ((uVar41 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->InputsToAdd,uVar36);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&(this->InputsToAdd).AllocatorInstance,*(int *)pTVar32,
                   &(this->InputsToAdd).ArrayMax);
        local_250 = pFVar38;
      }
      lVar24 = (longlong)local_250 + -0x50;
      local_248 = local_248 - 1;
      uVar36 = uVar36 - 1;
    } while (-1 < (int)uVar36);
  }
  local_254 = (this->OutputsToAdd).ArrayNum - 1;
  if (-1 < (int)local_254) {
    local_238 = &this->PairedOutputs;
    local_240 = (TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
                 *)(longlong)(int)local_254;
    pTVar43 = &this->OutputsToRemove;
    pFVar38 = (FMetasoundFrontendInterface *)((longlong)local_240 << 6);
    pTVar34 = &this->OutputsToAdd;
    local_208 = pTVar34;
    local_200 = pTVar43;
    do {
      local_220 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_220._4_4_,~local_254);
      uVar36 = ~local_254 >> 0x1f;
      local_248 = CONCAT44(local_248._4_4_,uVar36);
      uVar35 = uVar21;
      if ((int)local_254 < pTVar34->ArrayNum) {
        uVar35 = uVar36;
      }
      local_250 = pFVar38;
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar7 = (FMetasoundFrontendClassVertex *)(pTVar43->AllocatorInstance).Data;
      iVar19 = pTVar43->ArrayNum;
      pFVar31 = (FMetasoundFrontendClassVertex *)
                ((pTVar34->AllocatorInstance).Data + (longlong)pFVar38);
      for (pFVar27 = pFVar7; pFVar27 != pFVar7 + iVar19; pFVar27 = pFVar27 + 1) {
        if (*(longlong *)&pFVar31->field_0x8 == *(longlong *)&pFVar27->field_0x8) {
          if ((param_1 == (TFunction<bool___cdecl(FName,FName)> *)0x0) ||
             (*(longlong *)param_1 == 0)) {
            local_1d0.ComparisonIndex.Value = 0;
            local_1d0.Number = 0;
            local_1d8.ComparisonIndex.Value = 0;
            local_1d8.Number = 0;
            local_1e0.ComparisonIndex.Value = 0;
            local_1e0.Number = 0;
            FMetasoundFrontendClassVertex::SplitName(pFVar31,&local_1e0,&local_1d0);
            FMetasoundFrontendClassVertex::SplitName(pFVar27,&local_1e0,&local_1d8);
            bVar17 = local_1d0 == local_1d8;
          }
          else {
            FVar10.ComparisonIndex.Value = *(uint *)&pFVar27->field_0x0;
            FVar10.Number = *(uint *)&pFVar27->field_0x4;
            FVar11.ComparisonIndex.Value = *(uint *)&pFVar31->field_0x0;
            FVar11.Number = *(uint *)&pFVar31->field_0x4;
            bVar17 = UE::Core::Private::Function::
                     TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
                     ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
                                   *)param_1,FVar11,FVar10);
          }
          if (bVar17 != false) {
            uVar35 = (uint)(((longlong)pFVar27 - (longlong)pFVar7) / 0x34);
            goto LAB_14ae79cc8;
          }
        }
      }
      uVar35 = 0xffffffff;
LAB_14ae79cc8:
      pTVar34 = local_208;
      pTVar43 = local_200;
      if (uVar35 != 0xffffffff) {
        uVar41 = ~uVar35 >> 0x1f;
        uVar36 = uVar21;
        if ((int)uVar35 < (this->OutputsToRemove).ArrayNum) {
          uVar36 = uVar41;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar33 = (this->OutputsToRemove).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x34;
        uVar36 = uVar21;
        if ((int)local_254 < (this->OutputsToAdd).ArrayNum) {
          uVar36 = (uint)local_248;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar34 = local_208;
        local_b0 = *(undefined8 *)pFVar33;
        uStack_a8 = *(undefined8 *)(pFVar33 + 8);
        local_a0 = *(undefined8 *)(pFVar33 + 0x10);
        uStack_98 = *(undefined8 *)(pFVar33 + 0x18);
        local_90 = *(undefined8 *)(pFVar33 + 0x20);
        uStack_88 = *(undefined8 *)(pFVar33 + 0x28);
        local_80 = *(undefined4 *)(pFVar33 + 0x30);
        pFVar33 = (local_208->AllocatorInstance).Data;
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)local_250);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 8);
        uStack_7c = (undefined4)uVar13;
        uStack_78 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_74 = (undefined4)uVar14;
        uStack_70 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 0x10);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 0x10 + 8);
        uStack_6c = (undefined4)uVar13;
        uStack_68 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_64 = (undefined4)uVar14;
        uStack_60 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 0x20);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)local_250 + 0x20 + 8);
        local_5c = (undefined4)uVar13;
        uStack_58 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_54 = (undefined4)uVar14;
        uStack_50 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_4c = *(undefined4 *)(pFVar33 + (longlong)local_250 + 0x30);
        pFVar33 = (local_238->AllocatorInstance).Data;
        if (((pFVar33 <= (FScriptContainerElement *)&local_b0) &&
            ((FScriptContainerElement *)&local_b0 < pFVar33 + (longlong)local_238->ArrayMax * 0x68))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = local_238->ArrayNum;
        if (iVar19 == local_238->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x468,&local_238->AllocatorInstance,local_170);
        }
        local_238->ArrayNum = iVar19 + 1;
        lVar24 = (longlong)iVar19 * 0x68;
        pFVar33 = (local_238->AllocatorInstance).Data;
        *(undefined8 *)(pFVar33 + lVar24) = local_b0;
        *(undefined8 *)(pFVar33 + lVar24 + 8) = uStack_a8;
        *(undefined8 *)(pFVar33 + lVar24 + 0x10) = local_a0;
        *(undefined8 *)(pFVar33 + lVar24 + 0x10 + 8) = uStack_98;
        *(undefined8 *)(pFVar33 + lVar24 + 0x20) = local_90;
        *(undefined8 *)(pFVar33 + lVar24 + 0x20 + 8) = uStack_88;
        *(ulonglong *)(pFVar33 + lVar24 + 0x30) = CONCAT44(uStack_7c,local_80);
        *(ulonglong *)(pFVar33 + lVar24 + 0x30 + 8) = CONCAT44(uStack_74,uStack_78);
        *(ulonglong *)(pFVar33 + lVar24 + 0x40) = CONCAT44(uStack_6c,uStack_70);
        *(ulonglong *)(pFVar33 + lVar24 + 0x40 + 8) = CONCAT44(uStack_64,uStack_68);
        *(ulonglong *)(pFVar33 + lVar24 + 0x50) = CONCAT44(local_5c,uStack_60);
        *(ulonglong *)(pFVar33 + lVar24 + 0x50 + 8) = CONCAT44(uStack_54,uStack_58);
        *(ulonglong *)(pFVar33 + lVar24 + 0x60) = CONCAT44(uStack_4c,uStack_50);
        uVar36 = uVar21;
        if ((int)uVar35 < (this->OutputsToRemove).ArrayNum) {
          uVar36 = uVar41;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar43 = local_200;
        pFVar33 = (local_200->AllocatorInstance).Data;
        iVar19 = ~uVar35 + local_200->ArrayNum;
        if (1 < iVar19) {
          iVar19 = 1;
        }
        if (iVar19 != 0) {
          memmove(pFVar33 + (longlong)(int)uVar35 * 0x34,
                  pFVar33 + (longlong)(local_200->ArrayNum - iVar19) * 0x34,(longlong)iVar19 * 0x34)
          ;
        }
        pTVar43->ArrayNum = pTVar43->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x34,4,&pTVar43->AllocatorInstance,pTVar43->ArrayNum,local_168);
        uVar35 = uVar21;
        if ((int)local_254 < pTVar34->ArrayNum) {
          uVar35 = (uint)local_248;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar38 = local_250;
        iVar19 = (int)local_220 + pTVar34->ArrayNum;
        pFVar33 = (pTVar34->AllocatorInstance).Data;
        if (1 < iVar19) {
          iVar19 = 1;
        }
        if (iVar19 != 0) {
          memmove(pFVar33 + (longlong)local_250,
                  pFVar33 + (longlong)(pTVar34->ArrayNum - iVar19) * 0x40,(longlong)iVar19 << 6);
        }
        pTVar34->ArrayNum = pTVar34->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&pTVar34->AllocatorInstance,pTVar34->ArrayNum,local_160);
      }
      pFVar38 = (FMetasoundFrontendInterface *)((longlong)pFVar38 + -0x40);
      local_254 = local_254 - 1;
      local_240 = (TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
                   *)((longlong)local_240 + -1);
    } while (-1 < (int)local_254);
  }
  return;
}

// RemoveUnsupportedVertices @ 14ae87d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::RemoveUnsupportedVertices
          (FModifyRootGraphInterfaces *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  FMetasoundFrontendClassInput *pFVar6;
  FMetasoundFrontendClassVertex *pFVar7;
  longlong *plVar8;
  FMetasoundFrontendClassVertex *pFVar9;
  FMetasoundFrontendClassVertex *pFVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  FMetasoundFrontendClassInput local_c0;
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar10 = (FMetasoundFrontendClassVertex *)(this->InputsToRemove).AllocatorInstance.Data;
  iVar1 = (this->InputsToRemove).ArrayNum;
  pFVar9 = (FMetasoundFrontendClassVertex *)((longlong)pFVar10 + (longlong)iVar1 * 0x48);
  while( true ) {
    if ((this->InputsToRemove).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c8);
    }
    if (pFVar10 == pFVar9) break;
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)param_1->Object + 0x160))(param_1->Object,local_78,pFVar10);
    UE::Core::Private::Function::CheckCallable((void *)puVar4[2]);
    pcVar2 = (code *)puVar4[2];
    plVar8 = puVar4 + 4;
    if ((longlong *)puVar4[7] != (longlong *)0x0) {
      plVar8 = (longlong *)puVar4[7];
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar2)(uVar5);
    *puVar4 = pFVar6;
    if (local_68 != 0) {
      plVar8 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar8 = local_40;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pFVar6 != (FMetasoundFrontendClassInput *)0x0) {
      FMetasoundFrontendClassInput::FMetasoundFrontendClassInput(&local_c0,pFVar10);
      bVar3 = FMetasoundFrontendClassInput::IsFunctionalEquivalent(pFVar6,&local_c0);
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)local_c0.Defaults.AllocatorInstance.Data,
                 local_c0.Defaults.ArrayNum);
      if ((FMetasoundFrontendClassInputDefault *)local_c0.Defaults.AllocatorInstance.Data !=
          (FMetasoundFrontendClassInputDefault *)0x0) {
        FMemory::Free(local_c0.Defaults.AllocatorInstance.Data);
      }
      if (bVar3) {
        (**(code **)(*(longlong *)param_1->Object + 0x178))(param_1->Object,pFVar10);
      }
    }
    pFVar10 = (FMetasoundFrontendClassVertex *)&pFVar10[1].field_0x14;
  }
  iVar1 = (this->OutputsToRemove).ArrayNum;
  pFVar9 = (FMetasoundFrontendClassVertex *)(this->OutputsToRemove).AllocatorInstance.Data;
  pFVar10 = pFVar9 + iVar1;
  while( true ) {
    if ((this->OutputsToRemove).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c8);
    }
    if (pFVar9 == pFVar10) break;
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)param_1->Object + 0x168))(param_1->Object,local_78,pFVar9);
    UE::Core::Private::Function::CheckCallable((void *)puVar4[2]);
    pcVar2 = (code *)puVar4[2];
    plVar8 = puVar4 + 4;
    if ((longlong *)puVar4[7] != (longlong *)0x0) {
      plVar8 = (longlong *)puVar4[7];
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    pFVar7 = (FMetasoundFrontendClassVertex *)(*pcVar2)(uVar5);
    *puVar4 = pFVar7;
    if (local_68 != 0) {
      plVar8 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar8 = local_40;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pFVar7 != (FMetasoundFrontendClassVertex *)0x0) {
      bVar3 = FMetasoundFrontendClassVertex::IsFunctionalEquivalent(pFVar7,pFVar9);
      if (bVar3) {
        (**(code **)(*(longlong *)param_1->Object + 400))(param_1->Object,pFVar9);
      }
    }
    pFVar9 = pFVar9 + 1;
  }
  if (((this->InputsToRemove).ArrayNum == 0) && ((this->OutputsToRemove).ArrayNum == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// SetNamePairingFunction @ 14ae891f0

void __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::SetNamePairingFunction
          (FModifyRootGraphInterfaces *this,TFunction<bool___cdecl(FName,FName)> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FMetasoundFrontendClassInput *pFVar4;
  FInputData *pFVar5;
  FMetasoundFrontendClassInputDefault *pFVar6;
  FMetasoundFrontendClassVertex *pFVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ForAnyElementType FVar15;
  FMetasoundFrontendInterface *pFVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined8 *puVar26;
  FMetasoundFrontendClassVertex *pFVar27;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  FMetasoundFrontendClassVertex *pFVar31;
  TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
  *pTVar32;
  FScriptContainerElement *pFVar33;
  TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData,TSizedDefaultAllocator<32>_>
  *pTVar34;
  uint uVar35;
  uint uVar36;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar37;
  FMetasoundFrontendInterface *pFVar38;
  uint uVar39;
  longlong *plVar40;
  uint uVar41;
  FScriptContainerElement *pFVar42;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTVar43;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 uStack_258;
  undefined1 auStack_257 [3];
  uint uStack_254;
  FMetasoundFrontendInterface *pFStack_250;
  ulonglong uStack_248;
  TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
  *pTStack_240;
  TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
  *pTStack_238;
  ForAnyElementType FStack_230;
  undefined8 uStack_228;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTStack_220;
  ForAnyElementType FStack_218;
  undefined8 uStack_210;
  TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData,TSizedDefaultAllocator<32>_>
  *pTStack_208;
  TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *pTStack_200;
  FName FStack_1f8;
  FName FStack_1f0;
  FName FStack_1e8;
  FName FStack_1e0;
  FName FStack_1d8;
  FName FStack_1d0;
  FInputData FStack_1c8;
  FMetasoundFrontendInterface *pFStack_178;
  int *piStack_170;
  int *piStack_168;
  int *piStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  FMetasoundFrontendInterface *pFStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pTVar25 = &this->InputsToRemove;
  piVar1 = &(this->InputsToRemove).ArrayNum;
  pFVar4 = (FMetasoundFrontendClassInput *)(pTVar25->AllocatorInstance).Data;
  piVar2 = &(this->InputsToRemove).ArrayMax;
  pTStack_220 = pTVar25;
  pTStack_208 = (TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData,TSizedDefaultAllocator<32>_>
                 *)piVar1;
  if ((this->InputsToRemove).ArrayMax < 0) {
    DestructItems<FMetasoundFrontendClassInput,int>(pFVar4,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&pTVar25->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FMetasoundFrontendClassInput,int>(pFVar4,*piVar1);
    *piVar1 = 0;
  }
  piVar1 = &(this->InputsToAdd).ArrayNum;
  pFVar5 = (FInputData *)(this->InputsToAdd).AllocatorInstance.Data;
  piVar2 = &(this->InputsToAdd).ArrayMax;
  pTStack_238 = (TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
                 *)piVar1;
  if ((this->InputsToAdd).ArrayMax < 0) {
    DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>(pFVar5,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->InputsToAdd).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>(pFVar5,*piVar1);
    *piVar1 = 0;
  }
  pTVar43 = &this->OutputsToRemove;
  piStack_168 = &(this->OutputsToRemove).ArrayMax;
  (this->OutputsToRemove).ArrayNum = 0;
  if ((this->OutputsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x34,4,0,&pTVar43->AllocatorInstance,0,piStack_168);
  }
  piStack_160 = &(this->OutputsToAdd).ArrayMax;
  (this->OutputsToAdd).ArrayNum = 0;
  if ((this->OutputsToAdd).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->OutputsToAdd).AllocatorInstance,0,piStack_160);
  }
  pTStack_240 = &this->PairedInputs;
  (this->PairedInputs).ArrayNum = 0;
  if ((this->PairedInputs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,4,0,&pTStack_240->AllocatorInstance,0,&(this->PairedInputs).ArrayMax);
  }
  piStack_170 = &(this->PairedOutputs).ArrayMax;
  (this->PairedOutputs).ArrayNum = 0;
  if ((this->PairedOutputs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,4,0,&(this->PairedOutputs).AllocatorInstance,0,piStack_170);
  }
  iVar19 = (this->InterfacesToRemove).ArrayNum;
  pTVar28 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)
            (this->InterfacesToRemove).AllocatorInstance.Data;
  pTVar25 = pTVar28 + 1;
  pTVar37 = pTVar28 + (longlong)iVar19 * 6;
  while( true ) {
    if ((this->InterfacesToRemove).ArrayNum != iVar19) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendInterface,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_18);
    }
    if (pTVar28 == pTVar37) break;
    if ((pTStack_220 == pTVar28) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar20 = pTVar25[-1].ArrayNum;
    if (iVar20 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x48,8,iVar20,&pTStack_220->AllocatorInstance,&pTStack_220->ArrayNum,
                          &pTStack_220->ArrayMax);
      ConstructItems<FMetasoundFrontendClassInput,FMetasoundFrontendClassInput,int>
                ((this->InputsToRemove).AllocatorInstance.Data + (longlong)iVar18 * 0x48,
                 (FMetasoundFrontendClassInput *)(pTVar28->AllocatorInstance).Data,iVar20);
    }
    if ((pTVar43 == (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)pTVar25) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar20 = pTVar25->ArrayNum;
    if (iVar20 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x34,4,iVar20,&pTVar43->AllocatorInstance,
                          &(this->OutputsToRemove).ArrayNum,&(this->OutputsToRemove).ArrayMax);
      memcpy((pTVar43->AllocatorInstance).Data + (longlong)iVar18 * 0x34,
             (pTVar25->AllocatorInstance).Data,(longlong)iVar20 * 0x34);
    }
    pTVar28 = pTVar28 + 6;
    pTVar25 = pTVar25 + 6;
  }
  uStack_254 = (this->InterfacesToAdd).ArrayNum;
  uVar23 = (ulonglong)(int)uStack_254;
  pFVar38 = (FMetasoundFrontendInterface *)(this->InterfacesToAdd).AllocatorInstance.Data;
  pFStack_178 = pFVar38 + uVar23;
  while( true ) {
    pFVar16 = pFStack_178;
    pFStack_250 = pFVar38;
    if ((this->InterfacesToAdd).ArrayNum != (int)uVar23) {
      auStackX_20[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendInterface,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_20);
    }
    uVar35 = 0;
    if (pFVar38 == pFVar16) break;
    iVar19 = (int)pFVar38->_padding_;
    uVar23 = (ulonglong)iVar19;
    plVar29 = (longlong *)pFVar38->_padding_;
    FStack_230.Data = (FScriptContainerElement *)0x0;
    uStack_228 = 0;
    uStack_248 = CONCAT44(uStack_248._4_4_,iVar19);
    pTStack_200 = (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)
                  (plVar29 + uVar23 * 9);
    plVar40 = plVar29 + 7;
    while( true ) {
      pTVar43 = pTStack_200;
      if ((int)pFVar38->_padding_ != (int)uVar23) {
        uStack_258 = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&uStack_258);
      }
      if ((TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)plVar29 == pTVar43)
      break;
      FStack_1c8.Input._padding_ = *plVar29;
      FStack_1c8.Input._padding_ = plVar29[1];
      FStack_1c8.Input._padding_._0_4_ = (undefined4)plVar29[6];
      FStack_1c8.Input._padding_ = plVar29[2];
      FStack_1c8.Input._padding_ = plVar29[3];
      FStack_1c8.Input.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1c8.Input.Defaults.ArrayNum = 0;
      FStack_1c8.Input.Defaults.ArrayMax = 0;
      FStack_1c8.InputInterface = (FMetasoundFrontendInterface *)0x0;
      FStack_1c8.Input._padding_ = plVar29[4];
      FStack_1c8.Input._padding_ = plVar29[5];
      if (&FStack_1c8.Input.Defaults !=
          (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)plVar40) {
        DestructItems<FMetasoundFrontendClassInputDefault,int>
                  ((FMetasoundFrontendClassInputDefault *)0x0,0);
        iVar19 = (int)plVar40[1];
        pFVar6 = (FMetasoundFrontendClassInputDefault *)*plVar40;
        FStack_1c8.Input.Defaults.ArrayNum = iVar19;
        if ((iVar19 == 0) && (FStack_1c8.Input.Defaults.ArrayMax == 0)) {
          FStack_1c8.Input.Defaults.ArrayNum = 0;
          FStack_1c8.Input.Defaults.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar19,FStack_1c8.Input.Defaults.ArrayMax,
                     &FStack_1c8.Input.Defaults.AllocatorInstance,iVar19,
                     &FStack_1c8.Input.Defaults.ArrayMax);
          ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                    (FStack_1c8.Input.Defaults.AllocatorInstance.Data,pFVar6,iVar19);
        }
      }
      FStack_1c8.InputInterface = pFVar38;
      if (((FStack_230.Data <= &FStack_1c8) &&
          (&FStack_1c8 < (FInputData *)(FStack_230.Data + (longlong)uStack_228._4_4_ * 0x50))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((int)uStack_228 == uStack_228._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&FStack_230,(int *)((longlong)&uStack_228 + 4));
        uStack_228 = CONCAT44(uStack_228._4_4_,iVar19);
      }
      FVar15.Data = FStack_1c8.Input.Defaults.AllocatorInstance.Data;
      lVar24 = (longlong)(int)uStack_228;
      uStack_228 = CONCAT44(uStack_228._4_4_,(int)uStack_228 + 1);
      pFVar42 = FStack_230.Data + lVar24 * 0x50;
      *(longlong *)&pFVar42->field_0x0 = FStack_1c8.Input._padding_;
      *(longlong *)(pFVar42 + 8) = FStack_1c8.Input._padding_;
      pFVar33 = pFVar42 + 0x38;
      *(longlong *)(pFVar42 + 0x10) = FStack_1c8.Input._padding_;
      *(longlong *)(pFVar42 + 0x18) = FStack_1c8.Input._padding_;
      *(longlong *)(pFVar42 + 0x20) = FStack_1c8.Input._padding_;
      *(longlong *)(pFVar42 + 0x28) = FStack_1c8.Input._padding_;
      *(undefined4 *)(pFVar42 + 0x30) = (undefined4)FStack_1c8.Input._padding_;
      *(FScriptContainerElement **)pFVar33 = (FScriptContainerElement *)0x0;
      iVar19 = FStack_1c8.Input.Defaults.ArrayNum;
      *(int *)(pFVar42 + 0x40) = FStack_1c8.Input.Defaults.ArrayNum;
      if (FStack_1c8.Input.Defaults.ArrayNum == 0) {
        *(int *)(pFVar42 + 0x44) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,FStack_1c8.Input.Defaults.ArrayNum,0,(ForAnyElementType *)pFVar33,
                   FStack_1c8.Input.Defaults.ArrayNum,(int *)(pFVar42 + 0x44));
                    /* WARNING: Load size is inaccurate */
        ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                  (*pFVar33,(FMetasoundFrontendClassInputDefault *)FVar15.Data,iVar19);
      }
      *(FMetasoundFrontendInterface **)(pFVar42 + 0x48) = FStack_1c8.InputInterface;
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)
                 FStack_1c8.Input.Defaults.AllocatorInstance.Data,FStack_1c8.Input.Defaults.ArrayNum
                );
      if ((FMetasoundFrontendClassInputDefault *)FStack_1c8.Input.Defaults.AllocatorInstance.Data !=
          (FMetasoundFrontendClassInputDefault *)0x0) {
        FMemory::Free(FStack_1c8.Input.Defaults.AllocatorInstance.Data);
      }
      plVar29 = plVar29 + 9;
      uVar23 = uStack_248 & 0xffffffff;
      plVar40 = plVar40 + 9;
      pFVar38 = pFStack_250;
    }
    pTVar3 = &this->InputsToAdd;
    if ((pTVar3 == (TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,TSizedDefaultAllocator<32>_>
                    *)&FStack_230) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar19 = (int)uStack_228;
    if ((int)uStack_228 != 0) {
      iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x50,8,(int)uStack_228,&pTVar3->AllocatorInstance,
                          &(this->InputsToAdd).ArrayNum,&(this->InputsToAdd).ArrayMax);
      ConstructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar20 * 0x50,
                 (FInputData *)FStack_230.Data,iVar19);
    }
    iVar19 = (int)pFVar38->_padding_;
    puVar26 = (undefined8 *)pFVar38->_padding_;
    FStack_218.Data = (FScriptContainerElement *)0x0;
    puVar30 = (undefined8 *)((longlong)iVar19 * 0x34 + (longlong)puVar26);
    uStack_210 = 0;
    while( true ) {
      if ((int)pFVar38->_padding_ != iVar19) {
        auStack_257[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_257);
      }
      if (puVar26 == puVar30) break;
      uStack_158 = *puVar26;
      uStack_150 = puVar26[1];
      uStack_128 = *(undefined4 *)(puVar26 + 6);
      uStack_148 = puVar26[2];
      uStack_140 = puVar26[3];
      uStack_138 = puVar26[4];
      uStack_130 = puVar26[5];
      pFStack_120 = pFVar38;
      if (((FStack_218.Data <= (FScriptContainerElement *)&uStack_158) &&
          ((FScriptContainerElement *)&uStack_158 <
           FStack_218.Data + (longlong)uStack_210._4_4_ * 0x40)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((int)uStack_210 == uStack_210._4_4_) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&FStack_218,(int *)((longlong)&uStack_210 + 4));
        uStack_210 = CONCAT44(uStack_210._4_4_,iVar20);
      }
      lVar24 = (longlong)(int)uStack_210 * 0x40;
      puVar26 = (undefined8 *)((longlong)puVar26 + 0x34);
      uStack_210 = CONCAT44(uStack_210._4_4_,(int)uStack_210 + 1);
      *(undefined8 *)(FStack_218.Data + lVar24) = uStack_158;
      *(undefined8 *)(FStack_218.Data + lVar24 + 8) = uStack_150;
      *(undefined8 *)(FStack_218.Data + lVar24 + 0x10) = uStack_148;
      *(undefined8 *)(FStack_218.Data + lVar24 + 0x10 + 8) = uStack_140;
      *(undefined8 *)(FStack_218.Data + lVar24 + 0x20) = uStack_138;
      *(undefined8 *)(FStack_218.Data + lVar24 + 0x20 + 8) = uStack_130;
      *(ulonglong *)(FStack_218.Data + lVar24 + 0x30) = CONCAT44(uStack_124,uStack_128);
      *(FMetasoundFrontendInterface **)(FStack_218.Data + lVar24 + 0x30 + 8) = pFStack_120;
    }
    pTVar34 = &this->OutputsToAdd;
    if ((pTVar34 ==
         (TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData,TSizedDefaultAllocator<32>_>
          *)&FStack_218) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar24 = (longlong)(int)uStack_210;
    if ((int)uStack_210 != 0) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40,8,(int)uStack_210,&pTVar34->AllocatorInstance,
                          &(this->OutputsToAdd).ArrayNum,&(this->OutputsToAdd).ArrayMax);
      memcpy((pTVar34->AllocatorInstance).Data + (longlong)iVar19 * 0x40,FStack_218.Data,lVar24 << 6
            );
    }
    if (FStack_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_218.Data);
    }
    DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>
              ((FInputData *)FStack_230.Data,(int)uStack_228);
    if ((FInputData *)FStack_230.Data != (FInputData *)0x0) {
      FMemory::Free(FStack_230.Data);
    }
    pFVar38 = pFVar38 + 1;
    uVar23 = (ulonglong)uStack_254;
  }
  uVar36 = (this->InputsToAdd).ArrayNum - 1;
  uVar21 = 0;
  if (-1 < (int)uVar36) {
    uStack_248 = (ulonglong)(int)uVar36;
    lVar24 = uStack_248 * 0x50;
    pTVar32 = pTStack_238;
    do {
      uVar39 = ~uVar36 >> 0x1f;
      uVar41 = uVar35;
      if ((int)uVar36 < *(int *)pTVar32) {
        uVar41 = uVar39;
      }
      pFStack_250 = (FMetasoundFrontendInterface *)lVar24;
      if ((uVar41 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar7 = (FMetasoundFrontendClassVertex *)(pTStack_220->AllocatorInstance).Data;
      pFVar31 = (FMetasoundFrontendClassVertex *)
                ((this->InputsToAdd).AllocatorInstance.Data + lVar24);
      iVar19 = *(int *)pTStack_208;
      for (pFVar27 = pFVar7;
          pFVar27 != (FMetasoundFrontendClassVertex *)((longlong)pFVar7 + (longlong)iVar19 * 0x48);
          pFVar27 = (FMetasoundFrontendClassVertex *)&pFVar27[1].field_0x14) {
        if (*(longlong *)&pFVar31->field_0x8 == *(longlong *)&pFVar27->field_0x8) {
          if ((param_1 == (TFunction<bool___cdecl(FName,FName)> *)0x0) ||
             (*(longlong *)param_1 == 0)) {
            FStack_1e8.ComparisonIndex.Value = 0;
            FStack_1e8.Number = 0;
            FStack_1f0.ComparisonIndex.Value = 0;
            FStack_1f0.Number = 0;
            FStack_1f8.ComparisonIndex.Value = 0;
            FStack_1f8.Number = 0;
            FMetasoundFrontendClassVertex::SplitName(pFVar31,&FStack_1f8,&FStack_1e8);
            FMetasoundFrontendClassVertex::SplitName(pFVar27,&FStack_1f8,&FStack_1f0);
            bVar17 = FStack_1e8 == FStack_1f0;
          }
          else {
            FVar8.ComparisonIndex.Value = *(uint *)&pFVar27->field_0x0;
            FVar8.Number = *(uint *)&pFVar27->field_0x4;
            FVar9.ComparisonIndex.Value = *(uint *)&pFVar31->field_0x0;
            FVar9.Number = *(uint *)&pFVar31->field_0x4;
            bVar17 = UE::Core::Private::Function::
                     TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
                     ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
                                   *)param_1,FVar9,FVar8);
          }
          if (bVar17 != false) {
            lVar24 = ((longlong)pFVar27 - (longlong)pFVar7) / 0x12 +
                     ((longlong)pFVar27 - (longlong)pFVar7 >> 0x3f);
            uVar41 = (int)(lVar24 >> 2) - (int)(lVar24 >> 0x3f);
            goto LAB_14ae7982e;
          }
        }
      }
      uVar41 = 0xffffffff;
LAB_14ae7982e:
      pTVar32 = pTStack_238;
      if (uVar41 != 0xffffffff) {
        uVar22 = uVar35;
        if ((int)uVar41 < (this->InputsToRemove).ArrayNum) {
          uVar22 = ~uVar41 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar33 = (pTStack_220->AllocatorInstance).Data + (longlong)(int)uVar41 * 0x48;
        uVar22 = uVar35;
        if ((int)uVar36 < *(int *)pTStack_238) {
          uVar22 = uVar39;
        }
        if ((uVar22 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar38 = pFStack_250;
        uStack_118 = *(undefined8 *)pFVar33;
        uStack_110 = *(undefined8 *)(pFVar33 + 8);
        uStack_108 = *(undefined8 *)(pFVar33 + 0x10);
        uStack_100 = *(undefined8 *)(pFVar33 + 0x18);
        uStack_f8 = *(undefined8 *)(pFVar33 + 0x20);
        uStack_f0 = *(undefined8 *)(pFVar33 + 0x28);
        uStack_e8 = *(undefined4 *)(pFVar33 + 0x30);
        pFVar33 = (this->InputsToAdd).AllocatorInstance.Data;
        pFVar42 = (pTStack_240->AllocatorInstance).Data;
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 8);
        uStack_e4 = (undefined4)uVar13;
        uStack_e0 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_dc = (undefined4)uVar14;
        uStack_d8 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 0x10);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 0x10 + 8);
        uStack_d4 = (undefined4)uVar13;
        uStack_d0 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_cc = (undefined4)uVar14;
        uStack_c8 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 0x20);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 0x20 + 8);
        uStack_c4 = (undefined4)uVar13;
        uStack_c0 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_bc = (undefined4)uVar14;
        uStack_b8 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_b4 = *(undefined4 *)(pFVar33 + (longlong)pFStack_250 + 0x30);
        if (((pFVar42 <= (FScriptContainerElement *)&uStack_118) &&
            ((FScriptContainerElement *)&uStack_118 <
             pFVar42 + (longlong)pTStack_240->ArrayMax * 0x68)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = pTStack_240->ArrayNum;
        if (iVar19 == pTStack_240->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x468,&pTStack_240->AllocatorInstance,&pTStack_240->ArrayMax);
        }
        pTStack_240->ArrayNum = iVar19 + 1;
        lVar24 = (longlong)iVar19 * 0x68;
        pFVar33 = (pTStack_240->AllocatorInstance).Data;
        *(undefined8 *)(pFVar33 + lVar24) = uStack_118;
        *(undefined8 *)(pFVar33 + lVar24 + 8) = uStack_110;
        *(undefined8 *)(pFVar33 + lVar24 + 0x10) = uStack_108;
        *(undefined8 *)(pFVar33 + lVar24 + 0x10 + 8) = uStack_100;
        *(undefined8 *)(pFVar33 + lVar24 + 0x20) = uStack_f8;
        *(undefined8 *)(pFVar33 + lVar24 + 0x20 + 8) = uStack_f0;
        *(ulonglong *)(pFVar33 + lVar24 + 0x30) = CONCAT44(uStack_e4,uStack_e8);
        *(ulonglong *)(pFVar33 + lVar24 + 0x30 + 8) = CONCAT44(uStack_dc,uStack_e0);
        *(ulonglong *)(pFVar33 + lVar24 + 0x40) = CONCAT44(uStack_d4,uStack_d8);
        *(ulonglong *)(pFVar33 + lVar24 + 0x40 + 8) = CONCAT44(uStack_cc,uStack_d0);
        *(ulonglong *)(pFVar33 + lVar24 + 0x50) = CONCAT44(uStack_c4,uStack_c8);
        *(ulonglong *)(pFVar33 + lVar24 + 0x50 + 8) = CONCAT44(uStack_bc,uStack_c0);
        *(ulonglong *)(pFVar33 + lVar24 + 0x60) = CONCAT44(uStack_b4,uStack_b8);
        uVar22 = uVar21;
        if ((int)uVar41 < *(int *)pTStack_208) {
          uVar22 = ~uVar41 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar25 = pTStack_220;
        TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (pTStack_220,uVar41);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&pTVar25->AllocatorInstance,pTVar25->ArrayNum,&pTVar25->ArrayMax);
        pTVar32 = pTStack_238;
        uVar41 = uVar21;
        if ((int)uVar36 < *(int *)pTStack_238) {
          uVar41 = uVar39;
        }
        if ((uVar41 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->InputsToAdd,uVar36);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&(this->InputsToAdd).AllocatorInstance,*(int *)pTVar32,
                   &(this->InputsToAdd).ArrayMax);
        pFStack_250 = pFVar38;
      }
      lVar24 = (longlong)pFStack_250 + -0x50;
      uStack_248 = uStack_248 - 1;
      uVar36 = uVar36 - 1;
    } while (-1 < (int)uVar36);
  }
  uStack_254 = (this->OutputsToAdd).ArrayNum - 1;
  if (-1 < (int)uStack_254) {
    pTStack_238 = &this->PairedOutputs;
    pTStack_240 = (TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
                   *)(longlong)(int)uStack_254;
    pTVar43 = &this->OutputsToRemove;
    pFVar38 = (FMetasoundFrontendInterface *)((longlong)pTStack_240 << 6);
    pTVar34 = &this->OutputsToAdd;
    pTStack_208 = pTVar34;
    pTStack_200 = pTVar43;
    do {
      pTStack_220 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)
                    CONCAT44(pTStack_220._4_4_,~uStack_254);
      uVar36 = ~uStack_254 >> 0x1f;
      uStack_248 = CONCAT44(uStack_248._4_4_,uVar36);
      uVar35 = uVar21;
      if ((int)uStack_254 < pTVar34->ArrayNum) {
        uVar35 = uVar36;
      }
      pFStack_250 = pFVar38;
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar7 = (FMetasoundFrontendClassVertex *)(pTVar43->AllocatorInstance).Data;
      iVar19 = pTVar43->ArrayNum;
      pFVar31 = (FMetasoundFrontendClassVertex *)
                ((pTVar34->AllocatorInstance).Data + (longlong)pFVar38);
      for (pFVar27 = pFVar7; pFVar27 != pFVar7 + iVar19; pFVar27 = pFVar27 + 1) {
        if (*(longlong *)&pFVar31->field_0x8 == *(longlong *)&pFVar27->field_0x8) {
          if ((param_1 == (TFunction<bool___cdecl(FName,FName)> *)0x0) ||
             (*(longlong *)param_1 == 0)) {
            FStack_1d0.ComparisonIndex.Value = 0;
            FStack_1d0.Number = 0;
            FStack_1d8.ComparisonIndex.Value = 0;
            FStack_1d8.Number = 0;
            FStack_1e0.ComparisonIndex.Value = 0;
            FStack_1e0.Number = 0;
            FMetasoundFrontendClassVertex::SplitName(pFVar31,&FStack_1e0,&FStack_1d0);
            FMetasoundFrontendClassVertex::SplitName(pFVar27,&FStack_1e0,&FStack_1d8);
            bVar17 = FStack_1d0 == FStack_1d8;
          }
          else {
            FVar10.ComparisonIndex.Value = *(uint *)&pFVar27->field_0x0;
            FVar10.Number = *(uint *)&pFVar27->field_0x4;
            FVar11.ComparisonIndex.Value = *(uint *)&pFVar31->field_0x0;
            FVar11.Number = *(uint *)&pFVar31->field_0x4;
            bVar17 = UE::Core::Private::Function::
                     TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
                     ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
                                   *)param_1,FVar11,FVar10);
          }
          if (bVar17 != false) {
            uVar35 = (uint)(((longlong)pFVar27 - (longlong)pFVar7) / 0x34);
            goto LAB_14ae79cc8;
          }
        }
      }
      uVar35 = 0xffffffff;
LAB_14ae79cc8:
      pTVar34 = pTStack_208;
      pTVar43 = pTStack_200;
      if (uVar35 != 0xffffffff) {
        uVar41 = ~uVar35 >> 0x1f;
        uVar36 = uVar21;
        if ((int)uVar35 < (this->OutputsToRemove).ArrayNum) {
          uVar36 = uVar41;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar33 = (this->OutputsToRemove).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x34;
        uVar36 = uVar21;
        if ((int)uStack_254 < (this->OutputsToAdd).ArrayNum) {
          uVar36 = (uint)uStack_248;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar34 = pTStack_208;
        uStack_b0 = *(undefined8 *)pFVar33;
        uStack_a8 = *(undefined8 *)(pFVar33 + 8);
        uStack_a0 = *(undefined8 *)(pFVar33 + 0x10);
        uStack_98 = *(undefined8 *)(pFVar33 + 0x18);
        uStack_90 = *(undefined8 *)(pFVar33 + 0x20);
        uStack_88 = *(undefined8 *)(pFVar33 + 0x28);
        uStack_80 = *(undefined4 *)(pFVar33 + 0x30);
        pFVar33 = (pTStack_208->AllocatorInstance).Data;
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 8);
        uStack_7c = (undefined4)uVar13;
        uStack_78 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_74 = (undefined4)uVar14;
        uStack_70 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 0x10);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 0x10 + 8);
        uStack_6c = (undefined4)uVar13;
        uStack_68 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_64 = (undefined4)uVar14;
        uStack_60 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar13 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 0x20);
        uVar14 = *(undefined8 *)(pFVar33 + (longlong)pFStack_250 + 0x20 + 8);
        uStack_5c = (undefined4)uVar13;
        uStack_58 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_54 = (undefined4)uVar14;
        uStack_50 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_4c = *(undefined4 *)(pFVar33 + (longlong)pFStack_250 + 0x30);
        pFVar33 = (pTStack_238->AllocatorInstance).Data;
        if (((pFVar33 <= (FScriptContainerElement *)&uStack_b0) &&
            ((FScriptContainerElement *)&uStack_b0 <
             pFVar33 + (longlong)pTStack_238->ArrayMax * 0x68)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = pTStack_238->ArrayNum;
        if (iVar19 == pTStack_238->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x468,&pTStack_238->AllocatorInstance,piStack_170);
        }
        pTStack_238->ArrayNum = iVar19 + 1;
        lVar24 = (longlong)iVar19 * 0x68;
        pFVar33 = (pTStack_238->AllocatorInstance).Data;
        *(undefined8 *)(pFVar33 + lVar24) = uStack_b0;
        *(undefined8 *)(pFVar33 + lVar24 + 8) = uStack_a8;
        *(undefined8 *)(pFVar33 + lVar24 + 0x10) = uStack_a0;
        *(undefined8 *)(pFVar33 + lVar24 + 0x10 + 8) = uStack_98;
        *(undefined8 *)(pFVar33 + lVar24 + 0x20) = uStack_90;
        *(undefined8 *)(pFVar33 + lVar24 + 0x20 + 8) = uStack_88;
        *(ulonglong *)(pFVar33 + lVar24 + 0x30) = CONCAT44(uStack_7c,uStack_80);
        *(ulonglong *)(pFVar33 + lVar24 + 0x30 + 8) = CONCAT44(uStack_74,uStack_78);
        *(ulonglong *)(pFVar33 + lVar24 + 0x40) = CONCAT44(uStack_6c,uStack_70);
        *(ulonglong *)(pFVar33 + lVar24 + 0x40 + 8) = CONCAT44(uStack_64,uStack_68);
        *(ulonglong *)(pFVar33 + lVar24 + 0x50) = CONCAT44(uStack_5c,uStack_60);
        *(ulonglong *)(pFVar33 + lVar24 + 0x50 + 8) = CONCAT44(uStack_54,uStack_58);
        *(ulonglong *)(pFVar33 + lVar24 + 0x60) = CONCAT44(uStack_4c,uStack_50);
        uVar36 = uVar21;
        if ((int)uVar35 < (this->OutputsToRemove).ArrayNum) {
          uVar36 = uVar41;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar43 = pTStack_200;
        pFVar33 = (pTStack_200->AllocatorInstance).Data;
        iVar19 = ~uVar35 + pTStack_200->ArrayNum;
        if (1 < iVar19) {
          iVar19 = 1;
        }
        if (iVar19 != 0) {
          memmove(pFVar33 + (longlong)(int)uVar35 * 0x34,
                  pFVar33 + (longlong)(pTStack_200->ArrayNum - iVar19) * 0x34,
                  (longlong)iVar19 * 0x34);
        }
        pTVar43->ArrayNum = pTVar43->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x34,4,&pTVar43->AllocatorInstance,pTVar43->ArrayNum,piStack_168);
        uVar35 = uVar21;
        if ((int)uStack_254 < pTVar34->ArrayNum) {
          uVar35 = (uint)uStack_248;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar38 = pFStack_250;
        iVar19 = (int)pTStack_220 + pTVar34->ArrayNum;
        pFVar33 = (pTVar34->AllocatorInstance).Data;
        if (1 < iVar19) {
          iVar19 = 1;
        }
        if (iVar19 != 0) {
          memmove(pFVar33 + (longlong)pFStack_250,
                  pFVar33 + (longlong)(pTVar34->ArrayNum - iVar19) * 0x40,(longlong)iVar19 << 6);
        }
        pTVar34->ArrayNum = pTVar34->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&pTVar34->AllocatorInstance,pTVar34->ArrayNum,piStack_160);
      }
      pFVar38 = (FMetasoundFrontendInterface *)((longlong)pFVar38 + -0x40);
      uStack_254 = uStack_254 - 1;
      pTStack_240 = (TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
                     *)((longlong)pTStack_240 + -1);
    } while (-1 < (int)uStack_254);
  }
  return;
}

// SwapPairedVertices @ 14ae8ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::SwapPairedVertices
          (FModifyRootGraphInterfaces *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *param_1)

{
  code *pcVar1;
  IGraphController *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  IOutputController *pIVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  FMetasoundFrontendClassInput *this_00;
  FMetasoundFrontendLiteral *pFVar9;
  FMetasoundFrontendLiteral *this_01;
  FMetasoundFrontendVertex *pFVar10;
  ulonglong uVar11;
  longlong *plVar12;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar13;
  FMetasoundFrontendVertex *pFVar14;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar15;
  uint *puVar16;
  longlong lVar17;
  FMetasoundFrontendVertex *pFVar18;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [4];
  uint local_194;
  int local_190;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_188;
  TSharedRef<Metasound::Frontend::IInputController,1> *local_178;
  int local_170;
  undefined4 uStack_16c;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  longlong *local_158;
  TReferenceControllerBase<1> *local_150;
  longlong *local_148;
  TReferenceControllerBase<1> *local_140;
  longlong *local_138;
  TReferenceControllerBase<1> *local_130;
  FMetasoundFrontendClassInput local_128;
  undefined8 local_d8 [2];
  TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c8;
  void *local_88;
  undefined4 local_80;
  FMetasoundFrontendClassOutput local_78;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pFVar14 = (FMetasoundFrontendVertex *)(this->PairedInputs).AllocatorInstance.Data;
  local_194 = (this->PairedInputs).ArrayNum;
  uVar11 = (ulonglong)(int)local_194;
  local_188.Object = (IOutputController *)((longlong)pFVar14 + uVar11 * 0x68);
  while( true ) {
    pIVar5 = local_188.Object;
    pTVar15 = (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0;
    if ((this->PairedInputs).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (pFVar14 == (FMetasoundFrontendVertex *)pIVar5) break;
    FMetasoundFrontendClassInput::FMetasoundFrontendClassInput
              (&local_128,(FMetasoundFrontendClassVertex *)&pFVar14[1].VertexID.B);
    local_c8._0_8_ = 0;
    local_c8._8_8_ = 0;
    local_c8._32_8_ = 0;
    local_c8._40_4_ = 0;
    local_c8._44_4_ = 0x80;
    local_c8._48_4_ = 0xffffffff;
    local_c8._52_4_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_190 = 0;
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)param_1->Object + 0x160))(param_1->Object,&local_78,pFVar14);
    UE::Core::Private::Function::CheckCallable((void *)puVar7[2]);
    pcVar1 = (code *)puVar7[2];
    plVar12 = puVar7 + 4;
    if ((longlong *)puVar7[7] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar7[7];
    }
    uVar8 = (**(code **)(*plVar12 + 8))();
    this_00 = (FMetasoundFrontendClassInput *)(*pcVar1)(uVar8);
    *puVar7 = this_00;
    if (local_78._16_8_ != 0) {
      plVar12 = (longlong *)&local_78.field_0x20;
      if (local_40 != (longlong *)0x0) {
        plVar12 = local_40;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (this_00 != (FMetasoundFrontendClassInput *)0x0) {
      bVar6 = FMetasoundFrontendVertex::IsFunctionalEquivalent
                        ((FMetasoundFrontendVertex *)this_00,pFVar14);
      if (bVar6) {
        pFVar9 = FMetasoundFrontendClassInput::FindConstDefaultChecked(this_00,&DefaultPageID);
        this_01 = FMetasoundFrontendClassInput::FindDefaultChecked(&local_128,&DefaultPageID);
        FMetasoundFrontendLiteral::operator=(this_01,pFVar9);
        local_128._padding_ = this_00->_padding_;
        local_128._padding_ = this_00->_padding_;
        (**(code **)(*(longlong *)param_1->Object + 0x158))(param_1->Object,&local_158,pFVar14);
        (**(code **)(*local_158 + 0x88))(local_158,&local_168,pFVar14);
        puVar7 = (undefined8 *)(**(code **)(*local_168 + 0x70))();
        if (local_d8 != puVar7) {
          DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>
                    ((TSharedRef<Metasound::Frontend::IInputController,1> *)0x0,0);
          pTVar15 = (TSharedRef<Metasound::Frontend::IInputController,1> *)*puVar7;
          *puVar7 = 0;
          local_190 = *(int *)(puVar7 + 1);
          puVar7[1] = 0;
        }
        DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_178,local_170);
        if (local_178 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
          FMemory::Free(local_178);
        }
        (**(code **)(*(longlong *)param_1->Object + 0x178))(param_1->Object,pFVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_160);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_150);
      }
    }
    (**(code **)(*(longlong *)param_1->Object + 0x170))(param_1->Object,&local_138,&local_128);
    (**(code **)(*local_138 + 0x88))(local_138,&local_148,&local_128);
    iVar4 = local_190;
    lVar17 = (longlong)local_190;
    for (pTVar13 = pTVar15; pTVar13 != pTVar15 + lVar17; pTVar13 = pTVar13 + 1) {
      (**(code **)(*local_148 + 0x98))(local_148,pTVar13->Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
    DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(pTVar15,iVar4);
    if (pTVar15 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
      FMemory::Free(pTVar15);
    }
    local_80 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8);
    DestructItems<FMetasoundFrontendClassInputDefault,int>
              ((FMetasoundFrontendClassInputDefault *)local_128.Defaults.AllocatorInstance.Data,
               local_128.Defaults.ArrayNum);
    if ((FMetasoundFrontendClassInputDefault *)local_128.Defaults.AllocatorInstance.Data !=
        (FMetasoundFrontendClassInputDefault *)0x0) {
      FMemory::Free(local_128.Defaults.AllocatorInstance.Data);
    }
    pFVar14 = (FMetasoundFrontendVertex *)&pFVar14[3].TypeName;
    uVar11 = (ulonglong)local_194;
  }
  local_194 = (this->PairedOutputs).ArrayNum;
  uVar11 = (ulonglong)(int)local_194;
  pFVar14 = (FMetasoundFrontendVertex *)(this->PairedOutputs).AllocatorInstance.Data;
  puVar16 = &pFVar14[1].VertexID.B;
  pFVar18 = (FMetasoundFrontendVertex *)((longlong)pFVar14 + uVar11 * 0x68);
  while( true ) {
    if ((this->PairedOutputs).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (pFVar14 == pFVar18) break;
    local_128._padding_ = *(longlong *)puVar16;
    local_128._padding_ = *(longlong *)(puVar16 + 2);
    local_128._padding_._0_4_ = puVar16[0xc];
    local_128._padding_ = *(longlong *)(puVar16 + 4);
    local_128._padding_ = *(longlong *)(puVar16 + 6);
    local_128._padding_ = *(longlong *)(puVar16 + 8);
    local_128._padding_ = *(longlong *)(puVar16 + 10);
    IOutputController::GetInvalidHandle(&local_188);
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)param_1->Object + 0x168))(param_1->Object,&local_78,pFVar14);
    UE::Core::Private::Function::CheckCallable((void *)puVar7[2]);
    pcVar1 = (code *)puVar7[2];
    plVar12 = puVar7 + 4;
    if ((longlong *)puVar7[7] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar7[7];
    }
    uVar8 = (**(code **)(*plVar12 + 8))();
    pFVar10 = (FMetasoundFrontendVertex *)(*pcVar1)(uVar8);
    *puVar7 = pFVar10;
    if (local_78._16_8_ != 0) {
      plVar12 = (longlong *)&local_78.field_0x20;
      if (local_40 != (longlong *)0x0) {
        plVar12 = local_40;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (pFVar10 != (FMetasoundFrontendVertex *)0x0) {
      bVar6 = FMetasoundFrontendVertex::IsFunctionalEquivalent(pFVar10,pFVar14);
      if (bVar6) {
        local_128._padding_ = *(longlong *)&pFVar10[1].Name;
        local_128._padding_ = *(longlong *)&pFVar10[1].TypeName;
        (**(code **)(*(longlong *)param_1->Object + 0x148))(param_1->Object,&local_148,pFVar14);
        (**(code **)(*local_148 + 0x68))(local_148,&local_138,pFVar14);
        puVar7 = (undefined8 *)(**(code **)(*local_138 + 0x88))(local_138,&local_178);
        pFVar10 = (FMetasoundFrontendVertex *)*puVar7;
        pTVar3 = (TReferenceControllerBase<1> *)puVar7[1];
        *puVar7 = local_188.Object;
        puVar7[1] = local_188.SharedReferenceCount.ReferenceController;
        local_188.Object = (IOutputController *)pFVar10;
        local_188.SharedReferenceCount.ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)CONCAT44(uStack_16c,local_170));
        (**(code **)(*(longlong *)param_1->Object + 400))(param_1->Object,pFVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_130);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_140);
      }
    }
    pIVar2 = param_1->Object;
    pcVar1 = *(code **)(*(longlong *)pIVar2 + 0x188);
    FMetasoundFrontendClassOutput::FMetasoundFrontendClassOutput
              (&local_78,(FMetasoundFrontendClassVertex *)&local_128);
    (*pcVar1)(pIVar2,&local_168,&local_78);
    (**(code **)(*local_168 + 0x68))(local_168,&local_158,&local_128);
    (**(code **)((longlong)*(FName *)&(local_188.Object)->field_0x0 + 0x98))
              (local_188.Object,local_158);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    uVar11 = (ulonglong)local_194;
    pFVar14 = (FMetasoundFrontendVertex *)&pFVar14[3].TypeName;
    puVar16 = puVar16 + 0x1a;
  }
  if (((this->PairedInputs).ArrayNum == 0) && ((this->PairedOutputs).ArrayNum == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar6;
}

// Transform @ 14ae8bb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::Transform
          (FModifyRootGraphInterfaces *this,FMetasoundFrontendDocument *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  TSharedRef<Metasound::Frontend::IDocumentController,1> *pTVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  FDocumentAccessPtr local_a8;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  MakeAccessPtr<Metasound::Frontend::FDocumentAccessPtr,FMetasoundFrontendDocument>
            ((FDocumentAccessPtr *)local_58,&param_1->AccessPoint,param_1);
  local_a8._56_8_ = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  local_a8._0_8_ = local_58._0_8_;
  local_a8._16_8_ = local_58._16_8_;
  if (local_58._16_8_ != 0) {
    plVar4 = (longlong *)(local_58 + 0x20);
    if ((longlong *)local_58._56_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_58._56_8_;
    }
    (**(code **)*plVar4)(plVar4,&local_a8.field_0x20);
  }
  pTVar3 = FDocumentController::CreateDocumentHandle(&local_68,&local_a8);
  uVar2 = (*pcVar1)(this,pTVar3);
  if (local_58._16_8_ != 0) {
    plVar4 = (longlong *)(local_58 + 0x20);
    if ((longlong *)local_58._56_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_58._56_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return (bool)uVar2;
}

// Transform @ 14ae8bc50

bool __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::Transform
          (FModifyRootGraphInterfaces *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  int iVar1;
  IDocumentController *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  IGraphController *pIVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  byte bVar11;
  FScriptContainerElement *pFVar12;
  byte bVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [16];
  IGraphController *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_58;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_48;
  
  bVar9 = false;
  (**(code **)(*(longlong *)param_1->Object + 0x100))();
  cVar6 = (**(code **)(*(longlong *)local_88 + 0x18))();
  if (cVar6 == '\0') {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7922748002802859634>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendTransform.cpp"
                       ,0x18e,"GraphHandle->IsValid()");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  else {
    pIVar2 = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar1 = (this->InterfacesToRemove).ArrayNum;
    pFVar12 = (this->InterfacesToRemove).AllocatorInstance.Data;
    pFVar10 = pFVar12 + (longlong)iVar1 * 0x60;
    while( true ) {
      if ((this->InterfacesToRemove).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendInterface_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar12 == pFVar10) break;
      (**(code **)(*(longlong *)pIVar2 + 0xb8))(pIVar2,pFVar12 + 0x40);
      pFVar12 = pFVar12 + 0x60;
    }
    iVar1 = (this->InterfacesToAdd).ArrayNum;
    pFVar12 = (this->InterfacesToAdd).AllocatorInstance.Data;
    pFVar10 = pFVar12 + (longlong)iVar1 * 0x60;
    while( true ) {
      if ((this->InterfacesToAdd).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendInterface_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar10) break;
      (**(code **)(*(longlong *)pIVar2 + 0xb0))(pIVar2,pFVar12 + 0x40);
      pFVar12 = pFVar12 + 0x60;
    }
    if (((this->InterfacesToRemove).ArrayNum == 0) && ((this->InterfacesToAdd).ArrayNum == 0)) {
      bVar13 = 0;
    }
    else {
      bVar13 = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = pTStack_80;
    pIVar5 = local_88;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar1 = (this->InputsToAdd).ArrayNum;
    pFVar12 = (this->InputsToAdd).AllocatorInstance.Data;
    pFVar10 = pFVar12 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((this->InputsToAdd).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar12 == pFVar10) break;
      (**(code **)(*(longlong *)pIVar5 + 0x170))(pIVar5,local_78,pFVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      pFVar12 = pFVar12 + 0x50;
    }
    iVar1 = (this->OutputsToAdd).ArrayNum;
    pFVar12 = (this->OutputsToAdd).AllocatorInstance.Data;
    pFVar10 = pFVar12 + (longlong)iVar1 * 0x40;
    while( true ) {
      if ((this->OutputsToAdd).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Metasound::Frontend::FModifyRootGraphInterfaces::FOutputData_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_98);
      }
      if (pFVar12 == pFVar10) break;
      (**(code **)(*(longlong *)pIVar5 + 0x188))(pIVar5,local_68,pFVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      pFVar12 = pFVar12 + 0x40;
    }
    if (((this->InputsToAdd).ArrayNum == 0) && ((this->OutputsToAdd).ArrayNum == 0)) {
      bVar11 = 0;
    }
    else {
      bVar11 = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_58.Object = local_88;
    local_58.SharedReferenceCount.ReferenceController = pTStack_80;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = SwapPairedVertices(this,&local_58);
    local_48.Object = local_88;
    local_48.SharedReferenceCount.ReferenceController = pTStack_80;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = RemoveUnsupportedVertices(this,&local_48);
    bVar9 = (bool)(bVar11 | bVar13 | bVar7 | bVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar9;
}

// UpdateInterfacesInternal @ 14ae90580

bool __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::UpdateInterfacesInternal
          (FModifyRootGraphInterfaces *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InterfacesToRemove).ArrayNum;
  pFVar3 = (this->InterfacesToRemove).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->InterfacesToRemove).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendInterface_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    (**(code **)(*(longlong *)param_1->Object + 0xb8))(param_1->Object,pFVar3 + 0x40);
    pFVar3 = pFVar3 + 0x60;
  }
  iVar1 = (this->InterfacesToAdd).ArrayNum;
  pFVar3 = (this->InterfacesToAdd).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->InterfacesToAdd).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendInterface_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    (**(code **)(*(longlong *)param_1->Object + 0xb0))(param_1->Object,pFVar3 + 0x40);
    pFVar3 = pFVar3 + 0x60;
  }
  if (((this->InterfacesToRemove).ArrayNum == 0) && ((this->InterfacesToAdd).ArrayNum == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar2;
}

