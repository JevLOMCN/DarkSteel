// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 4

// Transform @ 14b3e2240

bool __thiscall
Metasound::Engine::MetasoundOutputFormatMonoV1_1::FUpdateInterface::Transform
          (FUpdateInterface *this,TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  IDocumentController *pIVar1;
  code *pcVar2;
  IOutputController *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  FMetasoundFrontendInterface *pFVar9;
  FName *pFVar10;
  undefined8 *puVar11;
  FMetasoundFrontendClassVertex *pFVar12;
  longlong *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  TSharedRef<Metasound::Frontend::IInputController,1> *local_198;
  int local_190;
  TSharedRef<Metasound::Frontend::IInputController,1> *local_188;
  int local_180;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_178;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  longlong *local_158;
  TReferenceControllerBase<1> *local_150;
  undefined1 local_148 [8];
  TReferenceControllerBase<1> *local_140;
  FMetasoundFrontendInterface local_138;
  FMetasoundFrontendInterface local_d8;
  FMetasoundFrontendClassOutput local_78;
  FMetasoundFrontendClassVertex local_44;
  
  (**(code **)(*(longlong *)param_1->Object + 0x100))(param_1->Object,&local_1a8);
  cVar6 = (**(code **)(*local_1a8 + 0x18))();
  if (cVar6 == '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  pIVar1 = param_1->Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xb8);
  pFVar9 = MetasoundOutputFormatMonoV1_0::GetInterface(&local_138);
  (*pcVar2)(pIVar1,&pFVar9->Metadata);
  if (local_138.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Metadata.UClassOptions.AllocatorInstance.Data);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_138._padding_,(int)local_138._padding_);
  if ((FMetasoundFrontendClassInput *)local_138._padding_ != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  pIVar1 = param_1->Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xb0);
  pFVar9 = MetasoundOutputFormatMonoV1_1::GetInterface(&local_d8);
  (*pcVar2)(pIVar1,&pFVar9->Metadata);
  if (local_d8.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Metadata.UClassOptions.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_d8._padding_,(int)local_d8._padding_);
  if ((FMetasoundFrontendClassInput *)local_d8._padding_ != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  plVar5 = local_1a8;
  pcVar2 = *(code **)(*local_1a8 + 0x148);
  pFVar10 = MetasoundOutputFormatMonoV1_0::GetAudioOutputName();
  (*pcVar2)(plVar5,&local_158,pFVar10);
  Frontend::IOutputController::GetInvalidHandle(&local_178);
  cVar6 = (**(code **)(*local_158 + 0x18))();
  if (cVar6 != '\0') {
    (**(code **)(*local_158 + 0x20))();
    if (local_190 == 1) {
      puVar11 = (undefined8 *)
                (**(code **)(*(longlong *)local_198->Object + 0x88))(local_198->Object,local_148);
      pIVar3 = (IOutputController *)*puVar11;
      pTVar4 = (TReferenceControllerBase<1> *)puVar11[1];
      *puVar11 = local_178.Object;
      puVar11[1] = local_178.SharedReferenceCount.ReferenceController;
      local_178.Object = pIVar3;
      local_178.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140)
      ;
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3053431450616463695>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                         ,0x14f,"Inputs.Num() == 1");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    plVar5 = local_1a8;
    pcVar2 = *(code **)(*local_1a8 + 400);
    pFVar10 = MetasoundOutputFormatMonoV1_0::GetAudioOutputName();
    (*pcVar2)(plVar5,pFVar10);
    DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_198,local_190);
    if (local_198 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
      FMemory::Free(local_198);
    }
  }
  pcVar2 = *(code **)(*local_1a8 + 0x188);
  pFVar12 = GetClassAudioOutput(&local_44);
  FMetasoundFrontendClassOutput::FMetasoundFrontendClassOutput(&local_78,pFVar12);
  (*pcVar2)(local_1a8,&local_168,&local_78);
  cVar6 = (**(code **)(*local_168 + 0x18))();
  if (cVar6 == '\0') {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3053431450616463705>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                       ,0x159,"BufferOutput->IsValid()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
  }
  else {
    cVar6 = (**(code **)(*(longlong *)local_178.Object + 0x18))();
    if (cVar6 != '\0') {
      (**(code **)(*local_168 + 0x20))();
      if (local_180 == 1) {
        cVar6 = (**(code **)(*(longlong *)local_178.Object + 0x98))();
        if ((cVar6 == '\0') &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3053431450616463719>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                               ,0x167,"OutputToReconnect->Connect(*Inputs[0])"), bVar7))
        goto code_r0x00014b3e2584;
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3053431450616463717>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                           ,0x165,"Inputs.Num() == 1");
        if (bVar7) {
code_r0x00014b3e2584:
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_188,local_180);
      if (local_188 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
        FMemory::Free(local_188);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// Transform @ 14b3e2600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Engine::MetasoundOutputFormatMonoV1_2::FUpdateInterface::Transform
          (FUpdateInterface *this,TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  bool bVar1;
  FMetasoundFrontendVersion *pFVar2;
  FName *pFVar3;
  undefined1 auStackY_158 [32];
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_118;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_108;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_f8;
  FName local_e8;
  FName FStack_e0;
  FModifyRootGraphInterfaces local_d8;
  FName local_48;
  FName FStack_40;
  FName local_38;
  FName FStack_30;
  FName *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar2 = MetasoundOutputFormatMonoV1_1::GetVersion();
  local_f8.Object = *(IDocumentController **)&pFVar2->Name;
  local_f8.SharedReferenceCount.ReferenceController._0_4_ = (pFVar2->Number).Major;
  local_f8.SharedReferenceCount.ReferenceController._4_4_ = (pFVar2->Number).Minor;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  local_e8 = (FName)local_f8.Object;
  FStack_e0 = (FName)local_f8.SharedReferenceCount.ReferenceController;
  *(IDocumentController **)local_108.AllocatorInstance.Data = local_f8.Object;
  *(TReferenceControllerBase<1> **)(local_108.AllocatorInstance.Data + 8) =
       local_f8.SharedReferenceCount.ReferenceController;
  pFVar2 = Frontend::SourceInterfaceV1_0::GetVersion();
  local_f8.Object = *(IDocumentController **)&pFVar2->Name;
  local_f8.SharedReferenceCount.ReferenceController._0_4_ = (pFVar2->Number).Major;
  local_f8.SharedReferenceCount.ReferenceController._4_4_ = (pFVar2->Number).Minor;
  pFVar2 = OutputFormatMonoInterface::GetVersion();
  local_e8 = pFVar2->Name;
  FStack_e0.ComparisonIndex.Value = (pFVar2->Number).Major;
  FStack_e0.Number = (pFVar2->Number).Minor;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&local_118.AllocatorInstance,2,&local_118.ArrayMax);
  local_48 = (FName)local_f8.Object;
  FStack_40 = (FName)local_f8.SharedReferenceCount.ReferenceController;
  *(IDocumentController **)local_118.AllocatorInstance.Data = local_f8.Object;
  *(TReferenceControllerBase<1> **)(local_118.AllocatorInstance.Data + 8) =
       local_f8.SharedReferenceCount.ReferenceController;
  local_38 = local_e8;
  FStack_30 = FStack_e0;
  *(FName *)(local_118.AllocatorInstance.Data + 0x10) = local_e8;
  *(FName *)(local_118.AllocatorInstance.Data + 0x18) = FStack_e0;
  Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces(&local_d8,&local_108,&local_118);
  local_20 = (FName *)0x0;
  local_38 = (FName)&
                    ___7__TFunction_OwnedObject_P6A_NVFName__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  FStack_30 = (FName)DeprecatedInterfacesPrivate::MatchMemberNamesIgnoreSpaces::<lambda>::
                     <lambda_invoker_cdecl>;
  local_48 = (FName)UE::Core::Private::Function::
                    TFunctionRefCaller<bool_(__cdecl*)(FName,FName),bool,FName,FName>::Call;
  Frontend::FModifyRootGraphInterfaces::SetNamePairingFunction
            (&local_d8,(TFunction<bool___cdecl(FName,FName)> *)&local_48);
  if (local_48 != (FName)0x0) {
    pFVar3 = &local_38;
    if (local_20 != (FName *)0x0) {
      pFVar3 = local_20;
    }
    (**(code **)((longlong)*pFVar3 + 0x10))();
  }
  local_f8.Object = param_1->Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = Frontend::FModifyRootGraphInterfaces::Transform(&local_d8,&local_f8);
  Frontend::FModifyRootGraphInterfaces::~FModifyRootGraphInterfaces(&local_d8);
  if ((FName *)local_118.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if ((FName *)local_108.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// Transform @ 14b3e27f0

bool __thiscall
Metasound::Engine::MetasoundOutputFormatStereoV1_1::FUpdateInterface::Transform
          (FUpdateInterface *this,TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  IDocumentController *pIVar1;
  code *pcVar2;
  IOutputController *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  FMetasoundFrontendInterface *pFVar9;
  FName *pFVar10;
  undefined8 *puVar11;
  FMetasoundFrontendClassVertex *pFVar12;
  FName local_res10;
  FName local_res18;
  longlong *local_268;
  TReferenceControllerBase<1> *local_260;
  TSharedRef<Metasound::Frontend::IInputController,1> *local_258;
  int local_250;
  TSharedRef<Metasound::Frontend::IInputController,1> *local_248;
  int local_240;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_238;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_228;
  longlong *local_218;
  TReferenceControllerBase<1> *local_210;
  longlong *local_208;
  TReferenceControllerBase<1> *local_200;
  longlong *local_1f8;
  TReferenceControllerBase<1> *local_1f0;
  longlong *local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  longlong *local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  undefined1 local_1c8 [8];
  TReferenceControllerBase<1> *local_1c0;
  undefined1 local_1b8 [8];
  TReferenceControllerBase<1> *local_1b0;
  FMetasoundFrontendInterface local_1a8;
  FMetasoundFrontendInterface local_148;
  FMetasoundFrontendClassOutput local_e8;
  FMetasoundFrontendClassOutput local_b4;
  FMetasoundFrontendClassVertex local_80;
  FMetasoundFrontendClassVertex local_4c;
  
  (**(code **)(*(longlong *)param_1->Object + 0x100))(param_1->Object,&local_268);
  cVar6 = (**(code **)(*local_268 + 0x18))();
  if (cVar6 == '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_260);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  pIVar1 = param_1->Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xb8);
  pFVar9 = MetasoundOutputFormatStereoV1_0::GetInterface(&local_1a8);
  (*pcVar2)(pIVar1,&pFVar9->Metadata);
  if (local_1a8.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Metadata.UClassOptions.AllocatorInstance.Data);
  }
  if ((void *)local_1a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  if ((void *)local_1a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_1a8._padding_,(int)local_1a8._padding_);
  if ((FMetasoundFrontendClassInput *)local_1a8._padding_ != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  pIVar1 = param_1->Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xb0);
  pFVar9 = MetasoundOutputFormatStereoV1_1::GetInterface(&local_148);
  (*pcVar2)(pIVar1,&pFVar9->Metadata);
  if (local_148.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Metadata.UClassOptions.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_148._padding_,(int)local_148._padding_);
  if ((FMetasoundFrontendClassInput *)local_148._padding_ != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  plVar5 = local_268;
  pcVar2 = *(code **)(*local_268 + 0x148);
  pFVar10 = MetasoundOutputFormatStereoV1_0::GetAudioOutputName();
  (*pcVar2)(plVar5,&local_218,pFVar10);
  Frontend::IOutputController::GetInvalidHandle(&local_228);
  Frontend::IOutputController::GetInvalidHandle(&local_238);
  cVar6 = (**(code **)(*local_218 + 0x18))();
  plVar5 = local_218;
  if (cVar6 != '\0') {
    pcVar2 = *(code **)(*local_218 + 0x68);
    ::FName::FName(&local_res10,"Left");
    (*pcVar2)(plVar5,&local_1d8,&local_res10);
    puVar11 = (undefined8 *)(**(code **)(*local_1d8 + 0x88))(local_1d8,local_1c8);
    pIVar3 = (IOutputController *)*puVar11;
    pTVar4 = (TReferenceControllerBase<1> *)puVar11[1];
    *puVar11 = local_228.Object;
    puVar11[1] = local_228.SharedReferenceCount.ReferenceController;
    local_228.Object = pIVar3;
    local_228.SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c0);
    pcVar2 = *(code **)(*local_218 + 0x68);
    ::FName::FName(&local_res18,"Right");
    (*pcVar2)(local_218,&local_1e8,&local_res18);
    puVar11 = (undefined8 *)(**(code **)(*local_1e8 + 0x88))(local_1e8,local_1b8);
    pIVar3 = (IOutputController *)*puVar11;
    pTVar4 = (TReferenceControllerBase<1> *)puVar11[1];
    *puVar11 = local_238.Object;
    puVar11[1] = local_238.SharedReferenceCount.ReferenceController;
    local_238.Object = pIVar3;
    local_238.SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b0);
    plVar5 = local_268;
    pcVar2 = *(code **)(*local_268 + 400);
    pFVar10 = MetasoundOutputFormatStereoV1_0::GetAudioOutputName();
    (*pcVar2)(plVar5,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d0);
  }
  plVar5 = local_268;
  pcVar2 = *(code **)(*local_268 + 0x188);
  pFVar12 = GetClassLeftAudioOutput(&local_80);
  FMetasoundFrontendClassOutput::FMetasoundFrontendClassOutput(&local_e8,pFVar12);
  (*pcVar2)(plVar5,&local_1f8,&local_e8);
  cVar6 = (**(code **)(*local_1f8 + 0x18))();
  if (cVar6 == '\0') {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3053431450616463876>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                       ,0x204,"LeftBufferOutput->IsValid()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
  }
  else {
    cVar6 = (**(code **)(*(longlong *)local_228.Object + 0x18))();
    if (cVar6 != '\0') {
      (**(code **)(*local_1f8 + 0x20))();
      if (local_250 == 1) {
        cVar6 = (**(code **)(*(longlong *)local_228.Object + 0x98))();
        if ((cVar6 == '\0') &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3053431450616463889>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                               ,0x211,"LeftOutputToReconnect->Connect(*Inputs[0])"), bVar7))
        goto code_r0x00014b3e2b63;
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3053431450616463887>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                           ,0x20f,"Inputs.Num() == 1");
        if (bVar7) {
code_r0x00014b3e2b63:
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_258,local_250);
      if (local_258 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
        FMemory::Free(local_258);
      }
    }
  }
  pcVar2 = *(code **)(*local_268 + 0x188);
  pFVar12 = GetClassRightAudioOutput(&local_4c);
  FMetasoundFrontendClassOutput::FMetasoundFrontendClassOutput(&local_b4,pFVar12);
  (*pcVar2)(local_268,&local_208,&local_b4);
  cVar6 = (**(code **)(*local_208 + 0x18))();
  if (cVar6 == '\0') {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3053431450616463895>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                       ,0x217,"RightBufferOutput->IsValid()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
  }
  else {
    cVar6 = (**(code **)(*(longlong *)local_238.Object + 0x18))();
    if (cVar6 != '\0') {
      (**(code **)(*local_208 + 0x20))();
      if (local_240 == 1) {
        cVar6 = (**(code **)(*(longlong *)local_238.Object + 0x98))();
        if ((cVar6 == '\0') &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3053431450616463908>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                               ,0x224,"RightOutputToReconnect->Connect(*Inputs[0])"), bVar7))
        goto code_r0x00014b3e2ca4;
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3053431450616463906>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundDeprecatedInterfaces.cpp"
                           ,0x222,"Inputs.Num() == 1");
        if (bVar7) {
code_r0x00014b3e2ca4:
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_248,local_240);
      if (local_248 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
        FMemory::Free(local_248);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_200);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_210);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_260);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// Transform @ 14b3e2d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Engine::MetasoundOutputFormatStereoV1_2::FUpdateInterface::Transform
          (FUpdateInterface *this,TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  bool bVar1;
  FMetasoundFrontendVersion *pFVar2;
  FName *pFVar3;
  undefined1 auStackY_158 [32];
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_118;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_108;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_f8;
  FName local_e8;
  FName FStack_e0;
  FModifyRootGraphInterfaces local_d8;
  FName local_48;
  FName FStack_40;
  FName local_38;
  FName FStack_30;
  FName *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar2 = MetasoundOutputFormatStereoV1_1::GetVersion();
  local_f8.Object = *(IDocumentController **)&pFVar2->Name;
  local_f8.SharedReferenceCount.ReferenceController._0_4_ = (pFVar2->Number).Major;
  local_f8.SharedReferenceCount.ReferenceController._4_4_ = (pFVar2->Number).Minor;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  local_e8 = (FName)local_f8.Object;
  FStack_e0 = (FName)local_f8.SharedReferenceCount.ReferenceController;
  *(IDocumentController **)local_108.AllocatorInstance.Data = local_f8.Object;
  *(TReferenceControllerBase<1> **)(local_108.AllocatorInstance.Data + 8) =
       local_f8.SharedReferenceCount.ReferenceController;
  pFVar2 = Frontend::SourceInterfaceV1_0::GetVersion();
  local_f8.Object = *(IDocumentController **)&pFVar2->Name;
  local_f8.SharedReferenceCount.ReferenceController._0_4_ = (pFVar2->Number).Major;
  local_f8.SharedReferenceCount.ReferenceController._4_4_ = (pFVar2->Number).Minor;
  pFVar2 = OutputFormatStereoInterface::GetVersion();
  local_e8 = pFVar2->Name;
  FStack_e0.ComparisonIndex.Value = (pFVar2->Number).Major;
  FStack_e0.Number = (pFVar2->Number).Minor;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&local_118.AllocatorInstance,2,&local_118.ArrayMax);
  local_48 = (FName)local_f8.Object;
  FStack_40 = (FName)local_f8.SharedReferenceCount.ReferenceController;
  *(IDocumentController **)local_118.AllocatorInstance.Data = local_f8.Object;
  *(TReferenceControllerBase<1> **)(local_118.AllocatorInstance.Data + 8) =
       local_f8.SharedReferenceCount.ReferenceController;
  local_38 = local_e8;
  FStack_30 = FStack_e0;
  *(FName *)(local_118.AllocatorInstance.Data + 0x10) = local_e8;
  *(FName *)(local_118.AllocatorInstance.Data + 0x18) = FStack_e0;
  Frontend::FModifyRootGraphInterfaces::FModifyRootGraphInterfaces(&local_d8,&local_108,&local_118);
  local_20 = (FName *)0x0;
  local_38 = (FName)&
                    ___7__TFunction_OwnedObject_P6A_NVFName__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  FStack_30 = (FName)DeprecatedInterfacesPrivate::MatchMemberNamesIgnoreSpaces::<lambda>::
                     <lambda_invoker_cdecl>;
  local_48 = (FName)UE::Core::Private::Function::
                    TFunctionRefCaller<bool_(__cdecl*)(FName,FName),bool,FName,FName>::Call;
  Frontend::FModifyRootGraphInterfaces::SetNamePairingFunction
            (&local_d8,(TFunction<bool___cdecl(FName,FName)> *)&local_48);
  if (local_48 != (FName)0x0) {
    pFVar3 = &local_38;
    if (local_20 != (FName *)0x0) {
      pFVar3 = local_20;
    }
    (**(code **)((longlong)*pFVar3 + 0x10))();
  }
  local_f8.Object = param_1->Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = Frontend::FModifyRootGraphInterfaces::Transform(&local_d8,&local_f8);
  Frontend::FModifyRootGraphInterfaces::~FModifyRootGraphInterfaces(&local_d8);
  if ((FName *)local_118.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if ((FName *)local_108.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar1;
}

