// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 156

// GetValue<int> @ 14e8fa220

int * __thiscall FDataflowNode::GetValue<int>(FDataflowNode *this,FContext *param_1,int *param_2)

{
  FDataflowInput *this_00;
  int *piVar1;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_2;
  this_00 = FindInput(this,&local_28);
  piVar1 = FDataflowInput::GetValue<int>(this_00,param_1,local_28.Reference);
  return piVar1;
}

// GetValue<float> @ 14e8fa3d0

float * __thiscall
FDataflowNode::GetValue<float>(FDataflowNode *this,FContext *param_1,float *param_2)

{
  FDataflowInput *this_00;
  float *pfVar1;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_2;
  this_00 = FindInput(this,&local_28);
  pfVar1 = FDataflowInput::GetValue<float>(this_00,param_1,local_28.Reference);
  return pfVar1;
}

// GetValue<double> @ 14e8fa580

double * __thiscall
FDataflowNode::GetValue<double>(FDataflowNode *this,FContext *param_1,double *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  double *pdVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pdVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pdVar4 = (double *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pdVar4);
      return pdVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<double_const_&>
                (param_1,(uint)uVar7,pFVar1,pdVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pdVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<double>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pdVar4);
      }
    }
  }
  return pdVar4;
}

// GetValue<UE::Math::TBox<double>_> @ 14e8fa870

TBox<double> * __thiscall
FDataflowNode::GetValue<UE::Math::TBox<double>_>
          (FDataflowNode *this,FContext *param_1,TBox<double> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TBox<double> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TBox<double> *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TBox<double>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TBox<double>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TObjectPtr<UDataflowMesh>_> @ 14e8fb000

TObjectPtr<UDataflowMesh> * __thiscall
FDataflowNode::GetValue<TObjectPtr<UDataflowMesh>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UDataflowMesh> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TObjectPtr<UDataflowMesh> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TObjectPtr<UDataflowMesh> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TObjectPtr<UDataflowMesh>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UDataflowMesh>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TObjectPtr<UDynamicMesh>_> @ 14e8fb190

TObjectPtr<UDynamicMesh> * __thiscall
FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UDynamicMesh> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TObjectPtr<UDynamicMesh> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TObjectPtr<UDynamicMesh> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TObjectPtr<UDynamicMesh>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UDynamicMesh>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TObjectPtr<UMaterial>_> @ 14e8fb6d0

TObjectPtr<UMaterial> * __thiscall
FDataflowNode::GetValue<TObjectPtr<UMaterial>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UMaterial> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TObjectPtr<UMaterial> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TObjectPtr<UMaterial> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TObjectPtr<UMaterial>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UMaterial>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TObjectPtr<UMaterialInterface>_> @ 14e8fb9c0

TObjectPtr<UMaterialInterface> * __thiscall
FDataflowNode::GetValue<TObjectPtr<UMaterialInterface>_>
          (FDataflowNode *this,FContext *param_1,
          TConnectionReference<TObjectPtr<UMaterialInterface>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TObjectPtr<UMaterialInterface> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_38;
  
  this_01 = FindInput(this,(FConnectionReference *)param_2);
  pTVar4 = *(TObjectPtr<UMaterialInterface> **)param_2;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TObjectPtr<UMaterialInterface> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_38);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TObjectPtr<UMaterialInterface>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TObjectPtr<UMaterialInterface>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<UE::Math::TSphere<double>_> @ 14e8fc1a0

TSphere<double> * __thiscall
FDataflowNode::GetValue<UE::Math::TSphere<double>_>
          (FDataflowNode *this,FContext *param_1,TSphere<double> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TSphere<double> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TSphere<double> *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TSphere<double>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TSphere<double>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<FDataflowArrayTypes> @ 14e8fc7f0

FContextValue * __thiscall
FDataflowNode::GetValue<FDataflowArrayTypes>
          (FDataflowNode *this,FContextValue *__return_storage_ptr__,FContext *param_1,
          FDataflowArrayTypes *param_2)

{
  FDataflowOutput *this_00;
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FContextValue *pFVar4;
  ulong64 uVar5;
  uint uVar6;
  FConnectionReference local_28;
  
  uVar6 = 0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_2;
  pFVar3 = FindInput(this,&local_28);
  this_00 = pFVar3->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4141872740057481682>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowInputOutput.h"
                         ,0x1d2,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FContextValue *)(*pcVar1)();
        return pFVar4;
      }
    }
    else {
      bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
      if (bVar2) {
        uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
        uVar6 = (uint)uVar5;
      }
    }
  }
  UE::Dataflow::FContextValue::FContextValue
            (__return_storage_ptr__,(IContextCacheStore *)param_1,uVar6);
  return __return_storage_ptr__;
}

// GetValue<FDataflowFaceSelection> @ 14e8fcc20

FDataflowFaceSelection * __thiscall
FDataflowNode::GetValue<FDataflowFaceSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowFaceSelection *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  FDataflowFaceSelection *pFVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pFVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pFVar4 = (FDataflowFaceSelection *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pFVar4);
      return pFVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FDataflowFaceSelection_const_&>
                (param_1,(uint)uVar7,pFVar1,pFVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pFVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowFaceSelection>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pFVar4);
      }
    }
  }
  return pFVar4;
}

// GetValue<FDataflowNumericTypes> @ 14e8fcdb0

double __thiscall
FDataflowNode::GetValue<FDataflowNumericTypes>
          (FDataflowNode *this,FContext *param_1,FDataflowNumericTypes *param_2)

{
  FDataflowOutput *this_00;
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  FDataflowInput *pFVar4;
  double *pdVar5;
  ulong64 uVar6;
  double local_res18;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res20;
  FConnectionReference local_58;
  <lambda_1> local_38;
  
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_2;
  pFVar4 = FindInput(this,&local_58);
  pvVar2 = local_58.Reference;
  this_00 = pFVar4->Connection;
  local_res18 = *(double *)local_58.Reference;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar3 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar3) {
      pdVar5 = (double *)FDataflowOutput::GetFrozenPropertyValue(this_00,pvVar2);
      return *pdVar5;
    }
    bVar3 = FDataflowOutput::Evaluate(this_00,param_1);
    if (bVar3) {
      pcVar1 = *(code **)(param_1->_padding_ + 0x30);
      uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res20 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                     *)(*pcVar1)(param_1,uVar6);
      if ((local_res20 !=
           (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0) && (local_res20->Ptr != (FContextCacheElementBase *)0x0)) {
        local_38.CacheEntry = &local_res20;
        local_38.ReturnValue = (TRotator<double> *)&local_res18;
        local_38.__this = pFVar4;
        local_38.Context = param_1;
        TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
        ::
        VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
                  ((FName)pFVar4->_padding_,&local_38);
      }
    }
  }
  return local_res18;
}

// GetValue<FDataflowTransformSelection> @ 14e8fd420

FDataflowTransformSelection * __thiscall
FDataflowNode::GetValue<FDataflowTransformSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowTransformSelection *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  FDataflowTransformSelection *pFVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pFVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pFVar4 = (FDataflowTransformSelection *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pFVar4);
      return pFVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FDataflowTransformSelection_const_&>
                (param_1,(uint)uVar7,pFVar1,pFVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pFVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowTransformSelection>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pFVar4);
      }
    }
  }
  return pFVar4;
}

// GetValue<FDataflowVertexSelection> @ 14e8fd710

FDataflowVertexSelection * __thiscall
FDataflowNode::GetValue<FDataflowVertexSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowVertexSelection *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  FDataflowVertexSelection *pFVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pFVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pFVar4 = (FDataflowVertexSelection *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pFVar4);
      return pFVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FDataflowVertexSelection_const_&>
                (param_1,(uint)uVar7,pFVar1,pFVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pFVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowVertexSelection>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pFVar4);
      }
    }
  }
  return pFVar4;
}

// GetValue<FManagedArrayCollection> @ 14e8fd8a0

FManagedArrayCollection * __thiscall
FDataflowNode::GetValue<FManagedArrayCollection>
          (FDataflowNode *this,FContext *param_1,FManagedArrayCollection *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  FManagedArrayCollection *pFVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pFVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pFVar4 = (FManagedArrayCollection *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pFVar4);
      return pFVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FManagedArrayCollection_const_&>
                (param_1,(uint)uVar7,pFVar1,pFVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pFVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FManagedArrayCollection>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pFVar4);
      }
    }
  }
  return pFVar4;
}

// GetValue<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e8fdb90

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TArray<float,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<float,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> @ 14e8fe480

TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::
      SetData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> @ 14e8fe770

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::
      SetData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e8fefa0

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::
      SetData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e8ff290

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::
      SetData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_> @ 14e8ff6e0

TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::
      SetData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<bool> @ 14e9003c0

bool * __thiscall FDataflowNode::GetValue<bool>(FDataflowNode *this,FContext *param_1,bool *param_2)

{
  FDataflowInput *this_00;
  bool *pbVar1;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_2;
  this_00 = FindInput(this,&local_28);
  pbVar1 = FDataflowInput::GetValue<bool>(this_00,param_1,local_28.Reference);
  return pbVar1;
}

// IsConnected<FDataflowFaceSelection> @ 14e900570

bool __thiscall
FDataflowNode::IsConnected<FDataflowFaceSelection>
          (FDataflowNode *this,FDataflowFaceSelection *param_1)

{
  FDataflowInput *pFVar1;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_1;
  pFVar1 = FindInput(this,&local_28);
  return pFVar1->Connection != (FDataflowOutput *)0x0;
}

// IsConnected<FDataflowTransformSelection> @ 14e9005b0

bool __thiscall
FDataflowNode::IsConnected<FDataflowTransformSelection>
          (FDataflowNode *this,FDataflowTransformSelection *param_1)

{
  FDataflowInput *pFVar1;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_1;
  pFVar1 = FindInput(this,&local_28);
  return pFVar1->Connection != (FDataflowOutput *)0x0;
}

// IsConnected<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e9005f0

bool __thiscall
FDataflowNode::IsConnected<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FDataflowInput *pFVar1;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_1;
  pFVar1 = FindInput(this,&local_28);
  return pFVar1->Connection != (FDataflowOutput *)0x0;
}

// SafeForwardInput<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_> @ 14e900e70

void __thiscall
FDataflowNode::
SafeForwardInput<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,FConnectionReference *param_2,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  uint uVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *this_00;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  undefined1 local_58 [16];
  FConnectionReference local_48;
  FConnectionReference local_30;
  
  pFVar4 = FindInput(this,param_2);
  if (pFVar4->Connection == (FDataflowOutput *)0x0) {
    pTVar1 = param_2->Reference;
    local_30.Index = -1;
    local_30.ContainerReference = (void *)0x0;
    local_30.Reference = param_3;
    this_00 = FindOutput(this,&local_30);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::
      SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>'
      ::__l7::<lambda_1>::operator()(local_58);
    }
    else if (this_00->_padding_ != 0) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid
                         ((FDataflowConnection *)this_00,(FGuid *)&local_48);
      pFVar2 = (FProperty *)this_00->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::
      SetData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar2,pTVar1,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
  }
  else {
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_48.Reference = param_3;
    ForwardInput(this,param_1,param_2,&local_48);
  }
  return;
}

// SetValue<int_&,int> @ 14e905180

void __thiscall
FDataflowNode::SetValue<int_&,int>(FDataflowNode *this,FContext *param_1,int *param_2,int *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<int_&,int>'::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x40);
    puVar7 = local_res20;
    if (puVar12 != (undefined8 *)0x0) {
      uVar3 = pFVar10->A;
      uVar4 = pFVar10->B;
      uVar5 = pFVar10->C;
      uVar6 = pFVar10->D;
      puVar12[6] = *(undefined8 *)FVar9.Value;
      *puVar12 = &___7__TContextCacheElement_AEAH_Dataflow_UE__6B_;
      *(undefined4 *)(puVar12 + 1) = 0;
      *(uint *)((longlong)puVar12 + 0xc) = uVar3;
      *(uint *)(puVar12 + 2) = uVar4;
      *(uint *)((longlong)puVar12 + 0x14) = uVar5;
      *(uint *)(puVar12 + 3) = uVar6;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      *(int *)(puVar12 + 7) = *param_2;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar2)(puVar7,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<float_&,float> @ 14e905320

void __thiscall
FDataflowNode::SetValue<float_&,float>
          (FDataflowNode *this,FContext *param_1,float *param_2,float *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<float_&,float>'::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x40);
    puVar7 = local_res20;
    if (puVar12 != (undefined8 *)0x0) {
      uVar3 = pFVar10->A;
      uVar4 = pFVar10->B;
      uVar5 = pFVar10->C;
      uVar6 = pFVar10->D;
      puVar12[6] = *(undefined8 *)FVar9.Value;
      *puVar12 = &___7__TContextCacheElement_AEAM_Dataflow_UE__6B_;
      *(undefined4 *)(puVar12 + 1) = 0;
      *(uint *)((longlong)puVar12 + 0xc) = uVar3;
      *(uint *)(puVar12 + 2) = uVar4;
      *(uint *)((longlong)puVar12 + 0x14) = uVar5;
      *(uint *)(puVar12 + 3) = uVar6;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      *(float *)(puVar12 + 7) = *param_2;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar2)(puVar7,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<double_&,double> @ 14e9054c0

void __thiscall
FDataflowNode::SetValue<double_&,double>
          (FDataflowNode *this,FContext *param_1,double *param_2,double *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<double_&,double>'::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x40);
    puVar7 = local_res20;
    if (puVar12 != (undefined8 *)0x0) {
      uVar3 = pFVar10->A;
      uVar4 = pFVar10->B;
      uVar5 = pFVar10->C;
      uVar6 = pFVar10->D;
      puVar12[6] = *(undefined8 *)FVar9.Value;
      *puVar12 = &___7__TContextCacheElement_AEAN_Dataflow_UE__6B_;
      *(undefined4 *)(puVar12 + 1) = 0;
      *(uint *)((longlong)puVar12 + 0xc) = uVar3;
      *(uint *)(puVar12 + 2) = uVar4;
      *(uint *)((longlong)puVar12 + 0x14) = uVar5;
      *(uint *)(puVar12 + 3) = uVar6;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      puVar12[7] = *param_2;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar2)(puVar7,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TObjectPtr<UDataflowMesh>_&,TObjectPtr<UDataflowMesh>_> @ 14e905660

void __thiscall
FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>_&,TObjectPtr<UDataflowMesh>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UDataflowMesh> *param_2,
          TObjectPtr<UDataflowMesh> *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UDataflowMesh *pUVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_60;
  FConnectionReference local_50;
  
  local_50.Index = -1;
  local_50.ContainerReference = (void *)0x0;
  local_50.Reference = param_3;
  this_00 = FindOutput(this,&local_50);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>_&,TObjectPtr<UDataflowMesh>_>'::__l7::
    <lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_60);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x50);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)FVar9.Value;
      uVar5 = *(undefined8 *)pFVar10;
      uVar6 = *(undefined8 *)&pFVar10->C;
      *puVar12 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      puVar12[6] = uVar2;
      *(undefined8 *)((longlong)puVar12 + 0xc) = uVar5;
      *(undefined8 *)((longlong)puVar12 + 0x14) = uVar6;
      *(undefined4 *)(puVar12 + 1) = 3;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      puVar12[7] = &___7FGCObject__6B_;
      *(undefined2 *)(puVar12 + 8) = 0;
      FGCObject::RegisterGCObject((FGCObject *)(puVar12 + 7));
      *puVar12 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UDataflowMesh>&___ptr64>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
      puVar12[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UDataflowMesh>&___ptr64>::
                    _vftable__for__FGCObject__;
      pUVar3 = (param_2->field0_0x0).DebugPtr;
      puVar12[9] = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDataflowMesh *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
    }
    puVar7 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar4)(puVar7,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_> @ 14e905850

void __thiscall
FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UDynamicMesh> *param_2,
          TObjectPtr<UDynamicMesh> *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UDynamicMesh *pUVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_60;
  FConnectionReference local_50;
  
  local_50.Index = -1;
  local_50.ContainerReference = (void *)0x0;
  local_50.Reference = param_3;
  this_00 = FindOutput(this,&local_50);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>'::__l7::
    <lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_60);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x50);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)FVar9.Value;
      uVar5 = *(undefined8 *)pFVar10;
      uVar6 = *(undefined8 *)&pFVar10->C;
      *puVar12 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      puVar12[6] = uVar2;
      *(undefined8 *)((longlong)puVar12 + 0xc) = uVar5;
      *(undefined8 *)((longlong)puVar12 + 0x14) = uVar6;
      *(undefined4 *)(puVar12 + 1) = 3;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      puVar12[7] = &___7FGCObject__6B_;
      *(undefined2 *)(puVar12 + 8) = 0;
      FGCObject::RegisterGCObject((FGCObject *)(puVar12 + 7));
      *puVar12 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UDynamicMesh>&___ptr64>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
      puVar12[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UDynamicMesh>&___ptr64>::
                    _vftable__for__FGCObject__;
      pUVar3 = (param_2->field0_0x0).DebugPtr;
      puVar12[9] = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDynamicMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
    }
    puVar7 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar4)(puVar7,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<UE::Math::TVector<double>_&,UE::Math::TVector<double>_> @ 14e905a40

void __thiscall
FDataflowNode::SetValue<UE::Math::TVector<double>_&,UE::Math::TVector<double>_>
          (FDataflowNode *this,FContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TVector<double>_&,UE::Math::TVector<double>_>'::__l7::
    <lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<UE::Math::TVector<double>_&>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection> @ 14e905be0

void __thiscall
FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowTransformSelection *param_2,
          FDataflowTransformSelection *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>'::__l7::
    <lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<FDataflowTransformSelection_&>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<FManagedArrayCollection_&,FManagedArrayCollection> @ 14e905d80

void __thiscall
FDataflowNode::SetValue<FManagedArrayCollection_&,FManagedArrayCollection>
          (FDataflowNode *this,FContext *param_1,FManagedArrayCollection *param_2,
          FManagedArrayCollection *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FManagedArrayCollection_&,FManagedArrayCollection>'::__l7::<lambda_1>::
    operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<FManagedArrayCollection_&>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e905f20

void __thiscall
FDataflowNode::
SetValue<TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  FDataflowOutput *this_00;
  FTimestamp FVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>'::
    __l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar10 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar11 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar3 = (FProperty *)this_00->_padding_;
    uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar13 = ::operator_new(0x48);
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      uVar6 = *(undefined8 *)pFVar11;
      uVar7 = *(undefined8 *)&pFVar11->C;
      uVar4 = *(undefined8 *)FVar10.Value;
      puVar13[4] = pFVar3;
      pFVar1 = (ForAnyElementType *)(puVar13 + 7);
      *(undefined8 *)((longlong)puVar13 + 0xc) = uVar6;
      *(undefined8 *)((longlong)puVar13 + 0x14) = uVar7;
      *(undefined4 *)(puVar13 + 1) = 0;
      *(uint *)(puVar13 + 5) = uVar9;
      puVar13[6] = uVar4;
      *puVar13 = &
                 ___7__TContextCacheElement_AEAV__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      *(int *)(puVar13 + 8) = iVar2;
      if (iVar2 == 0) {
        *(int *)((longlong)puVar13 + 0x44) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar13 + 0x44));
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
    }
    puVar8 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*local_res20;
      local_res20 = puVar13;
      (*(code *)*puVar5)(puVar8,1);
      puVar13 = local_res20;
    }
    local_res20 = puVar13;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar12,pFVar3,pFVar11,uVar9,(FTimestamp *)FVar10.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e906150

void __thiscall
FDataflowNode::
SetValue<TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  FDataflowOutput *this_00;
  FTimestamp FVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar10 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar11 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar3 = (FProperty *)this_00->_padding_;
    uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar13 = ::operator_new(0x48);
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      uVar6 = *(undefined8 *)pFVar11;
      uVar7 = *(undefined8 *)&pFVar11->C;
      uVar4 = *(undefined8 *)FVar10.Value;
      puVar13[4] = pFVar3;
      pFVar1 = (ForAnyElementType *)(puVar13 + 7);
      *(undefined8 *)((longlong)puVar13 + 0xc) = uVar6;
      *(undefined8 *)((longlong)puVar13 + 0x14) = uVar7;
      *(undefined4 *)(puVar13 + 1) = 0;
      *(uint *)(puVar13 + 5) = uVar9;
      puVar13[6] = uVar4;
      *puVar13 = &
                 ___7__TContextCacheElement_AEAV__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      *(int *)(puVar13 + 8) = iVar2;
      if (iVar2 == 0) {
        *(int *)((longlong)puVar13 + 0x44) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar13 + 0x44));
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
    }
    puVar8 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*local_res20;
      local_res20 = puVar13;
      (*(code *)*puVar5)(puVar8,1);
      puVar13 = local_res20;
    }
    local_res20 = puVar13;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar12,pFVar3,pFVar11,uVar9,(FTimestamp *)FVar10.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> @ 14e906380

void __thiscall
FDataflowNode::
SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *pTVar7;
  TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *pTVar8;
  TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pTVar8 = (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0;
    pTVar7 = ::operator_new(0x58);
    if (pTVar7 != (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pTVar8 = UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_>::
               TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_><TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
                         (pTVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pTVar7 = local_res20;
    if (local_res20 != (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pTVar8;
      (**(code **)*plVar2)(pTVar7,1);
      pTVar8 = local_res20;
    }
    local_res20 = pTVar8;
    if (local_res20 == (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> @ 14e906520

void __thiscall
FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *pTVar7;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *pTVar8;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pTVar8 = (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0;
    pTVar7 = ::operator_new(0x58);
    if (pTVar7 != (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pTVar8 = UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
               TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_><TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
                         (pTVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pTVar7 = local_res20;
    if (local_res20 != (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pTVar8;
      (**(code **)*plVar2)(pTVar7,1);
      pTVar8 = local_res20;
    }
    local_res20 = pTVar8;
    if (local_res20 == (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&,TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> @ 14e9066c0

void __thiscall
FDataflowNode::
SetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&,TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  FGeometryCollectionSource *pFVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  FDataflowOutput *this_00;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&,TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar3 = (FProperty *)this_00->_padding_;
    uVar13 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar14 = ::operator_new(0x48);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      uVar7 = *(undefined8 *)pFVar12;
      uVar8 = *(undefined8 *)&pFVar12->C;
      uVar4 = *(undefined8 *)FVar11.Value;
      puVar14[4] = pFVar3;
      pFVar1 = (ForAnyElementType *)(puVar14 + 7);
      *(undefined8 *)((longlong)puVar14 + 0xc) = uVar7;
      *(undefined8 *)((longlong)puVar14 + 0x14) = uVar8;
      *(undefined4 *)(puVar14 + 1) = 0;
      *(uint *)(puVar14 + 5) = uVar10;
      puVar14[6] = uVar4;
      *puVar14 = &
                 ___7__TContextCacheElement_AEAV__TArray_UFGeometryCollectionSource__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = param_2->ArrayNum;
      pFVar5 = (FGeometryCollectionSource *)(param_2->AllocatorInstance).Data;
      *(int *)(puVar14 + 8) = iVar2;
      if (iVar2 == 0) {
        *(int *)((longlong)puVar14 + 0x44) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb0,0x10,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar14 + 0x44));
        ConstructItems<FGeometryCollectionSource,FGeometryCollectionSource,int>
                  (pFVar1->Data,pFVar5,iVar2);
      }
    }
    puVar9 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*local_res20;
      local_res20 = puVar14;
      (*(code *)*puVar6)(puVar9,1);
      puVar14 = local_res20;
    }
    local_res20 = puVar14;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar13,pFVar3,pFVar12,uVar10,(FTimestamp *)FVar11.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar13 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<bool_&,bool> @ 14e9068f0

void __thiscall
FDataflowNode::SetValue<bool_&,bool>
          (FDataflowNode *this,FContext *param_1,bool *param_2,bool *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<bool_&,bool>'::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x40);
    puVar7 = local_res20;
    if (puVar12 != (undefined8 *)0x0) {
      uVar3 = pFVar10->A;
      uVar4 = pFVar10->B;
      uVar5 = pFVar10->C;
      uVar6 = pFVar10->D;
      puVar12[6] = *(undefined8 *)FVar9.Value;
      *puVar12 = &___7__TContextCacheElement_AEA_N_Dataflow_UE__6B_;
      *(undefined4 *)(puVar12 + 1) = 0;
      *(uint *)((longlong)puVar12 + 0xc) = uVar3;
      *(uint *)(puVar12 + 2) = uVar4;
      *(uint *)((longlong)puVar12 + 0x14) = uVar5;
      *(uint *)(puVar12 + 3) = uVar6;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      *(bool *)(puVar12 + 7) = *param_2;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar2)(puVar7,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<int_const_&,int> @ 14e906a90

void __thiscall
FDataflowNode::SetValue<int_const_&,int>
          (FDataflowNode *this,FContext *param_1,int *param_2,int *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<int_const_&,int>'::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<int_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<float_const_&,float> @ 14e906ba0

void __thiscall
FDataflowNode::SetValue<float_const_&,float>
          (FDataflowNode *this,FContext *param_1,float *param_2,float *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<float_const_&,float>'::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<float_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TObjectPtr<UMaterial>_const_&,TObjectPtr<UMaterial>_> @ 14e906cb0

void __thiscall
FDataflowNode::SetValue<TObjectPtr<UMaterial>_const_&,TObjectPtr<UMaterial>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UMaterial> *param_2,
          TObjectPtr<UMaterial> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<TObjectPtr<UMaterial>_const_&,TObjectPtr<UMaterial>_>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<TObjectPtr<UMaterial>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TObjectPtr<UMaterialInterface>_const_&,TObjectPtr<UMaterialInterface>_> @ 14e906dc0

void __thiscall
FDataflowNode::SetValue<TObjectPtr<UMaterialInterface>_const_&,TObjectPtr<UMaterialInterface>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UMaterialInterface> *param_2,
          TObjectPtr<UMaterialInterface> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TObjectPtr<UMaterialInterface>_const_&,TObjectPtr<UMaterialInterface>_>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<TObjectPtr<UMaterialInterface>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_> @ 14e906ed0

void __thiscall
FDataflowNode::SetValue<UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_>
          (FDataflowNode *this,FContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TQuat<double>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_> @ 14e906fe0

void __thiscall
FDataflowNode::SetValue<UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_>
          (FDataflowNode *this,FContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector<double>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection> @ 14e9070f0

void __thiscall
FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
          (FDataflowNode *this,FContext *param_1,FManagedArrayCollection *param_2,
          FManagedArrayCollection *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FManagedArrayCollection_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> @ 14e907200

void __thiscall
FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::
    SetData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> @ 14e907310

void __thiscall
FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::
    SetData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e907420

void __thiscall
FDataflowNode::
SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::
    SetData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<FString_const_&,FString> @ 14e907530

void __thiscall
FDataflowNode::SetValue<FString_const_&,FString>
          (FDataflowNode *this,FContext *param_1,FString *param_2,FString *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FString_const_&,FString>'::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FString_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<bool_const_&,bool> @ 14e907640

void __thiscall
FDataflowNode::SetValue<bool_const_&,bool>
          (FDataflowNode *this,FContext *param_1,bool *param_2,bool *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<bool_const_&,bool>'::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<bool_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<int,int> @ 14e907750

void __thiscall
FDataflowNode::SetValue<int,int>(FDataflowNode *this,FContext *param_1,int *param_2,int *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<int,int>'::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<int>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<float,float> @ 14e907860

void __thiscall
FDataflowNode::SetValue<float,float>
          (FDataflowNode *this,FContext *param_1,float *param_2,float *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<float,float>'::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<float>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<UE::Math::TBox<double>,UE::Math::TBox<double>_> @ 14e907970

void __thiscall
FDataflowNode::SetValue<UE::Math::TBox<double>,UE::Math::TBox<double>_>
          (FDataflowNode *this,FContext *param_1,TBox<double> *param_2,TBox<double> *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 *puVar9;
  uint uVar10;
  FDataflowOutput *this_00;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TBox<double>,UE::Math::TBox<double>_>'::__l7::<lambda_1>::
    operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar13 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar14 = ::operator_new(0x70);
    puVar9 = local_res20;
    if (puVar14 != (undefined8 *)0x0) {
      uVar6 = *(undefined8 *)pFVar12;
      uVar7 = *(undefined8 *)&pFVar12->C;
      puVar14[6] = *(undefined8 *)FVar11.Value;
      *puVar14 = &___7__TContextCacheElement_U__TBox_N_Math_UE___Dataflow_UE__6B_;
      *(undefined4 *)(puVar14 + 1) = 0;
      *(undefined8 *)((longlong)puVar14 + 0xc) = uVar6;
      *(undefined8 *)((longlong)puVar14 + 0x14) = uVar7;
      puVar14[4] = pFVar1;
      *(uint *)(puVar14 + 5) = uVar10;
      dVar8 = (param_2->Min).field0_0x0._s_0.Y;
      puVar14[7] = (param_2->Min).field0_0x0._s_0.X;
      puVar14[8] = dVar8;
      dVar8 = (param_2->Max).field0_0x0._s_0.X;
      puVar14[9] = (param_2->Min).field0_0x0._s_0.Z;
      puVar14[10] = dVar8;
      uVar3 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0xc);
      uVar4 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0x10);
      uVar5 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0x14);
      *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 8);
      *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar3;
      *(undefined4 *)(puVar14 + 0xc) = uVar4;
      *(undefined4 *)((longlong)puVar14 + 100) = uVar5;
      puVar14[0xd] = *(undefined8 *)&param_2->IsValid;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res20;
      local_res20 = puVar14;
      (*(code *)*puVar2)(puVar9,1);
      puVar14 = local_res20;
    }
    local_res20 = puVar14;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar13,pFVar1,pFVar12,uVar10,(FTimestamp *)FVar11.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar13 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_> @ 14e907b20

void __thiscall
FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UDynamicMesh> *param_2,
          TObjectPtr<UDynamicMesh> *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UDynamicMesh *pUVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FDataflowOutput *this_00;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_60;
  FConnectionReference local_50;
  
  local_50.Index = -1;
  local_50.ContainerReference = (void *)0x0;
  local_50.Reference = param_3;
  this_00 = FindOutput(this,&local_50);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>'::__l7::<lambda_1>
    ::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_60);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x50);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)FVar9.Value;
      uVar5 = *(undefined8 *)pFVar10;
      uVar6 = *(undefined8 *)&pFVar10->C;
      *puVar12 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      puVar12[6] = uVar2;
      *(undefined8 *)((longlong)puVar12 + 0xc) = uVar5;
      *(undefined8 *)((longlong)puVar12 + 0x14) = uVar6;
      *(undefined4 *)(puVar12 + 1) = 3;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      puVar12[7] = &___7FGCObject__6B_;
      *(undefined2 *)(puVar12 + 8) = 0;
      FGCObject::RegisterGCObject((FGCObject *)(puVar12 + 7));
      *puVar12 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UDynamicMesh>_>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
      puVar12[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UDynamicMesh>_>::
                    _vftable__for__FGCObject__;
      pUVar3 = (param_2->field0_0x0).DebugPtr;
      puVar12[9] = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDynamicMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
    }
    puVar7 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar4)(puVar7,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar11 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<UE::Math::TSphere<double>,UE::Math::TSphere<double>_> @ 14e907d10

void __thiscall
FDataflowNode::SetValue<UE::Math::TSphere<double>,UE::Math::TSphere<double>_>
          (FDataflowNode *this,FContext *param_1,TSphere<double> *param_2,TSphere<double> *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TSphere<double>,UE::Math::TSphere<double>_>'::__l7::
    <lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<UE::Math::TSphere<double>_>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<UE::Math::TTransform<double>,UE::Math::TTransform<double>_> @ 14e907eb0

void __thiscall
FDataflowNode::SetValue<UE::Math::TTransform<double>,UE::Math::TTransform<double>_>
          (FDataflowNode *this,FContext *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TTransform<double>,UE::Math::TTransform<double>_>'::__l7::
    <lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<UE::Math::TTransform<double>_>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<FDataflowCurveSelection,FDataflowCurveSelection> @ 14e9081c0

void __thiscall
FDataflowNode::SetValue<FDataflowCurveSelection,FDataflowCurveSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowCurveSelection *param_2,
          FDataflowCurveSelection *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowCurveSelection,FDataflowCurveSelection>'::__l7::<lambda_1>::
    operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FDataflowCurveSelection>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<FDataflowFaceSelection,FDataflowFaceSelection> @ 14e9082d0

void __thiscall
FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowFaceSelection *param_2,
          FDataflowFaceSelection *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>'::__l7::<lambda_1>::
    operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FDataflowFaceSelection>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<FDataflowGeometrySelection,FDataflowGeometrySelection> @ 14e9083e0

void __thiscall
FDataflowNode::SetValue<FDataflowGeometrySelection,FDataflowGeometrySelection>
          (FDataflowNode *this,FContext *param_1,FDataflowGeometrySelection *param_2,
          FDataflowGeometrySelection *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowGeometrySelection,FDataflowGeometrySelection>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FDataflowGeometrySelection>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<FDataflowImage,FDataflowImage> @ 14e9084f0

void __thiscall
FDataflowNode::SetValue<FDataflowImage,FDataflowImage>
          (FDataflowNode *this,FContext *param_1,FDataflowImage *param_2,FDataflowImage *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowImage,FDataflowImage>'::__l7::<lambda_1>::operator()
              (&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<FDataflowImage>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<FDataflowMaterialSelection,FDataflowMaterialSelection> @ 14e908690

void __thiscall
FDataflowNode::SetValue<FDataflowMaterialSelection,FDataflowMaterialSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowMaterialSelection *param_2,
          FDataflowMaterialSelection *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowMaterialSelection,FDataflowMaterialSelection>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FDataflowMaterialSelection>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<FDataflowSphereCovering,FDataflowSphereCovering> @ 14e9087a0

void __thiscall
FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>
          (FDataflowNode *this,FContext *param_1,FDataflowSphereCovering *param_2,
          FDataflowSphereCovering *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>'::__l7::<lambda_1>::
    operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<FDataflowSphereCovering>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<FDataflowStringArrayTypes> @ 14e908940

void __thiscall
FDataflowNode::SetValue<FDataflowStringArrayTypes>
          (FDataflowNode *this,FContext *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FDataflowStringArrayTypes *param_3)

{
  FName FVar1;
  bool bVar2;
  FDataflowOutput *pFVar3;
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_18;
  
  local_28._8_4_ = -1;
  local_18 = (void *)0x0;
  local_28._0_8_ = param_3;
  pFVar3 = FindOutput(this,(FConnectionReference *)local_28);
  if (pFVar3 != (FDataflowOutput *)0x0) {
    FVar1 = (FName)pFVar3->_padding_;
    local_28._0_8_ = pFVar3;
    local_28._8_8_ = param_1;
    local_18 = param_2;
    bVar2 = TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringArrayTypes>_::__l2::<lambda_1>_>
                      (FVar1,local_28);
    if (!bVar2) {
      if (FVar1 == TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName)
      {
        local_28._0_8_ = pFVar3;
        local_28._8_8_ = param_1;
        local_18 = param_2;
        `FDataflowOutput::SetValueFromAnyType<FDataflowStringArrayTypes>'::__l2::<lambda_1>::
        operator()<TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>_>
                  (local_28,(TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>)
                            local_res20);
      }
    }
    return;
  }
  `FDataflowNode::SetValue<FDataflowStringArrayTypes>'::__l7::<lambda_1>::operator()(local_res20);
  return;
}

// SetValue<FDataflowTransformSelection,FDataflowTransformSelection> @ 14e908a10

void __thiscall
FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowTransformSelection *param_2,
          FDataflowTransformSelection *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FDataflowTransformSelection>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<FDataflowVectorArrayTypes> @ 14e908b20

void __thiscall
FDataflowNode::SetValue<FDataflowVectorArrayTypes>
          (FDataflowNode *this,FContext *param_1,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_2,
          FDataflowVectorArrayTypes *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  <lambda_1> local_68;
  undefined1 local_48 [16];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_38;
  
  puVar12 = (undefined8 *)0x0;
  local_48._8_4_ = -1;
  local_38 = (void *)0x0;
  local_48._0_8_ = param_3;
  this_00 = FindOutput(this,(FConnectionReference *)local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowVectorArrayTypes>'::__l7::<lambda_1>::operator()(&local_res20)
    ;
  }
  else {
    local_48._0_8_ = this_00;
    local_48._8_8_ = param_1;
    local_38 = param_2;
    if ((FName)this_00->_padding_ !=
        TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>::
        TypeName) {
      local_68.__this = this_00;
      local_68.Context = param_1;
      local_68.InVal = (FString *)param_2;
      TDataflowMultiTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
      ::
      VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>_::__l2::<lambda_1>_>
                ((FName)this_00->_padding_,&local_68);
      return;
    }
    local_68.__this = (FDataflowOutput *)0x0;
    local_68.Context = (FContext *)0x0;
    FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
    To<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
              (param_2,(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)&local_68);
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid
                       ((FDataflowConnection *)this_00,(FGuid *)local_48);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x48);
    puVar6 = local_res20;
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = pFVar9->A;
      uVar3 = pFVar9->B;
      uVar4 = pFVar9->C;
      uVar5 = pFVar9->D;
      puVar11[6] = *(undefined8 *)FVar8.Value;
      *puVar11 = &
                 ___7__TContextCacheElement_V__TArray_U__TVector2_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(uint *)((longlong)puVar11 + 0xc) = uVar2;
      *(uint *)(puVar11 + 2) = uVar3;
      *(uint *)((longlong)puVar11 + 0x14) = uVar4;
      *(uint *)(puVar11 + 3) = uVar5;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = local_68.__this;
      local_68.__this = (FDataflowOutput *)0x0;
      *(undefined4 *)(puVar11 + 8) = local_68.Context._0_4_;
      *(undefined4 *)((longlong)puVar11 + 0x44) = local_68.Context._4_4_;
      local_68.Context = (FContext *)0x0;
      puVar12 = puVar11;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar11)(puVar6,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
    }
    if (local_68.__this != (FDataflowOutput *)0x0) {
      FMemory::Free(local_68.__this);
      return;
    }
  }
  return;
}

// SetValue<FDataflowVertexSelection,FDataflowVertexSelection> @ 14e908d20

void __thiscall
FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
          (FDataflowNode *this,FContext *param_1,FDataflowVertexSelection *param_2,
          FDataflowVertexSelection *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>'::__l7::<lambda_1>::
    operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FDataflowVertexSelection>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e908e30

void __thiscall
FDataflowNode::
SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>'::
    __l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<TArray<int,TSizedDefaultAllocator<32>_>_>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e908f40

void __thiscall
FDataflowNode::
SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<TArray<float,TSizedDefaultAllocator<32>_>_>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> @ 14e909050

void __thiscall
FDataflowNode::
SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *local_res20;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x58);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)FVar8.Value;
      uVar4 = *(undefined8 *)pFVar9;
      uVar5 = *(undefined8 *)&pFVar9->C;
      *puVar11 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      puVar11[6] = uVar2;
      *(undefined8 *)((longlong)puVar11 + 0xc) = uVar4;
      *(undefined8 *)((longlong)puVar11 + 0x14) = uVar5;
      *(undefined4 *)(puVar11 + 1) = 4;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = &___7FGCObject__6B_;
      *(undefined2 *)(puVar11 + 8) = 0;
      FGCObject::RegisterGCObject((FGCObject *)(puVar11 + 7));
      *puVar11 = &UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
      puVar11[9] = 0;
      puVar11[7] = &UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_>::
                    _vftable__for__FGCObject__;
      puVar11[9] = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 10) = param_2->ArrayNum;
      *(int *)((longlong)puVar11 + 0x54) = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
    }
    puVar6 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*local_res20;
      local_res20 = puVar11;
      (*(code *)*puVar3)(puVar6,1);
      puVar11 = local_res20;
    }
    local_res20 = puVar11;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> @ 14e909260

void __thiscall
FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *local_res20;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x58);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)FVar8.Value;
      uVar4 = *(undefined8 *)pFVar9;
      uVar5 = *(undefined8 *)&pFVar9->C;
      *puVar11 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      puVar11[6] = uVar2;
      *(undefined8 *)((longlong)puVar11 + 0xc) = uVar4;
      *(undefined8 *)((longlong)puVar11 + 0x14) = uVar5;
      *(undefined4 *)(puVar11 + 1) = 4;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = &___7FGCObject__6B_;
      *(undefined2 *)(puVar11 + 8) = 0;
      FGCObject::RegisterGCObject((FGCObject *)(puVar11 + 7));
      *puVar11 = &UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
      puVar11[9] = 0;
      puVar11[7] = &UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::
                    _vftable__for__FGCObject__;
      puVar11[9] = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 10) = param_2->ArrayNum;
      *(int *)((longlong)puVar11 + 0x54) = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
    }
    puVar6 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*local_res20;
      local_res20 = puVar11;
      (*(code *)*puVar3)(puVar6,1);
      puVar11 = local_res20;
    }
    local_res20 = puVar11;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> @ 14e909470

void __thiscall
FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *local_res20;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x58);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)FVar8.Value;
      uVar4 = *(undefined8 *)pFVar9;
      uVar5 = *(undefined8 *)&pFVar9->C;
      *puVar11 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      puVar11[6] = uVar2;
      *(undefined8 *)((longlong)puVar11 + 0xc) = uVar4;
      *(undefined8 *)((longlong)puVar11 + 0x14) = uVar5;
      *(undefined4 *)(puVar11 + 1) = 4;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = &___7FGCObject__6B_;
      *(undefined2 *)(puVar11 + 8) = 0;
      FGCObject::RegisterGCObject((FGCObject *)(puVar11 + 7));
      *puVar11 = &UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
      puVar11[9] = 0;
      puVar11[7] = &UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>
                    ::_vftable__for__FGCObject__;
      puVar11[9] = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 10) = param_2->ArrayNum;
      *(int *)((longlong)puVar11 + 0x54) = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
    }
    puVar6 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*local_res20;
      local_res20 = puVar11;
      (*(code *)*puVar3)(puVar6,1);
      puVar11 = local_res20;
    }
    local_res20 = puVar11;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e909680

void __thiscall
FDataflowNode::
SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> @ 14e909790

void __thiscall
FDataflowNode::
SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  puVar12 = (undefined8 *)0x0;
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x48);
    puVar6 = local_res20;
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = pFVar9->A;
      uVar3 = pFVar9->B;
      uVar4 = pFVar9->C;
      uVar5 = pFVar9->D;
      puVar11[6] = *(undefined8 *)FVar8.Value;
      *puVar11 = &
                 ___7__TContextCacheElement_V__TArray_UFDataflowRootProxyMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(uint *)((longlong)puVar11 + 0xc) = uVar2;
      *(uint *)(puVar11 + 2) = uVar3;
      *(uint *)((longlong)puVar11 + 0x14) = uVar4;
      *(uint *)(puVar11 + 3) = uVar5;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = 0;
      puVar11[7] = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 8) = param_2->ArrayNum;
      *(int *)((longlong)puVar11 + 0x44) = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
      puVar12 = puVar11;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar11)(puVar6,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_> @ 14e909940

void __thiscall
FDataflowNode::
SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  puVar12 = (undefined8 *)0x0;
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x48);
    puVar6 = local_res20;
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = pFVar9->A;
      uVar3 = pFVar9->B;
      uVar4 = pFVar9->C;
      uVar5 = pFVar9->D;
      puVar11[6] = *(undefined8 *)FVar8.Value;
      *puVar11 = &
                 ___7__TContextCacheElement_V__TArray_UFGeometryCollectionAutoInstanceMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(uint *)((longlong)puVar11 + 0xc) = uVar2;
      *(uint *)(puVar11 + 2) = uVar3;
      *(uint *)((longlong)puVar11 + 0x14) = uVar4;
      *(uint *)(puVar11 + 3) = uVar5;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = 0;
      puVar11[7] = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 8) = param_2->ArrayNum;
      *(int *)((longlong)puVar11 + 0x44) = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
      puVar12 = puVar11;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar11)(puVar6,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e909af0

void __thiscall
FDataflowNode::
SetValue<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<TArray<FString,TSizedDefaultAllocator<32>_>_>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e909c00

void __thiscall
FDataflowNode::
SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  puVar12 = (undefined8 *)0x0;
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>'::
    __l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x48);
    puVar6 = local_res20;
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = pFVar9->A;
      uVar3 = pFVar9->B;
      uVar4 = pFVar9->C;
      uVar5 = pFVar9->D;
      puVar11[6] = *(undefined8 *)FVar8.Value;
      *puVar11 = &
                 ___7__TContextCacheElement_V__TArray__NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(uint *)((longlong)puVar11 + 0xc) = uVar2;
      *(uint *)(puVar11 + 2) = uVar3;
      *(uint *)((longlong)puVar11 + 0x14) = uVar4;
      *(uint *)(puVar11 + 3) = uVar5;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = 0;
      puVar11[7] = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 8) = param_2->ArrayNum;
      *(int *)((longlong)puVar11 + 0x44) = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
      puVar12 = puVar11;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar11)(puVar6,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<FString,FString> @ 14e909db0

void __thiscall
FDataflowNode::SetValue<FString,FString>
          (FDataflowNode *this,FContext *param_1,FString *param_2,FString *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  puVar12 = (undefined8 *)0x0;
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FString,FString>'::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x48);
    puVar6 = local_res20;
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = pFVar9->A;
      uVar3 = pFVar9->B;
      uVar4 = pFVar9->C;
      uVar5 = pFVar9->D;
      puVar11[6] = *(undefined8 *)FVar8.Value;
      *puVar11 = &___7__TContextCacheElement_VFString___Dataflow_UE__6B_;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(uint *)((longlong)puVar11 + 0xc) = uVar2;
      *(uint *)(puVar11 + 2) = uVar3;
      *(uint *)((longlong)puVar11 + 0x14) = uVar4;
      *(uint *)(puVar11 + 3) = uVar5;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = 0;
      puVar11[7] = (param_2->Data).AllocatorInstance.Data;
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 8) = (param_2->Data).ArrayNum;
      *(int *)((longlong)puVar11 + 0x44) = (param_2->Data).ArrayMax;
      (param_2->Data).ArrayNum = 0;
      (param_2->Data).ArrayMax = 0;
      puVar12 = puVar11;
    }
    if (local_res20 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*local_res20;
      local_res20 = puVar12;
      (*(code *)*puVar11)(puVar6,1);
      puVar12 = local_res20;
    }
    local_res20 = puVar12;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar10 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// operator() @ 15059a140

bool __thiscall
`FDataflowNode::SetValue<FManagedArrayCollection_const_,FManagedArrayCollection>'::__l7::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FManagedArrayCollection_const_,FManagedArrayCollection>(UE::Dataflow::FContext&___ptr64,FManagedArrayCollection_const&&___ptr64,FManagedArrayCollection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a180

bool __thiscall `FDataflowNode::SetValue<double_&,double>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<double&___ptr64,double>(UE::Dataflow::FContext&___ptr64,double&___ptr64,double_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a1c0

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>_&,TObjectPtr<UDataflowMesh>_>'::__l7::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>&___ptr64,TObjectPtr<class_UDataflowMesh>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UDataflowMesh>&___ptr64,TObjectPtr<class_UDataflowMesh>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a200

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UGeometryCollection>_&,TObjectPtr<UGeometryCollection>_>'::__l7
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UGeometryCollection>&___ptr64,TObjectPtr<class_UGeometryCollection>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UGeometryCollection>&___ptr64,TObjectPtr<class_UGeometryCollection>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a240

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UMaterialInterface>_&,TObjectPtr<UMaterialInterface>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UMaterialInterface>&___ptr64,TObjectPtr<class_UMaterialInterface>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UMaterialInterface>&___ptr64,TObjectPtr<class_UMaterialInterface>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a280

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TVector<double>_&,UE::Math::TVector<double>_>'::__l7::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TVector<double>&___ptr64,UE::Math::TVector<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TVector<double>&___ptr64,UE::Math::TVector<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a2c0

bool __thiscall
`FDataflowNode::
SetValue<FDataflowConvexDecompositionSettings_&,FDataflowConvexDecompositionSettings>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowConvexDecompositionSettings&___ptr64,FDataflowConvexDecompositionSettings>(UE::Dataflow::FContext&___ptr64,FDataflowConvexDecompositionSettings&___ptr64,FDataflowConvexDecompositionSettings_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a300

bool __thiscall
`FDataflowNode::SetValue<FDataflowFaceSelection_&,FDataflowFaceSelection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowFaceSelection&___ptr64,FDataflowFaceSelection>(UE::Dataflow::FContext&___ptr64,FDataflowFaceSelection&___ptr64,FDataflowFaceSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a340

bool __thiscall
`FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowTransformSelection&___ptr64,FDataflowTransformSelection>(UE::Dataflow::FContext&___ptr64,FDataflowTransformSelection&___ptr64,FDataflowTransformSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a380

bool __thiscall
`FDataflowNode::SetValue<FManagedArrayCollection_&,FManagedArrayCollection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FManagedArrayCollection&___ptr64,FManagedArrayCollection>(UE::Dataflow::FContext&___ptr64,FManagedArrayCollection&___ptr64,FManagedArrayCollection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a3c0

bool __thiscall
`FDataflowNode::
SetValue<TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>'::__l7
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<int,TSizedDefaultAllocator<32>_>&___ptr64,TArray<int,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>&___ptr64,TArray<int,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a400

bool __thiscall
`FDataflowNode::
SetValue<TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>'::
__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<float,TSizedDefaultAllocator<32>_>&___ptr64,TArray<float,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64,TArray<float,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a440

bool __thiscall
`FDataflowNode::
SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<struct_TObjectPtr<class_UDynamicMesh>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<struct_TObjectPtr<class_UDynamicMesh>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a480

bool __thiscall
`FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<struct_TObjectPtr<class_UMaterialInterface>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<struct_TObjectPtr<class_UMaterialInterface>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a4c0

bool __thiscall
`FDataflowNode::
SetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&,TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>&___ptr64,TArray<struct_FGeometryCollectionSource,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>&___ptr64,TArray<struct_FGeometryCollectionSource,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a500

bool __thiscall `FDataflowNode::SetValue<bool_&,bool>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<bool&___ptr64,bool>(UE::Dataflow::FContext&___ptr64,bool&___ptr64,bool_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a540

bool __thiscall `FDataflowNode::SetValue<int_const_&,int>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<int_const&___ptr64,int>(UE::Dataflow::FContext&___ptr64,int_const&___ptr64,int_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a580

bool __thiscall
`FDataflowNode::SetValue<float_const_&,float>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<float_const&___ptr64,float>(UE::Dataflow::FContext&___ptr64,float_const&___ptr64,float_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a5c0

bool __thiscall
`FDataflowNode::SetValue<double_const_&,double>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<double_const&___ptr64,double>(UE::Dataflow::FContext&___ptr64,double_const&___ptr64,double_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a600

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_>'::__l7::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TBox<double>_const&___ptr64,UE::Math::TBox<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TBox<double>_const&___ptr64,UE::Math::TBox<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a640

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>_const_&,TObjectPtr<UDataflowMesh>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>_const&___ptr64,TObjectPtr<class_UDataflowMesh>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UDataflowMesh>_const&___ptr64,TObjectPtr<class_UDataflowMesh>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a680

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_const_&,TObjectPtr<UDynamicMesh>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_const&___ptr64,TObjectPtr<class_UDynamicMesh>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UDynamicMesh>_const&___ptr64,TObjectPtr<class_UDynamicMesh>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a6c0

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UMaterial>_const_&,TObjectPtr<UMaterial>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UMaterial>_const&___ptr64,TObjectPtr<class_UMaterial>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UMaterial>_const&___ptr64,TObjectPtr<class_UMaterial>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a700

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UMaterialInterface>_const_&,TObjectPtr<UMaterialInterface>_>'::
__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UMaterialInterface>_const&___ptr64,TObjectPtr<class_UMaterialInterface>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UMaterialInterface>_const&___ptr64,TObjectPtr<class_UMaterialInterface>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a740

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TPlane<double>_const_&,UE::Math::TPlane<double>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TPlane<double>_const&___ptr64,UE::Math::TPlane<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TPlane<double>_const&___ptr64,UE::Math::TPlane<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a780

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TQuat<double>_const&___ptr64,UE::Math::TQuat<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TQuat<double>_const&___ptr64,UE::Math::TQuat<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a7c0

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TRotator<double>_const_&,UE::Math::TRotator<double>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TRotator<double>_const&___ptr64,UE::Math::TRotator<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TRotator<double>_const&___ptr64,UE::Math::TRotator<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a800

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TSphere<double>_const_&,UE::Math::TSphere<double>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TSphere<double>_const&___ptr64,UE::Math::TSphere<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TSphere<double>_const&___ptr64,UE::Math::TSphere<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a840

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a880

bool __thiscall
`FDataflowNode::SetValue<FDataflowFaceSelection_const_&,FDataflowFaceSelection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowFaceSelection_const&___ptr64,FDataflowFaceSelection>(UE::Dataflow::FContext&___ptr64,FDataflowFaceSelection_const&___ptr64,FDataflowFaceSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a8c0

bool __thiscall
`FDataflowNode::SetValue<FDataflowTransformSelection_const_&,FDataflowTransformSelection>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowTransformSelection_const&___ptr64,FDataflowTransformSelection>(UE::Dataflow::FContext&___ptr64,FDataflowTransformSelection_const&___ptr64,FDataflowTransformSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a900

bool __thiscall
`FDataflowNode::SetValue<FDataflowVertexSelection_const_&,FDataflowVertexSelection>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowVertexSelection_const&___ptr64,FDataflowVertexSelection>(UE::Dataflow::FContext&___ptr64,FDataflowVertexSelection_const&___ptr64,FDataflowVertexSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a940

bool __thiscall
`FDataflowNode::
SetValue<TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<int,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<int,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a980

bool __thiscall
`FDataflowNode::
SetValue<TArray<float,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059a9c0

bool __thiscall
`FDataflowNode::
SetValue<TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<double,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<double,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<double,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<double,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<double,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059aa00

bool __thiscall
`FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_TObjectPtr<class_UMaterial>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_TObjectPtr<class_UMaterial>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059aa40

bool __thiscall
`FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_TObjectPtr<class_UMaterialInterface>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_TObjectPtr<class_UMaterialInterface>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059aa80

bool __thiscall
`FDataflowNode::
SetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_UE::Math::TVector<float>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_UE::Math::TVector<float>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059aac0

bool __thiscall
`FDataflowNode::
SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_UE::Math::TVector<double>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_UE::Math::TVector<double>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ab00

bool __thiscall
`FDataflowNode::
SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FDataflowRootProxyMesh,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FDataflowRootProxyMesh,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ab40

bool __thiscall
`FDataflowNode::
SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FGeometryCollectionAutoInstanceMesh,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FGeometryCollectionAutoInstanceMesh,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ab80

bool __thiscall
`FDataflowNode::
SetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FLinearColor,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FLinearColor,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059abc0

bool __thiscall
`FDataflowNode::
SetValue<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&,TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FManagedArrayCollection,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FManagedArrayCollection,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ac00

bool __thiscall
`FDataflowNode::
SetValue<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<class_FString,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<class_FString,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ac40

bool __thiscall
`FDataflowNode::SetValue<FString_const_&,FString>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FString_const&___ptr64,FString>(UE::Dataflow::FContext&___ptr64,FString_const&___ptr64,FString_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ac80

bool __thiscall
`FDataflowNode::SetValue<bool_const_&,bool>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<bool_const&___ptr64,bool>(UE::Dataflow::FContext&___ptr64,bool_const&___ptr64,bool_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059acc0

bool __thiscall `FDataflowNode::SetValue<float,float>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<float,float>(UE::Dataflow::FContext&___ptr64,float&&___ptr64,float_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ad00

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TBox<double>,UE::Math::TBox<double>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TBox<double>,UE::Math::TBox<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TBox<double>&&___ptr64,UE::Math::TBox<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ad40

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UMaterial>,TObjectPtr<UMaterial>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UMaterial>,TObjectPtr<class_UMaterial>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UMaterial>&&___ptr64,TObjectPtr<class_UMaterial>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ad80

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TRotator<double>,UE::Math::TRotator<double>_>'::__l7::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TRotator<double>,UE::Math::TRotator<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TRotator<double>&&___ptr64,UE::Math::TRotator<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059adc0

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TSphere<double>,UE::Math::TSphere<double>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TSphere<double>,UE::Math::TSphere<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TSphere<double>&&___ptr64,UE::Math::TSphere<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ae00

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TTransform<double>,UE::Math::TTransform<double>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TTransform<double>,UE::Math::TTransform<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TTransform<double>&&___ptr64,UE::Math::TTransform<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ae40

bool __thiscall
`FDataflowNode::SetValue<FDataflowAllTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158216>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158216>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowAllTypes>(UE::Dataflow::FContext&___ptr64,UE::Dataflow::FContextValue&&___ptr64,FDataflowAllTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059ae80

bool __thiscall
`FDataflowNode::SetValue<FDataflowArrayTypes>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158216>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158216>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowArrayTypes>(UE::Dataflow::FContext&___ptr64,UE::Dataflow::FContextValue&&___ptr64,FDataflowArrayTypes_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059aec0

bool __thiscall
`FDataflowNode::SetValue<FDataflowCurveSelection,FDataflowCurveSelection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowCurveSelection,FDataflowCurveSelection>(UE::Dataflow::FContext&___ptr64,FDataflowCurveSelection&&___ptr64,FDataflowCurveSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059af00

bool __thiscall
`FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>(UE::Dataflow::FContext&___ptr64,FDataflowFaceSelection&&___ptr64,FDataflowFaceSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059af40

bool __thiscall
`FDataflowNode::SetValue<FDataflowGeometrySelection,FDataflowGeometrySelection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowGeometrySelection,FDataflowGeometrySelection>(UE::Dataflow::FContext&___ptr64,FDataflowGeometrySelection&&___ptr64,FDataflowGeometrySelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059af80

bool __thiscall
`FDataflowNode::SetValue<FDataflowMaterialSelection,FDataflowMaterialSelection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowMaterialSelection,FDataflowMaterialSelection>(UE::Dataflow::FContext&___ptr64,FDataflowMaterialSelection&&___ptr64,FDataflowMaterialSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059afc0

bool __thiscall
`FDataflowNode::SetValue<FDataflowRootProxyMesh,FDataflowRootProxyMesh>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowRootProxyMesh,FDataflowRootProxyMesh>(UE::Dataflow::FContext&___ptr64,FDataflowRootProxyMesh&&___ptr64,FDataflowRootProxyMesh_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b000

bool __thiscall
`FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>(UE::Dataflow::FContext&___ptr64,FDataflowSphereCovering&&___ptr64,FDataflowSphereCovering_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b040

bool __thiscall
`FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>'::__l7::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>(UE::Dataflow::FContext&___ptr64,FDataflowTransformSelection&&___ptr64,FDataflowTransformSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b080

bool __thiscall
`FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>(UE::Dataflow::FContext&___ptr64,FDataflowVertexSelection&&___ptr64,FDataflowVertexSelection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b0c0

bool __thiscall
`FDataflowNode::
SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>'::
__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<float,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b100

bool __thiscall
`FDataflowNode::
SetValue<TArray<double,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>'::
__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<double,TSizedDefaultAllocator<32>_>,TArray<double,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<double,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<double,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b140

bool __thiscall
`FDataflowNode::
SetValue<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,TArray<struct_UE::Math::TBox<double>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_UE::Math::TBox<double>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b180

bool __thiscall
`FDataflowNode::
SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>,TArray<struct_TObjectPtr<class_UDynamicMesh>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_TObjectPtr<class_UDynamicMesh>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b1c0

bool __thiscall
`FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<struct_TObjectPtr<class_UMaterial>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_TObjectPtr<class_UMaterial>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b200

bool __thiscall
`FDataflowNode::
SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<struct_TObjectPtr<class_UMaterialInterface>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_TObjectPtr<class_UMaterialInterface>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b240

bool __thiscall
`FDataflowNode::
SetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<struct_UE::Math::TVector<float>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_UE::Math::TVector<float>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b280

bool __thiscall
`FDataflowNode::
SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<struct_UE::Math::TVector<double>,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_UE::Math::TVector<double>,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b2c0

bool __thiscall
`FDataflowNode::
SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<struct_FDataflowRootProxyMesh,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_FDataflowRootProxyMesh,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b300

bool __thiscall
`FDataflowNode::
SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<struct_FGeometryCollectionAutoInstanceMesh,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_FGeometryCollectionAutoInstanceMesh,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b340

bool __thiscall
`FDataflowNode::
SetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<struct_FLinearColor,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FLinearColor,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_FLinearColor,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b380

bool __thiscall
`FDataflowNode::
SetValue<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>,TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>,TArray<struct_FManagedArrayCollection,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<struct_FManagedArrayCollection,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b3c0

bool __thiscall
`FDataflowNode::
SetValue<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<class_FString,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<class_FString,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b400

bool __thiscall
`FDataflowNode::
SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l7
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<bool,TSizedDefaultAllocator<32>_>&&___ptr64,TArray<bool,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059b440

bool __thiscall `FDataflowNode::SetValue<FString,FString>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FString,FString>(UE::Dataflow::FContext&___ptr64,FString&&___ptr64,FString_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

