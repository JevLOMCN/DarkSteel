// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 12

// Apply @ 14ccde430

void __thiscall
TWrappedToolCommandChange<FMeshPolygroupChange>::Apply
          (TWrappedToolCommandChange<FMeshPolygroupChange> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshPolygroupChange *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(void **)&this->BeforeModify != (void *)0x0) {
    local_res8[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BeforeModify);
    plVar1 = *(longlong **)&(this->BeforeModify).field_0x28;
    pcVar2 = *(code **)&this->BeforeModify;
    plVar5 = (longlong *)&(this->BeforeModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  pFVar3 = (this->WrappedChange).Ptr;
  (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3,param_1);
  if (*(void **)&this->AfterModify != (void *)0x0) {
    local_res8[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AfterModify);
    plVar1 = *(longlong **)&(this->AfterModify).field_0x28;
    pcVar2 = *(code **)&this->AfterModify;
    plVar5 = (longlong *)&(this->AfterModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  return;
}

// Apply @ 14ccde4e0

void __thiscall
TWrappedToolCommandChange<FMeshRegionChangeBase>::Apply
          (TWrappedToolCommandChange<FMeshRegionChangeBase> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshRegionChangeBase *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(void **)&this->BeforeModify != (void *)0x0) {
    local_res8[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BeforeModify);
    plVar1 = *(longlong **)&(this->BeforeModify).field_0x28;
    pcVar2 = *(code **)&this->BeforeModify;
    plVar5 = (longlong *)&(this->BeforeModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  pFVar3 = (this->WrappedChange).Ptr;
  (**(code **)((longlong)*pFVar3 + 0x10))(pFVar3,param_1);
  if (*(void **)&this->AfterModify != (void *)0x0) {
    local_res8[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AfterModify);
    plVar1 = *(longlong **)&(this->AfterModify).field_0x28;
    pcVar2 = *(code **)&this->AfterModify;
    plVar5 = (longlong *)&(this->AfterModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  return;
}

// Apply @ 14ccde590

void __thiscall
TWrappedToolCommandChange<FMeshVertexChange>::Apply
          (TWrappedToolCommandChange<FMeshVertexChange> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshVertexChange *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(void **)&this->BeforeModify != (void *)0x0) {
    local_res8[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BeforeModify);
    plVar1 = *(longlong **)&(this->BeforeModify).field_0x28;
    pcVar2 = *(code **)&this->BeforeModify;
    plVar5 = (longlong *)&(this->BeforeModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  pFVar3 = (this->WrappedChange).Ptr;
  (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,param_1);
  if (*(void **)&this->AfterModify != (void *)0x0) {
    local_res8[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AfterModify);
    plVar1 = *(longlong **)&(this->AfterModify).field_0x28;
    pcVar2 = *(code **)&this->AfterModify;
    plVar5 = (longlong *)&(this->AfterModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  return;
}

// Apply @ 14ccde640

void __thiscall
TWrappedToolCommandChange<FMeshVertexColorPaintChange>::Apply
          (TWrappedToolCommandChange<FMeshVertexColorPaintChange> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshVertexColorPaintChange *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(void **)&this->BeforeModify != (void *)0x0) {
    local_res8[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BeforeModify);
    plVar1 = *(longlong **)&(this->BeforeModify).field_0x28;
    pcVar2 = *(code **)&this->BeforeModify;
    plVar5 = (longlong *)&(this->BeforeModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  pFVar3 = (this->WrappedChange).Ptr;
  (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3,param_1);
  if (*(void **)&this->AfterModify != (void *)0x0) {
    local_res8[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AfterModify);
    plVar1 = *(longlong **)&(this->AfterModify).field_0x28;
    pcVar2 = *(code **)&this->AfterModify;
    plVar5 = (longlong *)&(this->AfterModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  return;
}

// Revert @ 14cd1cb70

void __thiscall
TWrappedToolCommandChange<FMeshPolygroupChange>::Revert
          (TWrappedToolCommandChange<FMeshPolygroupChange> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshPolygroupChange *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(void **)&this->BeforeModify != (void *)0x0) {
    local_res8[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BeforeModify);
    plVar1 = *(longlong **)&(this->BeforeModify).field_0x28;
    pcVar2 = *(code **)&this->BeforeModify;
    plVar5 = (longlong *)&(this->BeforeModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  pFVar3 = (this->WrappedChange).Ptr;
  (**(code **)(*(longlong *)pFVar3 + 0x18))(pFVar3,param_1);
  if (*(void **)&this->AfterModify != (void *)0x0) {
    local_res8[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AfterModify);
    plVar1 = *(longlong **)&(this->AfterModify).field_0x28;
    pcVar2 = *(code **)&this->AfterModify;
    plVar5 = (longlong *)&(this->AfterModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  return;
}

// Revert @ 14cd1cc20

void __thiscall
TWrappedToolCommandChange<FMeshRegionChangeBase>::Revert
          (TWrappedToolCommandChange<FMeshRegionChangeBase> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshRegionChangeBase *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(void **)&this->BeforeModify != (void *)0x0) {
    local_res8[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BeforeModify);
    plVar1 = *(longlong **)&(this->BeforeModify).field_0x28;
    pcVar2 = *(code **)&this->BeforeModify;
    plVar5 = (longlong *)&(this->BeforeModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  pFVar3 = (this->WrappedChange).Ptr;
  (**(code **)((longlong)*pFVar3 + 0x18))(pFVar3,param_1);
  if (*(void **)&this->AfterModify != (void *)0x0) {
    local_res8[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AfterModify);
    plVar1 = *(longlong **)&(this->AfterModify).field_0x28;
    pcVar2 = *(code **)&this->AfterModify;
    plVar5 = (longlong *)&(this->AfterModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  return;
}

// Revert @ 14cd1ccd0

void __thiscall
TWrappedToolCommandChange<FMeshVertexChange>::Revert
          (TWrappedToolCommandChange<FMeshVertexChange> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshVertexChange *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(void **)&this->BeforeModify != (void *)0x0) {
    local_res8[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BeforeModify);
    plVar1 = *(longlong **)&(this->BeforeModify).field_0x28;
    pcVar2 = *(code **)&this->BeforeModify;
    plVar5 = (longlong *)&(this->BeforeModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  pFVar3 = (this->WrappedChange).Ptr;
  (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,param_1);
  if (*(void **)&this->AfterModify != (void *)0x0) {
    local_res8[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AfterModify);
    plVar1 = *(longlong **)&(this->AfterModify).field_0x28;
    pcVar2 = *(code **)&this->AfterModify;
    plVar5 = (longlong *)&(this->AfterModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  return;
}

// Revert @ 14cd1cd80

void __thiscall
TWrappedToolCommandChange<FMeshVertexColorPaintChange>::Revert
          (TWrappedToolCommandChange<FMeshVertexColorPaintChange> *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMeshVertexColorPaintChange *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(void **)&this->BeforeModify != (void *)0x0) {
    local_res8[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BeforeModify);
    plVar1 = *(longlong **)&(this->BeforeModify).field_0x28;
    pcVar2 = *(code **)&this->BeforeModify;
    plVar5 = (longlong *)&(this->BeforeModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  pFVar3 = (this->WrappedChange).Ptr;
  (**(code **)(*(longlong *)pFVar3 + 0x18))(pFVar3,param_1);
  if (*(void **)&this->AfterModify != (void *)0x0) {
    local_res8[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AfterModify);
    plVar1 = *(longlong **)&(this->AfterModify).field_0x28;
    pcVar2 = *(code **)&this->AfterModify;
    plVar5 = (longlong *)&(this->AfterModify).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,local_res8);
  }
  return;
}

// ToString @ 14cd30370

FString * __thiscall
TWrappedToolCommandChange<FMeshPolygroupChange>::ToString
          (TWrappedToolCommandChange<FMeshPolygroupChange> *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->WrappedChange).Ptr + 0x30))();
  return __return_storage_ptr__;
}

// ToString @ 14cd303a0

FString * __thiscall
TWrappedToolCommandChange<FMeshRegionChangeBase>::ToString
          (TWrappedToolCommandChange<FMeshRegionChangeBase> *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->WrappedChange).Ptr + 0x30))();
  return __return_storage_ptr__;
}

// ToString @ 14cd303d0

FString * __thiscall
TWrappedToolCommandChange<FMeshVertexChange>::ToString
          (TWrappedToolCommandChange<FMeshVertexChange> *this,FString *__return_storage_ptr__)

{
  (**(code **)(((this->WrappedChange).Ptr)->_padding_ + 0x30))();
  return __return_storage_ptr__;
}

// ToString @ 14cd30400

FString * __thiscall
TWrappedToolCommandChange<FMeshVertexColorPaintChange>::ToString
          (TWrappedToolCommandChange<FMeshVertexColorPaintChange> *this,
          FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->WrappedChange).Ptr + 0x30))();
  return __return_storage_ptr__;
}

