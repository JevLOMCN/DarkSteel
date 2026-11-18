// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// FContextCacheElementUStruct<FDataflowImage_&> @ 1462c6ff0

FContextCacheElementUStruct * __thiscall
UE::Dataflow::FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowImage_&>
          (FContextCacheElementUStruct *this,FGuid *param_1,FProperty *param_2,
          FDataflowImage *param_3,uint param_4,FTimestamp param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FImage *this_00;
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
  pUVar6 = FDataflowImage::StaticStruct();
  if (pUVar6 == (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr) {
    this_00 = (FImage *)(this->InstancedStruct).StructMemory;
    pFVar1 = (this_00->RawData).AllocatorInstance.Data;
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
  if (this_00 == (FImage *)0x0) {
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
  FImage::FImage(this_00,&param_3->Image);
  return this;
}

