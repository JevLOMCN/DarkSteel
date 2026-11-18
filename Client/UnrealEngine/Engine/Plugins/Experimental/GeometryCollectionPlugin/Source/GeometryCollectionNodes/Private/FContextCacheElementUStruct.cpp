// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 20

// FContextCacheElementUStruct<FManagedArrayCollection_const_> @ 14e8f1610

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FManagedArrayCollection_const_>
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

// FContextCacheElementUStruct<UE::Math::TVector<double>_&> @ 14e8f1760

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TVector<double>_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TVector<double> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar6 = TBaseStructure<UE::Math::TVector<double>_>::Get();
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
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  *pdVar7 = (param_3->field0_0x0)._s_0.X;
  pdVar7[1] = dVar4;
  pdVar7[2] = (param_3->field0_0x0)._s_0.Z;
  return this;
}

// FContextCacheElementUStruct<FDataflowConvexDecompositionSettings_&> @ 14e8f18a0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowConvexDecompositionSettings_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowConvexDecompositionSettings *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  uchar *puVar7;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings,
                         (UObject *)pUVar6,L"DataflowConvexDecompositionSettings");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar7 = (this->InstancedStruct).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar9 = (int)pUVar4->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    puVar7 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar4;
    (this->InstancedStruct).StructMemory = puVar7;
  }
  if (puVar7 == (uchar *)0x0) {
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
  uVar2 = *(undefined8 *)&param_3->ErrorTolerance;
  *(undefined8 *)puVar7 = *(undefined8 *)param_3;
  *(undefined8 *)(puVar7 + 8) = uVar2;
  uVar2 = *(undefined8 *)&param_3->bProtectNegativeSpace;
  *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)&param_3->MinThicknessTolerance;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  *(float *)(puVar7 + 0x20) = param_3->NegativeSpaceMinRadius;
  return this;
}

// FContextCacheElementUStruct<FDataflowFaceSelection_&> @ 14e8f1a10

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowFaceSelection_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowFaceSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FDataflowSelection *this_00;
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
  pUVar6 = FDataflowFaceSelection::StaticStruct();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowTransformSelection_&> @ 14e8f1b60

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowTransformSelection_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowTransformSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FDataflowSelection *this_00;
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
  pUVar6 = FDataflowTransformSelection::StaticStruct();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FManagedArrayCollection_&> @ 14e8f1cb0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FManagedArrayCollection_&>
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

// FContextCacheElementUStruct<UE::Math::TPlane<double>_const_&> @ 14e8f1fe0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<UE::Math::TPlane<double>_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TPlane<double> *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  longlong *plVar8;
  FContextCacheElementUStruct *pFVar9;
  uint uVar10;
  uint uVar11;
  
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
  pUVar7 = TBaseStructure<UE::Math::TPlane<double>_>::Get();
  if (pUVar7 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    plVar8 = (longlong *)(this->InstancedStruct).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar11 = (uint)*(short *)((longlong)&pUVar7->_padding_ + 4);
    uVar10 = (int)pUVar7->_padding_ + -1 + uVar11 & -uVar11;
    if ((int)uVar10 < 1) {
      uVar10 = 1;
    }
    plVar8 = FMemory::Malloc((longlong)(int)uVar10,uVar11);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar7;
    (this->InstancedStruct).StructMemory = (uchar *)plVar8;
  }
  if (plVar8 == (longlong *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar9;
    }
  }
  lVar4 = param_3->_padding_;
  *plVar8 = param_3->_padding_;
  plVar8[1] = lVar4;
  dVar5 = param_3->W;
  plVar8[2] = param_3->_padding_;
  plVar8[3] = (longlong)dVar5;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TQuat<double>_const_&> @ 14e8f2120

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<UE::Math::TQuat<double>_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TQuat<double> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar6 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
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
  dVar4 = param_3->Y;
  *pdVar7 = param_3->X;
  pdVar7[1] = dVar4;
  dVar4 = param_3->W;
  pdVar7[2] = param_3->Z;
  pdVar7[3] = dVar4;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TRotator<double>_const_&> @ 14e8f2260

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<UE::Math::TRotator<double>_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TRotator<double> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar6 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
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
  dVar4 = param_3->Yaw;
  *pdVar7 = param_3->Pitch;
  pdVar7[1] = dVar4;
  pdVar7[2] = param_3->Roll;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TSphere<double>_const_&> @ 14e8f23a0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<UE::Math::TSphere<double>_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TSphere<double> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar6 = TBaseStructure<UE::Math::TSphere<double>_>::Get();
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
  dVar4 = (param_3->Center).field0_0x0._s_0.Y;
  *pdVar7 = (param_3->Center).field0_0x0._s_0.X;
  pdVar7[1] = dVar4;
  dVar4 = param_3->W;
  pdVar7[2] = (param_3->Center).field0_0x0._s_0.Z;
  pdVar7[3] = dVar4;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TVector<double>_const_&> @ 14e8f24e0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<UE::Math::TVector<double>_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TVector<double> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar6 = TBaseStructure<UE::Math::TVector<double>_>::Get();
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
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  *pdVar7 = (param_3->field0_0x0)._s_0.X;
  pdVar7[1] = dVar4;
  pdVar7[2] = (param_3->field0_0x0)._s_0.Z;
  return this;
}

// FContextCacheElementUStruct<FDataflowConvexDecompositionSettings_const_&> @ 14e8f2620

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowConvexDecompositionSettings_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowConvexDecompositionSettings *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  uchar *puVar7;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings,
                         (UObject *)pUVar6,L"DataflowConvexDecompositionSettings");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar7 = (this->InstancedStruct).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar9 = (int)pUVar4->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    puVar7 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar4;
    (this->InstancedStruct).StructMemory = puVar7;
  }
  if (puVar7 == (uchar *)0x0) {
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
  uVar2 = *(undefined8 *)&param_3->ErrorTolerance;
  *(undefined8 *)puVar7 = *(undefined8 *)param_3;
  *(undefined8 *)(puVar7 + 8) = uVar2;
  uVar2 = *(undefined8 *)&param_3->bProtectNegativeSpace;
  *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)&param_3->MinThicknessTolerance;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  *(float *)(puVar7 + 0x20) = param_3->NegativeSpaceMinRadius;
  return this;
}

// FContextCacheElementUStruct<FDataflowFaceSelection_const_&> @ 14e8f2790

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowFaceSelection_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowFaceSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FDataflowSelection *this_00;
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
  pUVar6 = FDataflowFaceSelection::StaticStruct();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowRootProxyMesh_const_&> @ 14e8f28e0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowRootProxyMesh_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowRootProxyMesh *param_3,uint param_4,FTimestamp param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowRootProxyMesh *this_00;
  FContextCacheElementUStruct *pFVar8;
  uint uVar9;
  uint uVar10;
  
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
  if (Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowRootProxyMesh,(UObject *)pUVar7,
                         L"DataflowRootProxyMesh");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowRootProxyMesh *)(this->InstancedStruct).StructMemory;
    pFVar1 = (this_00->OverrideMaterials).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar5->_padding_ + 4);
    uVar9 = (int)pUVar5->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    this_00 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar5;
    (this->InstancedStruct).StructMemory = (uchar *)this_00;
  }
  if (this_00 == (FDataflowRootProxyMesh *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FContextCacheElementUStruct *)(*pcVar2)();
      return pFVar8;
    }
  }
  FDataflowRootProxyMesh::FDataflowRootProxyMesh(this_00,param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowSphereCovering_const_&> @ 14e8f2a60

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowSphereCovering_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowSphereCovering *param_3,uint param_4,FTimestamp param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowSphereCovering *this_00;
  FContextCacheElementUStruct *pFVar8;
  uint uVar9;
  uint uVar10;
  
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
  if (Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSphereCovering,(UObject *)pUVar7,
                         L"DataflowSphereCovering");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSphereCovering *)(this->InstancedStruct).StructMemory;
    pFVar1 = (this_00->Spheres).Radius.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this_00->Spheres).Position.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar5->_padding_ + 4);
    uVar9 = (int)pUVar5->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    this_00 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar5;
    (this->InstancedStruct).StructMemory = (uchar *)this_00;
  }
  if (this_00 == (FDataflowSphereCovering *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FContextCacheElementUStruct *)(*pcVar2)();
      return pFVar8;
    }
  }
  FDataflowSphereCovering::FDataflowSphereCovering(this_00,param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowTransformSelection_const_&> @ 14e8f2be0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowTransformSelection_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowTransformSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FDataflowSelection *this_00;
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
  pUVar6 = FDataflowTransformSelection::StaticStruct();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowVertexSelection_const_&> @ 14e8f2d30

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FDataflowVertexSelection_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowVertexSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FDataflowSelection *this_00;
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
  pUVar6 = FDataflowVertexSelection::StaticStruct();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<UE::Math::TSphere<double>_> @ 14e8f3150

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TSphere<double>_>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TSphere<double> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar6 = TBaseStructure<UE::Math::TSphere<double>_>::Get();
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
  dVar4 = (param_3->Center).field0_0x0._s_0.Y;
  *pdVar7 = (param_3->Center).field0_0x0._s_0.X;
  pdVar7[1] = dVar4;
  dVar4 = param_3->W;
  pdVar7[2] = (param_3->Center).field0_0x0._s_0.Z;
  pdVar7[3] = dVar4;
  return this;
}

// FContextCacheElementUStruct<FDataflowRootProxyMesh> @ 14e8f3290

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowRootProxyMesh>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowRootProxyMesh *param_3,uint param_4,FTimestamp param_5)

{
  UStaticMesh *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  UPackage *pUVar8;
  uchar *puVar9;
  FContextCacheElementUStruct *pFVar10;
  uint uVar11;
  uint uVar12;
  
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
  if (Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowRootProxyMesh,(UObject *)pUVar8,
                         L"DataflowRootProxyMesh");
  }
  pUVar6 = Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar9 = (this->InstancedStruct).StructMemory;
    if (*(void **)(puVar9 + 0x70) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar9 + 0x70));
    }
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar12 = (uint)*(short *)((longlong)&pUVar6->_padding_ + 4);
    uVar11 = (int)pUVar6->_padding_ + -1 + uVar12 & -uVar12;
    if ((int)uVar11 < 1) {
      uVar11 = 1;
    }
    puVar9 = FMemory::Malloc((longlong)(int)uVar11,uVar12);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar6;
    (this->InstancedStruct).StructMemory = puVar9;
  }
  if (puVar9 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FContextCacheElementUStruct *)(*pcVar2)();
      return pFVar10;
    }
  }
  pUVar1 = (param_3->Mesh).field0_0x0.DebugPtr;
  *(UStaticMesh **)puVar9 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  dVar5 = (param_3->Transform).Rotation.XY.m128d_f64[1];
  *(double *)(puVar9 + 0x10) = (param_3->Transform).Rotation.XY.m128d_f64[0];
  *(double *)(puVar9 + 0x18) = dVar5;
  dVar5 = (param_3->Transform).Rotation.ZW.m128d_f64[1];
  *(double *)(puVar9 + 0x20) = (param_3->Transform).Rotation.ZW.m128d_f64[0];
  *(double *)(puVar9 + 0x28) = dVar5;
  dVar5 = (param_3->Transform).Translation.XY.m128d_f64[1];
  *(double *)(puVar9 + 0x30) = (param_3->Transform).Translation.XY.m128d_f64[0];
  *(double *)(puVar9 + 0x38) = dVar5;
  dVar5 = (param_3->Transform).Translation.ZW.m128d_f64[1];
  *(double *)(puVar9 + 0x40) = (param_3->Transform).Translation.ZW.m128d_f64[0];
  *(double *)(puVar9 + 0x48) = dVar5;
  dVar5 = (param_3->Transform).Scale3D.XY.m128d_f64[1];
  *(double *)(puVar9 + 0x50) = (param_3->Transform).Scale3D.XY.m128d_f64[0];
  *(double *)(puVar9 + 0x58) = dVar5;
  dVar5 = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
  *(double *)(puVar9 + 0x60) = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
  *(double *)(puVar9 + 0x68) = dVar5;
  puVar9[0x70] = '\0';
  puVar9[0x71] = '\0';
  puVar9[0x72] = '\0';
  puVar9[0x73] = '\0';
  puVar9[0x74] = '\0';
  puVar9[0x75] = '\0';
  puVar9[0x76] = '\0';
  puVar9[0x77] = '\0';
  *(FScriptContainerElement **)(puVar9 + 0x70) = (param_3->OverrideMaterials).AllocatorInstance.Data
  ;
  (param_3->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar9 + 0x78) = (param_3->OverrideMaterials).ArrayNum;
  *(int *)(puVar9 + 0x7c) = (param_3->OverrideMaterials).ArrayMax;
  (param_3->OverrideMaterials).ArrayNum = 0;
  (param_3->OverrideMaterials).ArrayMax = 0;
  return this;
}

// FContextCacheElementUStruct<FDataflowSphereCovering> @ 14e8f3470

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowSphereCovering>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowSphereCovering *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  uchar *puVar7;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSphereCovering,(UObject *)pUVar6,
                         L"DataflowSphereCovering");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar7 = (this->InstancedStruct).StructMemory;
    if (*(void **)(puVar7 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar7 + 0x10));
    }
    if (*(void **)puVar7 != (void *)0x0) {
      FMemory::Free(*(void **)puVar7);
    }
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar10 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar9 = (int)pUVar4->_padding_ + -1 + uVar10 & -uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    puVar7 = FMemory::Malloc((longlong)(int)uVar9,uVar10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar4;
    (this->InstancedStruct).StructMemory = puVar7;
  }
  if (puVar7 == (uchar *)0x0) {
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
  puVar7[0] = '\0';
  puVar7[1] = '\0';
  puVar7[2] = '\0';
  puVar7[3] = '\0';
  puVar7[4] = '\0';
  puVar7[5] = '\0';
  puVar7[6] = '\0';
  puVar7[7] = '\0';
  *(FScriptContainerElement **)puVar7 = (param_3->Spheres).Position.AllocatorInstance.Data;
  (param_3->Spheres).Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar7 + 8) = (param_3->Spheres).Position.ArrayNum;
  *(int *)(puVar7 + 0xc) = (param_3->Spheres).Position.ArrayMax;
  (param_3->Spheres).Position.ArrayNum = 0;
  (param_3->Spheres).Position.ArrayMax = 0;
  puVar7[0x10] = '\0';
  puVar7[0x11] = '\0';
  puVar7[0x12] = '\0';
  puVar7[0x13] = '\0';
  puVar7[0x14] = '\0';
  puVar7[0x15] = '\0';
  puVar7[0x16] = '\0';
  puVar7[0x17] = '\0';
  *(FScriptContainerElement **)(puVar7 + 0x10) = (param_3->Spheres).Radius.AllocatorInstance.Data;
  (param_3->Spheres).Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar7 + 0x18) = (param_3->Spheres).Radius.ArrayNum;
  *(int *)(puVar7 + 0x1c) = (param_3->Spheres).Radius.ArrayMax;
  (param_3->Spheres).Radius.ArrayNum = 0;
  (param_3->Spheres).Radius.ArrayMax = 0;
  return this;
}

