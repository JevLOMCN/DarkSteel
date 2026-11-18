// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f1f50

UScriptStruct * __cdecl FDS_ViewModelContext_IconInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_IconInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_IconInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_IconInfo,(UObject *)pUVar1,
                         L"DS_ViewModelContext_IconInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_IconInfo.OuterSingleton;
}

// operator= @ 14b5f7f30

FDS_ViewModelContext_IconInfo * __thiscall
FDS_ViewModelContext_IconInfo::operator=
          (FDS_ViewModelContext_IconInfo *this,FDS_ViewModelContext_IconInfo *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  
  pTVar1 = &this->MapIndexZoomStepArray;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  dVar5 = (param_1->SpawnGlobalPosition).field0_0x0._s_0.Y;
  (this->SpawnGlobalPosition).field0_0x0._s_0.X = (param_1->SpawnGlobalPosition).field0_0x0._s_0.X;
  (this->SpawnGlobalPosition).field0_0x0._s_0.Y = dVar5;
  this->MapIndexGroupID = param_1->MapIndexGroupID;
  this->MapIndexBaseID = param_1->MapIndexBaseID;
  this->MapType = param_1->MapType;
  this->ZOrder = param_1->ZOrder;
  this->OrthoWidth = param_1->OrthoWidth;
  this->TextureSize = param_1->TextureSize;
  this->HeightValue = param_1->HeightValue;
  this->Scale = param_1->Scale;
  this->IsShowHeight = param_1->IsShowHeight;
  this->CanvasSlot = param_1->CanvasSlot;
  if (pTVar1 != &param_1->MapIndexZoomStepArray) {
    iVar3 = (this->MapIndexZoomStepArray).ArrayMax;
    piVar2 = &(this->MapIndexZoomStepArray).ArrayMax;
    _Src = (param_1->MapIndexZoomStepArray).AllocatorInstance.Data;
    iVar4 = (param_1->MapIndexZoomStepArray).ArrayNum;
    (this->MapIndexZoomStepArray).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
      }
    }
  }
  return this;
}

