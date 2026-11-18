// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 320

// GetAddress @ 14ad6ba20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 14ad6ba30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0> *this,
                   FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14ad6ba70

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad6ba75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0> @ 14ad9ca40

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0> @ 14ad9ca60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClassInput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0> @ 14ad9ca80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClassOutput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0> @ 14ad9caa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendDocument__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0> @ 14ad9cac0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendGraph__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0> @ 14ad9cae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendGraphClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0> @ 14ad9cb00

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendNode__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0> @ 14ad9cb20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0>
::~TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendVertex__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0> @ 14ad9cb40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0> @ 14ad9cb60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendClassInput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0> @ 14ad9cb80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendClassOutput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0> @ 14ad9cba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendDocument__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0> @ 14ad9cbc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendGraph__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0> @ 14ad9cbe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendGraphClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0> @ 14ad9cc00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendNode__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0> @ 14ad9cc20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendVertex__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0> @ 14ad9cc40

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0>::
~TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(void_const_*,void_*),1,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXPEBXPEAX_Z_00_0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 14ada7bd0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendClass_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClassInput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendClassInput_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClassOutput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendClassOutput_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendDocument__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendDocument_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7c50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendGraph__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendGraph_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendGraphClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendGraphClass_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7c90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendNode__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendNode_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7cb0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendVertex__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendVertex_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendClass_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendClassInput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendClassInput_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendClassOutput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendClassOutput_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendDocument__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendDocument_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendGraph__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendGraph_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendGraphClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendGraphClass_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendNode__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendNode_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendVertex__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FMetasoundFrontendVertex_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ada7dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument><FMetasoundFrontendDocument_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendDocument_____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendDocument___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ada7e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEAA_V__TWeakPtr_UFAccessToken_Frontend_Metasound___00__AEBUFMetasoundFrontendDocument___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14ada7ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEAA_V__TWeakPtr_UFAccessToken_Frontend_Metasound___00__AEAUFMetasoundFrontendDocument___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14ada7f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Frontend::SourceInterface::FUpdateInterface::Transform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14ada7f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Frontend::GraphAnalyzerViewPrivate::IterateOutputsSupportingAnalyzer'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14adb5bc0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0>::
Destroy(TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c00

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0>::
Destroy(TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0>::
Destroy(TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c30

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0>
::Destroy(TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument><FMetasoundFrontendDocument_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adb5cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adb5d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adb5d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Frontend::SourceInterface::FUpdateInterface::Transform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014adb5d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14adb5d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Frontend::GraphAnalyzerViewPrivate::IterateOutputsSupportingAnalyzer'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14adbbef0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0>::
GetAddress(TFunction_OwnedObject<FMetasoundFrontendClass_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendClassInput_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendDocument_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0>::
GetAddress(TFunction_OwnedObject<FMetasoundFrontendGraph_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0>::
GetAddress(TFunction_OwnedObject<FMetasoundFrontendNode_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0>
::GetAddress(TFunction_OwnedObject<FMetasoundFrontendVertex_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendClass_const_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendClassInput_const_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbf90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendClassOutput_const_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbfa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbfb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbfc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendGraphClass_const_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbfd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendNode_const_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14adbbff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument><FMetasoundFrontendDocument_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adbc000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14adbc010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14adbc020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Frontend::SourceInterface::FUpdateInterface::Transform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14adbc030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Metasound::Frontend::GraphAnalyzerViewPrivate::IterateOutputsSupportingAnalyzer'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14adf2860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf28e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf29e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf2ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf2f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf2fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVariable___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVariable___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf30c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf31e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf32e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf38a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVariable___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf39c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x80,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::
  GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'
  ::__l2::<lambda_1>::<lambda_1>(puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14adf3c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x90,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)this + 0x40);
  *(undefined1 *)((longlong)puVar2 + 0x44) = *(undefined1 *)((longlong)this + 0x44);
  Metasound::Frontend::FNodeClassInfo::FNodeClassInfo
            ((FNodeClassInfo *)(puVar2 + 9),(FNodeClassInfo *)((longlong)this + 0x48));
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf3cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x70,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::
  GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'
  ::__l2::<lambda_1>::<lambda_1>(puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14adf3d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf3ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x80,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::
  GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'
  ::__l2::<lambda_1>::<lambda_1>(puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14adf3f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x80,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::
  GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'
  ::__l2::<lambda_1>::<lambda_1>(puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14adf3fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x90,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)this + 0x40);
  *(undefined1 *)((longlong)puVar2 + 0x44) = *(undefined1 *)((longlong)this + 0x44);
  Metasound::Frontend::FNodeClassInfo::FNodeClassInfo
            ((FNodeClassInfo *)(puVar2 + 9),(FNodeClassInfo *)((longlong)this + 0x48));
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf4030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x90,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)this + 0x40);
  *(undefined1 *)((longlong)puVar2 + 0x44) = *(undefined1 *)((longlong)this + 0x44);
  Metasound::Frontend::FNodeClassInfo::FNodeClassInfo
            ((FNodeClassInfo *)(puVar2 + 9),(FNodeClassInfo *)((longlong)this + 0x48));
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf40c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x70,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::
  GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'
  ::__l2::<lambda_1>::<lambda_1>(puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14adf4120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x70,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::
  GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'
  ::__l2::<lambda_1>::<lambda_1>(puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14adf4180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf4210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf42a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf4320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf43a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstGraphClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf4430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstGraphClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf44c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstNodeAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFConstNodeAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf4550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstNodeAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFConstNodeAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf45e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14adf4660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFGraphClassAccessPtr_34_V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14adf46f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFNodeAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFNodeAccessPtr_34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  puVar3[10] = *(undefined8 *)((longlong)this + 0x50);
  return puVar3 + 2;
}

// Destroy @ 14adf5820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf58b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf58e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf59a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf59d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf5fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf60c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf60f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf61b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf61e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf62a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf62d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14adf6330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14adfa380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa3b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa3c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa3d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa4c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa4d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa4e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa5a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa5b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa5c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa5e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa5f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa6c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa6e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14adfa730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 14ae266f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassInput_____TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput><FMetasoundFrontendClassOutput_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassOutput_____TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae267f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::TAccessPtr<FMetasoundFrontendGraph><FMetasoundFrontendGraph_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraph_____TAccessPtr_UFMetasoundFrontendGraph___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraph___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraphClass_____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraphClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae268f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::TAccessPtr<FMetasoundFrontendGraphClass><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraphClass_____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraphClass___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode><FMetasoundFrontendNode_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendNode_____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendNode___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae269f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>::TAccessPtr<FMetasoundFrontendVariable><FMetasoundFrontendVariable_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendVariable_____TAccessPtr_UFMetasoundFrontendVariable___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendVariable___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex><FMetasoundFrontendVertex_const_>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendVertex_____TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendVertex___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendClass>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClass_____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClassInput_____TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClassInput___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClassOutput_____TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClassOutput___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_><FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendDocument_____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendDocument___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>::TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendGraph_____TAccessPtr___CBUFMetasoundFrontendGraph___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendGraph___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae26d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::TAccessPtr<FMetasoundFrontendGraphClass_const_><FMetasoundFrontendGraphClass>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendGraphClass_____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendGraphClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 14ae30090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae300c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput><FMetasoundFrontendClassOutput_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae300f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::TAccessPtr<FMetasoundFrontendGraph><FMetasoundFrontendGraph_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae30120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae30150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::TAccessPtr<FMetasoundFrontendGraphClass><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae30180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode><FMetasoundFrontendNode_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae301b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>::TAccessPtr<FMetasoundFrontendVariable><FMetasoundFrontendVariable_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae301e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex><FMetasoundFrontendVertex_const_>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae30210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendClass>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae30240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae30270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae302a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_><FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae302d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>::TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae30300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::TAccessPtr<FMetasoundFrontendGraphClass_const_><FMetasoundFrontendGraphClass>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14ae374f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput><FMetasoundFrontendClassOutput_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::TAccessPtr<FMetasoundFrontendGraph><FMetasoundFrontendGraph_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::TAccessPtr<FMetasoundFrontendGraphClass><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode><FMetasoundFrontendNode_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>::TAccessPtr<FMetasoundFrontendVariable><FMetasoundFrontendVariable_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex><FMetasoundFrontendVertex_const_>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendClass>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae37590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae375a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_><FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae375b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>::TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae375c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::TAccessPtr<FMetasoundFrontendGraphClass_const_><FMetasoundFrontendGraphClass>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 14ae661a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::TAccessPtr<FMetasoundFrontendNode_const_><FMetasoundFrontendNode>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendNode_____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendNode___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14ae66220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14ae66260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14ae662a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14ae662e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14ae6c230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::TAccessPtr<FMetasoundFrontendNode_const_><FMetasoundFrontendNode>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ae6c260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ae6c265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ae6c270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ae6c275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ae6c280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ae6c285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ae6c290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ae6c295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14ae74650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::TAccessPtr<FMetasoundFrontendNode_const_><FMetasoundFrontendNode>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ae74660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ae74670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ae74680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ae74690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

