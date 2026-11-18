// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// Init @ 148e73440

TObjectPtr<UObject> __thiscall
FNiagaraParameterDirectBinding<UObject_*>::Init
          (FNiagaraParameterDirectBinding<UObject_*> *this,FNiagaraParameterStore *param_1,
          FNiagaraVariable *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraTypeDefinition *pFVar3;
  UClass *pUVar4;
  TObjectPtr<UObject> TVar5;
  int *piVar6;
  UScriptStruct *pUVar7;
  int iVar8;
  longlong *in_R9;
  UObject *local_res20;
  
  if ((*in_R9 == 0) ||
     (pFVar3 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(in_R9 + 1)),
     (pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
    param_1->_padding_ = 0;
    return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
  }
  this->BoundStore = (FNiagaraParameterStore *)param_2;
  (this->BoundVariable)._padding_ = *in_R9;
  *(int *)&(this->BoundVariable)._padding_ = (int)in_R9[1];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->BoundVariable).VarData,
             (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(in_R9 + 2));
  this->LayoutVersion = this->BoundStore->LayoutVersion;
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     ((FNiagaraTypeDefinitionHandle *)&(this->BoundVariable)._padding_);
  pUVar7 = FNiagaraTypeDefinition::IntStruct;
  if (pFVar3->UnderlyingType != 3) {
    if ((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UStruct_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)pFVar3,pUVar4);
      if (bVar2) {
        pUVar7 = (UScriptStruct *)(pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr;
        goto LAB_148e734e8;
      }
    }
    pUVar7 = (UScriptStruct *)0x0;
  }
LAB_148e734e8:
  if (pUVar7 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar4 == (UClass *)0x0) {
LAB_148e73515:
      bVar2 = false;
    }
    else {
      iVar8 = (int)pUVar4->_padding_;
      if (((int)pUVar7->_padding_ < iVar8) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar8 * 8) !=
          &pUVar4->_padding_)) goto LAB_148e73515;
      bVar2 = true;
    }
    if (bVar2) goto LAB_148e73541;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("BoundVariable.GetType().IsUObject()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                     ,0x461,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar1)();
    return (TObjectPtr<UObject>)TVar5.field0_0x0;
  }
LAB_148e73541:
  piVar6 = (int *)(**(code **)(this->BoundStore->_padding_ + 0x58))();
  if (piVar6 == (int *)0x0) {
    iVar8 = -1;
  }
  else {
    iVar8 = *piVar6;
  }
  this->UObjectOffset = iVar8;
  FNiagaraParameterStore::GetUObject(this->BoundStore,(int)&local_res20);
  param_1->_padding_ = (longlong)local_res20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetValue<UTextureRenderTarget2D> @ 1491a4d70

UTextureRenderTarget2D * __thiscall
FNiagaraParameterDirectBinding<UObject_*>::GetValue<UTextureRenderTarget2D>
          (FNiagaraParameterDirectBinding<UObject_*> *this)

{
  bool bVar1;
  TObjectPtr<UObject> this_00;
  UClass *pUVar2;
  undefined1 local_res8 [32];
  
  if (this->UObjectOffset == -1) {
    return (UTextureRenderTarget2D *)0x0;
  }
  this_00 = FNiagaraParameterStore::GetUObject(this->BoundStore,(int)local_res8);
  if (*(longlong *)this_00.field0_0x0 != 0) {
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar2);
    if (bVar1) {
      return *(UTextureRenderTarget2D **)this_00.field0_0x0;
    }
  }
  return (UTextureRenderTarget2D *)0x0;
}

// Init @ 1492aa020

int * __thiscall
FNiagaraParameterDirectBinding<int>::Init
          (FNiagaraParameterDirectBinding<int> *this,FNiagaraParameterStore *param_1,
          FNiagaraVariable *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  
  this->BoundStore = param_1;
  (this->BoundVariable)._padding_ = param_2->_padding_;
  *(int *)&(this->BoundVariable)._padding_ = (int)param_2->_padding_;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->BoundVariable).VarData,&param_2->VarData);
  this->LayoutVersion = this->BoundStore->LayoutVersion;
  this_00 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_2->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestVariable.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x328,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  piVar4 = (int *)(**(code **)(param_1->_padding_ + 0x58))(param_1,param_2,0);
  if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
    pFVar5 = (param_1->ParameterData).AllocatorInstance.Data + *piVar4;
    this->ValuePtr = (int *)pFVar5;
    return (int *)pFVar5;
  }
  this->ValuePtr = (int *)0x0;
  return (int *)0x0;
}

// Init @ 1492aa100

float * __thiscall
FNiagaraParameterDirectBinding<float>::Init
          (FNiagaraParameterDirectBinding<float> *this,FNiagaraParameterStore *param_1,
          FNiagaraVariable *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  float *pfVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  
  this->BoundStore = param_1;
  (this->BoundVariable)._padding_ = param_2->_padding_;
  *(int *)&(this->BoundVariable)._padding_ = (int)param_2->_padding_;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->BoundVariable).VarData,&param_2->VarData);
  this->LayoutVersion = this->BoundStore->LayoutVersion;
  this_00 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_2->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestVariable.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x328,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  piVar5 = (int *)(**(code **)(param_1->_padding_ + 0x58))(param_1,param_2,0);
  if ((piVar5 != (int *)0x0) && (*piVar5 != -1)) {
    pFVar6 = (param_1->ParameterData).AllocatorInstance.Data + *piVar5;
    this->ValuePtr = (float *)pFVar6;
    return (float *)pFVar6;
  }
  this->ValuePtr = (float *)0x0;
  return (float *)0x0;
}

