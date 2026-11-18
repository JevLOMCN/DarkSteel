// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 5

// FDrawPolygonStateChange @ 14cc1b8d0

FDrawPolygonStateChange * __thiscall
FDrawPolygonStateChange::FDrawPolygonStateChange
          (FDrawPolygonStateChange *this,int param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->FixedVertexPoints;
  this->bHaveDoneUndo = false;
  this->CurveTimestamp = param_1;
  this->_padding_ = (longlong)&___7FDrawPolygonStateChange__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->FixedVertexPoints).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->FixedVertexPoints).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x18);
  }
  pTVar1 = &this->PolyPoints;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PolyPoints).ArrayMax;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  (this->PolyPoints).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x18);
  }
  return this;
}

// Apply @ 14cc34460

void __thiscall FDrawPolygonStateChange::Apply(FDrawPolygonStateChange *this,UObject *param_1)

{
  return;
}

// HasExpired @ 14cc5eaf0

bool __thiscall FDrawPolygonStateChange::HasExpired(FDrawPolygonStateChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (this->bHaveDoneUndo != false) {
    return true;
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDrawPolygonTool::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cc5eb30;
  }
  param_1 = (UObject *)0x0;
LAB_14cc5eb30:
  if (*(int *)&param_1[0x24].field_0x10 != this->CurveTimestamp) {
    return true;
  }
  return false;
}

// Revert @ 14cc74370

void __thiscall FDrawPolygonStateChange::Revert(FDrawPolygonStateChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDrawPolygonTool::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cc743aa;
  }
  param_1 = (UObject *)0x0;
LAB_14cc743aa:
  if (param_1[0x23].field_0x10 != '\0') {
    UPreviewMesh::ClearPreview(*(UPreviewMesh **)(param_1 + 10));
    UPreviewMesh::SetVisible(*(UPreviewMesh **)(param_1 + 10),false);
    param_1[0x23].field_0x10 = 0;
  }
  (**(code **)(*(longlong *)param_1 + 0x3d8))(param_1,&this->FixedVertexPoints,&this->PolyPoints);
  this->bHaveDoneUndo = true;
  return;
}

// ToString @ 14cc82a90

FString * __thiscall
FDrawPolygonStateChange::ToString(FDrawPolygonStateChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDrawPolygonStateChange");
  return __return_storage_ptr__;
}

