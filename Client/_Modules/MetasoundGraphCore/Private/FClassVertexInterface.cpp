// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// FClassVertexInterface @ 14ad378c0

FClassVertexInterface * __thiscall
Metasound::FClassVertexInterface::FClassVertexInterface
          (FClassVertexInterface *this,
          TArray<Metasound::FSubInterfaceDescription,TSizedDefaultAllocator<32>_> *param_1,
          FInputVertexInterface *param_2,FOutputVertexInterface *param_3,
          FEnvironmentVertexInterface *param_4)

{
  FScriptContainerElement *pFVar1;
  
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = param_1->ArrayNum;
  (this->SubInterfaces).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->Inputs)._padding_ = 0;
  (this->Inputs)._padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  *(int *)&(this->Inputs)._padding_ = (int)param_2->_padding_;
  *(undefined4 *)((longlong)&(this->Inputs)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  param_2->_padding_ = 0;
  (this->Inputs).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).SubInterfaces.AllocatorInstance.Data =
       (param_2->SubInterfaces).AllocatorInstance.Data;
  (param_2->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).SubInterfaces.ArrayNum = (param_2->SubInterfaces).ArrayNum;
  (this->Inputs).SubInterfaces.ArrayMax = (param_2->SubInterfaces).ArrayMax;
  (param_2->SubInterfaces).ArrayNum = 0;
  (param_2->SubInterfaces).ArrayMax = 0;
  (this->Outputs)._padding_ = 0;
  (this->Outputs)._padding_ = param_3->_padding_;
  param_3->_padding_ = 0;
  *(int *)&(this->Outputs)._padding_ = (int)param_3->_padding_;
  *(undefined4 *)((longlong)&(this->Outputs)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_3->_padding_ + 4);
  param_3->_padding_ = 0;
  (this->Outputs).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).SubInterfaces.AllocatorInstance.Data =
       (param_3->SubInterfaces).AllocatorInstance.Data;
  (param_3->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).SubInterfaces.ArrayNum = (param_3->SubInterfaces).ArrayNum;
  (this->Outputs).SubInterfaces.ArrayMax = (param_3->SubInterfaces).ArrayMax;
  (param_3->SubInterfaces).ArrayNum = 0;
  (param_3->SubInterfaces).ArrayMax = 0;
  *(undefined8 *)&this->Environment = 0;
  *(undefined8 *)&this->Environment = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = 0;
  *(undefined4 *)&(this->Environment).field_0x8 = *(undefined4 *)&param_4->field_0x8;
  *(undefined4 *)&(this->Environment).field_0xc = *(undefined4 *)&param_4->field_0xc;
  *(undefined8 *)&param_4->field_0x8 = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_2->SubInterfaces).AllocatorInstance.Data,
             (param_2->SubInterfaces).ArrayNum);
  pFVar1 = (param_2->SubInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)param_2->_padding_,(int)param_2->_padding_);
  if ((void *)param_2->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_2->_padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_3->SubInterfaces).AllocatorInstance.Data,
             (param_3->SubInterfaces).ArrayNum);
  pFVar1 = (param_3->SubInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)param_3->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_3->_padding_);
  }
  if (*(void **)param_4 != (void *)0x0) {
    FMemory::Free(*(void **)param_4);
  }
  return this;
}

// FClassVertexInterface @ 14ad37a40

FClassVertexInterface * __thiscall
Metasound::FClassVertexInterface::FClassVertexInterface
          (FClassVertexInterface *this,FInputVertexInterface *param_1,
          FOutputVertexInterface *param_2,FEnvironmentVertexInterface *param_3)

{
  FScriptContainerElement *pFVar1;
  FEnvironmentVertexInterface local_68;
  TArray<Metasound::FSubInterfaceDescription,TSizedDefaultAllocator<32>_> local_58;
  FOutputVertexInterface local_48;
  FInputVertexInterface local_28;
  
  local_68._0_8_ = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  local_68._8_4_ = *(undefined4 *)&param_3->field_0x8;
  local_68._12_4_ = *(undefined4 *)&param_3->field_0xc;
  *(undefined8 *)&param_3->field_0x8 = 0;
  local_48._padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  param_2->_padding_ = 0;
  local_48.SubInterfaces.AllocatorInstance.Data = (param_2->SubInterfaces).AllocatorInstance.Data;
  (param_2->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SubInterfaces.ArrayNum = (param_2->SubInterfaces).ArrayNum;
  local_48.SubInterfaces.ArrayMax = (param_2->SubInterfaces).ArrayMax;
  (param_2->SubInterfaces).ArrayNum = 0;
  (param_2->SubInterfaces).ArrayMax = 0;
  local_28._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  local_28._padding_._0_4_ = (undefined4)param_1->_padding_;
  local_28._padding_._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  local_28.SubInterfaces.AllocatorInstance.Data = (param_1->SubInterfaces).AllocatorInstance.Data;
  (param_1->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubInterfaces.ArrayNum = (param_1->SubInterfaces).ArrayNum;
  local_28.SubInterfaces.ArrayMax = (param_1->SubInterfaces).ArrayMax;
  (param_1->SubInterfaces).ArrayNum = 0;
  (param_1->SubInterfaces).ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FClassVertexInterface(this,&local_58,&local_28,&local_48,&local_68);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_1->SubInterfaces).AllocatorInstance.Data,
             (param_1->SubInterfaces).ArrayNum);
  pFVar1 = (param_1->SubInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)param_1->_padding_,(int)param_1->_padding_);
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_2->SubInterfaces).AllocatorInstance.Data,
             (param_2->SubInterfaces).ArrayNum);
  pFVar1 = (param_2->SubInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)param_2->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_2->_padding_);
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return this;
}

// FClassVertexInterface @ 14ad37bb0

FClassVertexInterface * __thiscall
Metasound::FClassVertexInterface::FClassVertexInterface
          (FClassVertexInterface *this,FVertexInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FEnvironmentVertexInterface local_58;
  FOutputVertexInterface local_48;
  FInputVertexInterface local_28;
  
  local_58._0_8_ = *(undefined8 *)&param_1->EnvironmentInterface;
  *(undefined8 *)&param_1->EnvironmentInterface = 0;
  local_58._8_4_ = *(undefined4 *)&(param_1->EnvironmentInterface).field_0x8;
  local_58._12_4_ = *(undefined4 *)&(param_1->EnvironmentInterface).field_0xc;
  *(undefined8 *)&(param_1->EnvironmentInterface).field_0x8 = 0;
  local_48._padding_ = (param_1->OutputInterface)._padding_;
  (param_1->OutputInterface)._padding_ = 0;
  local_48._padding_._0_4_ = (undefined4)(param_1->OutputInterface)._padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&(param_1->OutputInterface)._padding_ + 4);
  (param_1->OutputInterface)._padding_ = 0;
  local_48.SubInterfaces.AllocatorInstance.Data =
       (param_1->OutputInterface).SubInterfaces.AllocatorInstance.Data;
  (param_1->OutputInterface).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SubInterfaces.ArrayNum = (param_1->OutputInterface).SubInterfaces.ArrayNum;
  local_48.SubInterfaces.ArrayMax = (param_1->OutputInterface).SubInterfaces.ArrayMax;
  (param_1->OutputInterface).SubInterfaces.ArrayNum = 0;
  (param_1->OutputInterface).SubInterfaces.ArrayMax = 0;
  local_28._padding_ = (param_1->InputInterface)._padding_;
  (param_1->InputInterface)._padding_ = 0;
  local_28._padding_._0_4_ = (undefined4)(param_1->InputInterface)._padding_;
  local_28._padding_._4_4_ = *(undefined4 *)((longlong)&(param_1->InputInterface)._padding_ + 4);
  (param_1->InputInterface)._padding_ = 0;
  local_28.SubInterfaces.AllocatorInstance.Data =
       (param_1->InputInterface).SubInterfaces.AllocatorInstance.Data;
  (param_1->InputInterface).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubInterfaces.ArrayNum = (param_1->InputInterface).SubInterfaces.ArrayNum;
  local_28.SubInterfaces.ArrayMax = (param_1->InputInterface).SubInterfaces.ArrayMax;
  (param_1->InputInterface).SubInterfaces.ArrayNum = 0;
  (param_1->InputInterface).SubInterfaces.ArrayMax = 0;
  FClassVertexInterface(this,&local_28,&local_48,&local_58);
  if (*(void **)&param_1->EnvironmentInterface != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->EnvironmentInterface);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_1->OutputInterface).SubInterfaces.AllocatorInstance.Data,
             (param_1->OutputInterface).SubInterfaces.ArrayNum);
  pFVar1 = (param_1->OutputInterface).SubInterfaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(param_1->OutputInterface)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(param_1->InputInterface).SubInterfaces.AllocatorInstance.Data,
             (param_1->InputInterface).SubInterfaces.ArrayNum);
  pFVar1 = (param_1->InputInterface).SubInterfaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)(param_1->InputInterface)._padding_,
             (int)(param_1->InputInterface)._padding_);
  pvVar2 = (void *)(param_1->InputInterface)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return this;
}

// CreateVertexInterface @ 14ad4def0

FVertexInterface * __thiscall
Metasound::FClassVertexInterface::CreateVertexInterface
          (FClassVertexInterface *this,FVertexInterface *__return_storage_ptr__,
          TArrayView<Metasound::FSubInterfaceConfiguration_const_,int> *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FVertexInterface *pFVar9;
  FEnvironmentVertexInterface *pFVar10;
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FSubInterfaceDescription *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FSubInterfaceDescription *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TInterfaceConfigurationBuilder<Metasound::FInputDataVertex> local_b8;
  TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex> local_a0;
  TArrayView<Metasound::FSubInterfaceConfiguration_const_,int> local_88;
  TArrayView<Metasound::FSubInterfaceDescription_const_,int> local_78;
  TArrayView<Metasound::FSubInterfaceConfiguration_const_,int> local_68;
  TArrayView<Metasound::FSubInterfaceDescription_const_,int> local_58;
  FEnvironmentVertexInterface local_48 [2];
  
  FInputVertexInterface::FInputVertexInterface(&local_118,&this->Inputs);
  iStack_d0 = (this->SubInterfaces).ArrayNum;
  local_b8._padding_ = (longlong)&local_118.SubInterfaces;
  local_b8.Vertices = (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118;
  local_b8._padding_ =
       (longlong)&___7FInputInterfaceConfigurationBuilder_VertexPrivate_Metasound__6B_;
  local_d8 = (FSubInterfaceDescription *)(this->SubInterfaces).AllocatorInstance.Data;
  local_88.DataPtr = param_1->DataPtr;
  local_88.ArrayNum = param_1->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  if (iStack_d0 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
  }
  local_78._12_4_ = uStack_cc;
  local_78.ArrayNum = iStack_d0;
  local_78.DataPtr = local_d8;
  VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FInputDataVertex>::Build
            (&local_b8,&local_78,&local_88);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8,&this->Outputs);
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iStack_c0 = (this->SubInterfaces).ArrayNum;
  local_a0._padding_ = (longlong)&local_f8.SubInterfaces;
  local_a0.Vertices = (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8;
  local_a0._padding_ =
       (longlong)&___7FOutputInterfaceConfigurationBuilder_VertexPrivate_Metasound__6B_;
  local_c8 = (FSubInterfaceDescription *)(this->SubInterfaces).AllocatorInstance.Data;
  if (iStack_c0 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
  }
  local_58._12_4_ = uStack_bc;
  local_58.ArrayNum = iStack_c0;
  local_58.DataPtr = local_c8;
  VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex>::Build
            (&local_a0,&local_58,&local_68);
  pFVar10 = FEnvironmentVertexInterface::FEnvironmentVertexInterface(local_48,&this->Environment);
  FVar5.Data = local_f8.SubInterfaces.AllocatorInstance.Data;
  lVar2 = local_f8._padding_;
  uVar3 = (undefined4)local_f8._padding_;
  uVar4 = local_f8._padding_._4_4_;
  iVar6 = local_f8.SubInterfaces.ArrayNum;
  iVar7 = local_f8.SubInterfaces.ArrayMax;
  (__return_storage_ptr__->InputInterface)._padding_ = local_118._padding_;
  *(int *)&(__return_storage_ptr__->InputInterface)._padding_ = (int)local_118._padding_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->InputInterface)._padding_ + 4) =
       local_118._padding_._4_4_;
  (__return_storage_ptr__->InputInterface).SubInterfaces.AllocatorInstance.Data =
       local_118.SubInterfaces.AllocatorInstance.Data;
  (__return_storage_ptr__->InputInterface).SubInterfaces.ArrayMax = local_118.SubInterfaces.ArrayMax
  ;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SubInterfaces.ArrayNum = 0;
  local_f8.SubInterfaces.ArrayMax = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InputInterface).SubInterfaces.ArrayNum = local_118.SubInterfaces.ArrayNum
  ;
  (__return_storage_ptr__->OutputInterface)._padding_ = lVar2;
  *(undefined4 *)&(__return_storage_ptr__->OutputInterface)._padding_ = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->OutputInterface)._padding_ + 4) = uVar4;
  (__return_storage_ptr__->OutputInterface).SubInterfaces.AllocatorInstance.Data = FVar5.Data;
  (__return_storage_ptr__->OutputInterface).SubInterfaces.ArrayNum = iVar6;
  (__return_storage_ptr__->OutputInterface).SubInterfaces.ArrayMax = iVar7;
  *(undefined8 *)&__return_storage_ptr__->EnvironmentInterface = 0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->EnvironmentInterface = *(undefined8 *)pFVar10;
  *(undefined8 *)pFVar10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EnvironmentInterface).field_0x8 =
       *(undefined4 *)&pFVar10->field_0x8;
  *(undefined4 *)&(__return_storage_ptr__->EnvironmentInterface).field_0xc =
       *(undefined4 *)&pFVar10->field_0xc;
  *(undefined8 *)&pFVar10->field_0x8 = 0;
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>((FSubInterfaceLayout *)0x0,0);
  DestructItems<Metasound::FInputDataVertex,int>((FInputDataVertex *)0x0,0);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>((FSubInterfaceLayout *)0x0,0);
  if (*(void **)pFVar10 != (void *)0x0) {
    FMemory::Free(*(void **)pFVar10);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

