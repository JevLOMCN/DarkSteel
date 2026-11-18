// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 6

// FContextCacheElementUStruct<UE::Math::TTransform<double>_&> @ 14dac6260

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<UE::Math::TTransform<double>_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TTransform<double> *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  double *pdVar7;
  FContextCacheElementUStruct *pFVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  pUVar6 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    pdVar7 = (double *)(this->InstancedStruct).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar6->_padding_ + 4);
    uVar9 = (int)pUVar6->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    pdVar7 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar6;
    (this->InstancedStruct).StructMemory = (uchar *)pdVar7;
  }
  if (pdVar7 == (double *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar8;
    }
  }
  dVar4 = (param_3->Rotation).XY.m128d_f64[1];
  *pdVar7 = (param_3->Rotation).XY.m128d_f64[0];
  pdVar7[1] = dVar4;
  dVar4 = (param_3->Rotation).ZW.m128d_f64[1];
  pdVar7[2] = (param_3->Rotation).ZW.m128d_f64[0];
  pdVar7[3] = dVar4;
  dVar4 = (param_3->Translation).XY.m128d_f64[1];
  pdVar7[4] = (param_3->Translation).XY.m128d_f64[0];
  pdVar7[5] = dVar4;
  dVar4 = (param_3->Translation).ZW.m128d_f64[1];
  pdVar7[6] = (param_3->Translation).ZW.m128d_f64[0];
  pdVar7[7] = dVar4;
  dVar4 = (param_3->Scale3D).XY.m128d_f64[1];
  pdVar7[8] = (param_3->Scale3D).XY.m128d_f64[0];
  pdVar7[9] = dVar4;
  dVar4 = (param_3->Scale3D).ZW.m128d_f64[1];
  pdVar7[10] = (param_3->Scale3D).ZW.m128d_f64[0];
  pdVar7[0xb] = dVar4;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TTransform<double>_const_&> @ 14dac63c0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<UE::Math::TTransform<double>_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TTransform<double> *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  double *pdVar7;
  FContextCacheElementUStruct *pFVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  pUVar6 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    pdVar7 = (double *)(this->InstancedStruct).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar6->_padding_ + 4);
    uVar9 = (int)pUVar6->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    pdVar7 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar6;
    (this->InstancedStruct).StructMemory = (uchar *)pdVar7;
  }
  if (pdVar7 == (double *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar8;
    }
  }
  dVar4 = (param_3->Rotation).XY.m128d_f64[1];
  *pdVar7 = (param_3->Rotation).XY.m128d_f64[0];
  pdVar7[1] = dVar4;
  dVar4 = (param_3->Rotation).ZW.m128d_f64[1];
  pdVar7[2] = (param_3->Rotation).ZW.m128d_f64[0];
  pdVar7[3] = dVar4;
  dVar4 = (param_3->Translation).XY.m128d_f64[1];
  pdVar7[4] = (param_3->Translation).XY.m128d_f64[0];
  pdVar7[5] = dVar4;
  dVar4 = (param_3->Translation).ZW.m128d_f64[1];
  pdVar7[6] = (param_3->Translation).ZW.m128d_f64[0];
  pdVar7[7] = dVar4;
  dVar4 = (param_3->Scale3D).XY.m128d_f64[1];
  pdVar7[8] = (param_3->Scale3D).XY.m128d_f64[0];
  pdVar7[9] = dVar4;
  dVar4 = (param_3->Scale3D).ZW.m128d_f64[1];
  pdVar7[10] = (param_3->Scale3D).ZW.m128d_f64[0];
  pdVar7[0xb] = dVar4;
  return this;
}

// FContextCacheElementUStruct<FCollectionAttributeKey_const_&> @ 14dac6520

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FCollectionAttributeKey_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FCollectionAttributeKey *param_3,uint param_4,FTimestamp param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FString *this_00;
  FContextCacheElementUStruct *pFVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  pUVar6 = FCollectionAttributeKey::StaticStruct();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FString *)(this->InstancedStruct).StructMemory;
    pFVar1 = this_00[1].Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar9 = (uint)*(short *)((longlong)&pUVar6->_padding_ + 4);
    uVar8 = (int)pUVar6->_padding_ + -1 + uVar9 & -uVar9;
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    this_00 = FMemory::Malloc((longlong)(int)uVar8,uVar9);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar6;
    (this->InstancedStruct).StructMemory = (uchar *)this_00;
  }
  if (this_00 == (FString *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FContextCacheElementUStruct *)(*pcVar2)();
      return pFVar7;
    }
  }
  ::FString::FString(this_00,&param_3->Attribute);
  ::FString::FString(this_00 + 1,&param_3->Group);
  return this;
}

// FContextCacheElementUStruct<FDataflowGeometrySelection_const_&> @ 14dac6690

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowGeometrySelection_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowGeometrySelection *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FDataflowGeometrySelection *this_00;
  FContextCacheElementUStruct *pFVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  pUVar5 = FDataflowGeometrySelection::StaticStruct();
  if (pUVar5 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowGeometrySelection *)(this->InstancedStruct).StructMemory;
    if (*(void **)&this_00->field_0x18 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x18);
    }
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar8 = (uint)*(short *)((longlong)&pUVar5->_padding_ + 4);
    uVar7 = (int)pUVar5->_padding_ + -1 + uVar8 & -uVar8;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    this_00 = FMemory::Malloc((longlong)(int)uVar7,uVar8);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar5;
    (this->InstancedStruct).StructMemory = (uchar *)this_00;
  }
  if (this_00 == (FDataflowGeometrySelection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar6;
    }
  }
  FDataflowGeometrySelection::FDataflowGeometrySelection(this_00,param_3);
  return this;
}

// FContextCacheElementUStruct<FCollectionAttributeKey> @ 14dac67e0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FCollectionAttributeKey>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FCollectionAttributeKey *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  uchar *puVar6;
  FContextCacheElementUStruct *pFVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  pUVar5 = FCollectionAttributeKey::StaticStruct();
  if (pUVar5 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar6 = (this->InstancedStruct).StructMemory;
    if (*(void **)(puVar6 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar6 + 0x10));
    }
    if (*(void **)puVar6 != (void *)0x0) {
      FMemory::Free(*(void **)puVar6);
    }
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar9 = (uint)*(short *)((longlong)&pUVar5->_padding_ + 4);
    uVar8 = (int)pUVar5->_padding_ + -1 + uVar9 & -uVar9;
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    puVar6 = FMemory::Malloc((longlong)(int)uVar8,uVar9);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar5;
    (this->InstancedStruct).StructMemory = puVar6;
  }
  if (puVar6 == (uchar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar7;
    }
  }
  puVar6[0] = '\0';
  puVar6[1] = '\0';
  puVar6[2] = '\0';
  puVar6[3] = '\0';
  puVar6[4] = '\0';
  puVar6[5] = '\0';
  puVar6[6] = '\0';
  puVar6[7] = '\0';
  *(FScriptContainerElement **)puVar6 = (param_3->Attribute).Data.AllocatorInstance.Data;
  (param_3->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar6 + 8) = (param_3->Attribute).Data.ArrayNum;
  *(int *)(puVar6 + 0xc) = (param_3->Attribute).Data.ArrayMax;
  (param_3->Attribute).Data.ArrayNum = 0;
  (param_3->Attribute).Data.ArrayMax = 0;
  puVar6[0x10] = '\0';
  puVar6[0x11] = '\0';
  puVar6[0x12] = '\0';
  puVar6[0x13] = '\0';
  puVar6[0x14] = '\0';
  puVar6[0x15] = '\0';
  puVar6[0x16] = '\0';
  puVar6[0x17] = '\0';
  *(FScriptContainerElement **)(puVar6 + 0x10) = (param_3->Group).Data.AllocatorInstance.Data;
  (param_3->Group).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar6 + 0x18) = (param_3->Group).Data.ArrayNum;
  *(int *)(puVar6 + 0x1c) = (param_3->Group).Data.ArrayMax;
  (param_3->Group).Data.ArrayNum = 0;
  (param_3->Group).Data.ArrayMax = 0;
  return this;
}

// FContextCacheElementUStruct<FManagedArrayCollection> @ 14dac6970

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FManagedArrayCollection>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FManagedArrayCollection *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FManagedArrayCollection *this_00;
  FContextCacheElementUStruct *pFVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  pUVar5 = FManagedArrayCollection::StaticStruct();
  if (pUVar5 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FManagedArrayCollection *)(this->InstancedStruct).StructMemory;
    (**(code **)this_00->_padding_)(this_00,0);
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar8 = (uint)*(short *)((longlong)&pUVar5->_padding_ + 4);
    uVar7 = (int)pUVar5->_padding_ + -1 + uVar8 & -uVar8;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    this_00 = FMemory::Malloc((longlong)(int)uVar7,uVar8);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar5;
    (this->InstancedStruct).StructMemory = (uchar *)this_00;
  }
  if (this_00 == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar6;
    }
  }
  FManagedArrayCollection::FManagedArrayCollection(this_00,param_3);
  return this;
}

