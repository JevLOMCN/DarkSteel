// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// <lambda_invoker_cdecl> @ 14962f240

float __cdecl
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::<lambda_41_>::<lambda_invoker_cdecl>
          (float param_1)

{
  return param_1;
}

// FPropertyInterface @ 149638ce0

FPropertyInterface * __thiscall
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::FPropertyInterface
          (FPropertyInterface *this)

{
  undefined1 *puVar1;
  
  *(undefined ***)this = &___7FPropertyInterface_ULocalTwoAxisPropertyEditInputBehavior__6B_;
  *(undefined8 *)&this->GetValueFunc = 0;
  *(undefined8 *)&(this->GetValueFunc).field_0x28 = 0;
  *(undefined8 *)&this->SetValueFunc = 0;
  *(undefined8 *)&(this->SetValueFunc).field_0x28 = 0;
  *(undefined8 *)&this->MutateDeltaFunc = 0;
  *(undefined8 *)&(this->MutateDeltaFunc).field_0x28 = 0;
  *(undefined ***)&(this->MutateDeltaFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AMM_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->MutateDeltaFunc).field_0x18;
  *(code **)puVar1 = <lambda_41_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->MutateDeltaFunc =
         UE::Core::Private::Function::TFunctionRefCaller<float_(__cdecl*)(float),float,float>::Call;
  }
  FText::FText(&this->Name);
  this->EditRate = 0.002;
  this->bEnabled = false;
  return this;
}

// ~FPropertyInterface @ 14963dd70

void __thiscall
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::~FPropertyInterface
          (FPropertyInterface *this)

{
  ITextData *pIVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pIVar1 = (this->Name).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (*(longlong *)&this->MutateDeltaFunc != 0) {
    plVar2 = *(longlong **)&(this->MutateDeltaFunc).field_0x28;
    plVar3 = (longlong *)&(this->MutateDeltaFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->SetValueFunc != 0) {
    plVar2 = *(longlong **)&(this->SetValueFunc).field_0x28;
    plVar3 = (longlong *)&(this->SetValueFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->GetValueFunc != 0) {
    plVar2 = *(longlong **)&(this->GetValueFunc).field_0x28;
    plVar3 = (longlong *)&(this->GetValueFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)this = &___7IPropertyInterface_ITwoAxisPropertyEditBehaviorTarget__6B_;
  return;
}

// GetEditRate @ 149654de0

float __thiscall
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::GetEditRate(FPropertyInterface *this)

{
  return this->EditRate;
}

// GetName @ 1496551e0

FText * __thiscall
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::GetName
          (FPropertyInterface *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Name).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Name).Flags;
  return __return_storage_ptr__;
}

// GetValue @ 149658b70

float __thiscall
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::GetValue(FPropertyInterface *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  float fVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValueFunc);
  plVar1 = *(longlong **)&(this->GetValueFunc).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->GetValueFunc;
  plVar3 = (longlong *)&(this->GetValueFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149658baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(*UNRECOVERED_JUMPTABLE)(uVar2);
  return fVar4;
}

// IsEnabled @ 14965a260

bool __thiscall
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::IsEnabled(FPropertyInterface *this)

{
  return this->bEnabled;
}

// MutateDelta @ 14965cd20

float __thiscall
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::MutateDelta
          (FPropertyInterface *this,float param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->MutateDeltaFunc);
  pcVar1 = *(code **)&this->MutateDeltaFunc;
  plVar2 = *(longlong **)&(this->MutateDeltaFunc).field_0x28;
  plVar4 = (longlong *)&(this->MutateDeltaFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  fVar5 = (float)(*pcVar1)(uVar3,local_res10);
  return fVar5;
}

// SetValue @ 1496637a0

void __thiscall
ULocalTwoAxisPropertyEditInputBehavior::FPropertyInterface::SetValue
          (FPropertyInterface *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->SetValueFunc);
  plVar1 = *(longlong **)&(this->SetValueFunc).field_0x28;
  pcVar2 = *(code **)&this->SetValueFunc;
  plVar4 = (longlong *)&(this->SetValueFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,local_res10);
  return;
}

