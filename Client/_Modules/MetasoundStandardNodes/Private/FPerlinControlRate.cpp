// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 3

// FPerlinControlRate @ 14b1ce350

FPerlinControlRate * __thiscall
Metasound::FPerlinControlRate::FPerlinControlRate
          (FPerlinControlRate *this,FBuildOperatorParams *param_1,FPinReadRefs *param_2)

{
  longlong lVar1;
  FResetParams local_28;
  
  *(undefined ***)this =
       &___7__TBasePerlinNoiseOperator_MVFPerlinControlRate_Metasound___Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined ***)&this->field_0x18 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&(param_2->X).field_0x8;
  lVar1 = *(longlong *)&(param_2->X).field_0x10;
  *(longlong *)&this->field_0x28 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->field_0x18 = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->field_0x38 = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&(param_2->Octaves).field_0x8;
  lVar1 = *(longlong *)&(param_2->Octaves).field_0x10;
  *(longlong *)&this->field_0x48 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->field_0x38 = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->field_0x58 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)&(param_2->MinValue).field_0x8;
  lVar1 = *(longlong *)&(param_2->MinValue).field_0x10;
  *(longlong *)&this->field_0x68 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->field_0x58 = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->field_0x78 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)&(param_2->MaxValue).field_0x8;
  lVar1 = *(longlong *)&(param_2->MaxValue).field_0x10;
  *(longlong *)&this->field_0x88 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->field_0x78 = &___7__TDataReadReference_M_Metasound__6B_;
  this->field_0x98 = param_2->bXConnected;
  *(float *)&this->field_0x9c = param_2->Offset;
  CreateOutputWriteRef((TDataWriteReference<float> *)&this->field_0xa0,param_1->OperatorSettings);
  CreateOutputWriteRef((TDataWriteReference<float> *)&this->field_0xc0,param_1->OperatorSettings);
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::Reset
            ((TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate> *)this,&local_28);
  *(undefined ***)this = &___7FPerlinControlRate_Metasound__6B_;
  return this;
}

// CreateOutputWriteRef @ 14b1dae90

TDataWriteReference<float> * __cdecl
Metasound::FPerlinControlRate::CreateOutputWriteRef
          (TDataWriteReference<float> *__return_storage_ptr__,FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataWriteReference<float> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_M_Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 *)((longlong)puVar3 + 0xc) = 1;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataWriteReference<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// Reset @ 14b1e9d10

void __thiscall Metasound::FPerlinControlRate::Reset(FPerlinControlRate *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((float)((uint)(*(float *)&this->field_0x9c - __real_bf800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    uVar3 = rand();
    *(float *)&this->field_0x9c = (float)(uVar3 & 0x7fff) * __real_38000100;
  }
  fVar4 = (float)param_1->OperatorSettings->SampleRate;
  *(float *)&this->field_0x8 = fVar4;
  *(int *)&this->field_0xc = param_1->OperatorSettings->NumFramesPerBlock;
  if (fVar4 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SampleRate > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundPerlinNoiseNode.cpp"
                       ,0x91,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&this->field_0xc < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFramesPerBlock > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundPerlinNoiseNode.cpp"
                       ,0x92,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  **(undefined4 **)&this->field_0xa8 = 0;
  **(undefined4 **)&this->field_0xc8 = 0;
  return;
}

