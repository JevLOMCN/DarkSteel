// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 30

// FContextCacheElementUStruct<FDataflowImage_const_&> @ 144403aa0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowImage_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowImage *param_3,uint param_4,FTimestamp param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowImage *this_00;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImage,(UObject *)pUVar7,L"DataflowImage"
                        );
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowImage *)(this->InstancedStruct).StructMemory;
    pFVar1 = (this_00->Image).RawData.AllocatorInstance.Data;
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
  if (this_00 == (FDataflowImage *)0x0) {
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
  FDataflowImage::FDataflowImage(this_00,param_3);
  return this;
}

// FContextCacheElementUStruct<FLinearColor_const_&> @ 144403c20

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FLinearColor_const_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,FLinearColor *param_3
          ,uint param_4,FTimestamp param_5)

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
  pUVar5 = TBaseStructure<FLinearColor>::Get();
  if (pUVar5 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar6 = (this->InstancedStruct).StructMemory;
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
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)puVar6 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)(puVar6 + 8) = uVar2;
  return this;
}

// FContextCacheElementUStruct<FManagedArrayCollection_const_&> @ 144403d60

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<FManagedArrayCollection_const_&>
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

// FContextCacheElementUStruct<UE::Math::TIntPoint<int>_> @ 144403eb0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TIntPoint<int>_>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TIntPoint<int> *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  TIntPoint<int>_u_0 *pTVar6;
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
  pUVar5 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
  if (pUVar5 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    pTVar6 = (TIntPoint<int>_u_0 *)(this->InstancedStruct).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar9 = (uint)*(short *)((longlong)&pUVar5->_padding_ + 4);
    uVar8 = (int)pUVar5->_padding_ + -1 + uVar9 & -uVar9;
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    pTVar6 = FMemory::Malloc((longlong)(int)uVar8,uVar9);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar5;
    (this->InstancedStruct).StructMemory = (uchar *)pTVar6;
  }
  if (pTVar6 == (TIntPoint<int>_u_0 *)0x0) {
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
  pTVar6->_s_0 = (TIntPoint<int>_u_0_s_0)param_3->field0_0x0;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TIntVector3<int>_> @ 144403ff0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TIntVector3<int>_>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TIntVector3<int> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar5 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
  if (pUVar5 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar6 = (this->InstancedStruct).StructMemory;
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
  *(undefined8 *)puVar6 = *(undefined8 *)&param_3->field0_0x0;
  *(int *)(puVar6 + 8) = (param_3->field0_0x0)._s_0.Z;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TIntVector4<int>_> @ 144404130

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TIntVector4<int>_>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TIntVector4<int> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar5 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
  if (pUVar5 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar6 = (this->InstancedStruct).StructMemory;
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
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)puVar6 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)(puVar6 + 8) = uVar2;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TQuat<double>_> @ 144404270

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TQuat<double>_>
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

// FContextCacheElementUStruct<UE::Math::TRotator<double>_> @ 1444043b0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TRotator<double>_>
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

// FContextCacheElementUStruct<UE::Math::TTransform<double>_> @ 1444044f0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::
FContextCacheElementUStruct<UE::Math::TTransform<double>_>
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

// FContextCacheElementUStruct<UE::Math::TVector2<double>_> @ 144404650

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TVector2<double>_>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TVector2<double> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar6 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
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
  return this;
}

// FContextCacheElementUStruct<UE::Math::TVector4<double>_> @ 144404790

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TVector4<double>_>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          TVector4<double> *param_3,uint param_4,FTimestamp param_5)

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
  pUVar6 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
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
  dVar4 = (param_3->field0_0x0)._s_0.W;
  pdVar7[2] = (param_3->field0_0x0)._s_0.Z;
  pdVar7[3] = dVar4;
  return this;
}

// FContextCacheElementUStruct<UE::Math::TVector<double>_> @ 1444048d0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TVector<double>_>
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

// FContextCacheElementUStruct<FDataflowCurveSelection> @ 144404a10

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowCurveSelection>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowCurveSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowSelection *this_00;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCurveSelection,(UObject *)pUVar7,
                         L"DataflowCurveSelection");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowFaceSelection> @ 144404b90

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowFaceSelection>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowFaceSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowSelection *this_00;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowFaceSelection,(UObject *)pUVar7,
                         L"DataflowFaceSelection");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowGeometrySelection> @ 144404d10

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowGeometrySelection>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowGeometrySelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowSelection *this_00;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGeometrySelection,(UObject *)pUVar7,
                         L"DataflowGeometrySelection");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowImage> @ 144404e90

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowImage>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowImage *param_3,uint param_4,FTimestamp param_5)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  UPackage *pUVar8;
  longlong *plVar9;
  FContextCacheElementUStruct *pFVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uStack_22;
  
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
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImage,(UObject *)pUVar8,L"DataflowImage"
                        );
  }
  pUVar6 = Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    plVar9 = (longlong *)(this->InstancedStruct).StructMemory;
    if ((void *)plVar9[2] != (void *)0x0) {
      FMemory::Free((void *)plVar9[2]);
    }
  }
  else {
    FInstancedStruct::Reset(&this->InstancedStruct);
    uVar12 = (uint)*(short *)((longlong)&pUVar6->_padding_ + 4);
    uVar11 = (int)pUVar6->_padding_ + -1 + uVar12 & -uVar12;
    if ((int)uVar11 < 1) {
      uVar11 = 1;
    }
    plVar9 = FMemory::Malloc((longlong)(int)uVar11,uVar12);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar6;
    (this->InstancedStruct).StructMemory = (uchar *)plVar9;
  }
  if (plVar9 == (longlong *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FContextCacheElementUStruct *)(*pcVar1)();
      return pFVar10;
    }
  }
  lVar5 = (param_3->Image)._padding_;
  *plVar9 = (param_3->Image)._padding_;
  plVar9[1] = lVar5;
  plVar9[2] = 0;
  plVar9[2] = (longlong)(param_3->Image).RawData.AllocatorInstance.Data;
  (param_3->Image).RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  plVar9[3] = (param_3->Image).RawData.ArrayNum;
  plVar9[4] = (param_3->Image).RawData.ArrayMax;
  (param_3->Image).RawData.ArrayNum = 0;
  (param_3->Image).RawData.ArrayMax = 0;
  pFVar2 = (param_3->Image).RawData.AllocatorInstance.Data;
  (param_3->Image).RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_3->Image).RawData.ArrayNum = 0;
  (param_3->Image).RawData.ArrayMax = 0;
  (param_3->Image)._padding_ = 0;
  (param_3->Image)._padding_ = CONCAT26(uStack_22,0x20100000000);
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// FContextCacheElementUStruct<FDataflowMaterialSelection> @ 144405070

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowMaterialSelection>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowMaterialSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowSelection *this_00;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMaterialSelection,(UObject *)pUVar7,
                         L"DataflowMaterialSelection");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowTransformSelection> @ 1444052f0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowTransformSelection>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowTransformSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowSelection *this_00;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTransformSelection,(UObject *)pUVar7,
                         L"DataflowTransformSelection");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FDataflowVertexSelection> @ 144405470

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowVertexSelection>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowVertexSelection *param_3,uint param_4,FTimestamp param_5)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  UPackage *pUVar7;
  FDataflowSelection *this_00;
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
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVertexSelection,(UObject *)pUVar7,
                         L"DataflowVertexSelection");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.OuterSingleton ==
      (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FDataflowSelection *)(this->InstancedStruct).StructMemory;
    FVar1 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
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
  if (this_00 == (FDataflowSelection *)0x0) {
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
  FDataflowSelection::FDataflowSelection(this_00,(FDataflowSelection *)param_3);
  return this;
}

// FContextCacheElementUStruct<FLinearColor> @ 1444055f0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FLinearColor>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,FLinearColor *param_3
          ,uint param_4,FTimestamp param_5)

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
  pUVar5 = TBaseStructure<FLinearColor>::Get();
  if (pUVar5 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    puVar6 = (this->InstancedStruct).StructMemory;
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
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)puVar6 = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)(puVar6 + 8) = uVar2;
  return this;
}

// FContextCacheElementUStruct @ 144429d00

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct
          (FContextCacheElementUStruct *this,FContextCacheElementUStruct *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(int *)&this->_padding_ = (int)lVar4;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->InstancedStruct).StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (&this->InstancedStruct,(param_1->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
             (param_1->InstancedStruct).StructMemory);
  return this;
}

// FContextCacheElementUStruct @ 144429db0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FConstStructView *param_3,uint param_4,FTimestamp param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FConstStructView local_18;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 5;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  local_18.ScriptStruct = param_3->ScriptStruct;
  local_18.StructMemory = param_3->StructMemory;
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct,&local_18);
  return this;
}

// AddReferencedObjects @ 144437240

void __thiscall
UE::Dataflow::FContextCacheElementUStruct::AddReferencedObjects
          (FContextCacheElementUStruct *this,FReferenceCollector *param_1)

{
  FInstancedStruct::AddStructReferencedObjects((FInstancedStruct *)&this->_padding_,param_1);
  return;
}

// Clone @ 14443bb40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementUStruct::Clone
          (FContextCacheElementUStruct *this,IContextCacheStore *param_1)

{
  FContextCacheElementUStruct *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (FContextCacheElementUStruct *)0x0) {
    IVar1 = (IContextCacheStore)FContextCacheElementUStruct(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440fb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementUStruct::CreateArrayFromElement
          (FContextCacheElementUStruct *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  
  TVar1 = (this->InstancedStruct).ScriptStruct.field0_0x0;
  puVar2 = (this->InstancedStruct).StructMemory;
  IVar6 = (IContextCacheStore)::operator_new(0x60);
  if (IVar6 == (IContextCacheStore)0x0) {
    *param_1 = (IContextCacheStore)0x0;
  }
  else {
    uVar3 = *in_stack_00000038;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar6 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar6 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar6 + 8) = 6;
    *(undefined8 *)((longlong)IVar6 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar6 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar6 + 0x30) = uVar3;
    *(undefined ***)((longlong)IVar6 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar6 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar6 + 0x38));
    *(undefined ***)IVar6 =
         &FContextCacheElementUStructArray::_vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar6 + 0x38) =
         &FContextCacheElementUStructArray::_vftable__for__FGCObject__;
    ((FInstancedStructArray *)((longlong)IVar6 + 0x48))->_padding_ = 0;
    *(undefined8 *)((longlong)IVar6 + 0x50) = 0;
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)((longlong)IVar6 + 0x58) = TVar1;
    FContextCacheElementUStructArray::FInstancedStructArray::InitFromRawData
              ((FInstancedStructArray *)((longlong)IVar6 + 0x48),puVar2,1);
    *param_1 = IVar6;
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443f00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementUStruct::CreateFromArrayElement
          (FContextCacheElementUStruct *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14444c710

int __thiscall
UE::Dataflow::FContextCacheElementUStruct::GetNumArrayElements
          (FContextCacheElementUStruct *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetReferencerName @ 14444dfc0

FString * __thiscall
UE::Dataflow::FContextCacheElementUStruct::GetReferencerName
          (FContextCacheElementUStruct *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FContextCacheElementUStruct");
  return __return_storage_ptr__;
}

// GetUntypedData @ 14444ec30

void * __thiscall
UE::Dataflow::FContextCacheElementUStruct::GetUntypedData
          (FContextCacheElementUStruct *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->InstancedStruct).StructMemory;
}

// IsArray @ 144451380

bool __thiscall
UE::Dataflow::FContextCacheElementUStruct::IsArray
          (FContextCacheElementUStruct *this,IContextCacheStore *param_1)

{
  return false;
}

