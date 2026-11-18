// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// SetValue<bool> @ 14b3349a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::VertexDataPrivate::FInputBinding::SetValue<bool>(FInputBinding *this,bool *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28;
  TReferenceControllerBase<0> *local_20;
  TReferenceControllerBase<0> *pTStack_18;
  
  pFVar4 = GetMetasoundDataTypeName<bool>();
  if ((FName)(this->Vertex)._padding_ != *pFVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Vertex.DataTypeName == GetMetasoundDataTypeName<DataType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x137,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTStack_18 = ::operator_new(0x18);
  if (pTStack_18 == (TReferenceControllerBase<0> *)0x0) {
    local_20 = ___xmm_00000000000000000000000000000010;
    pTStack_18 = _UNK_150651568;
  }
  else {
    pTStack_18->SharedReferenceCount = 1;
    pTStack_18->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    pTStack_18->WeakReferenceCount = 1;
    *(bool *)&pTStack_18[1]._padding_ = *param_1;
    local_20 = pTStack_18 + 1;
    if (local_20 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_28 = &___7__TDataValueReference__N_Metasound__6B_;
  if (((this->Data).bIsSet != false) &&
     (pIVar1 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pcVar2 = (code *)local_28[3];
  (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (this->Data).TypedValue.AccessType = Value;
  if (pcVar2 == TDataValueReference<bool>::Clone) {
    TDataValueReference<bool>::Clone((TDataValueReference<bool> *)&local_28);
  }
  else {
    (*pcVar2)((TDataValueReference<bool> *)&local_28,&(this->Data).TypedValue.DataRefPtr);
  }
  if ((this->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (this->Data).bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_18);
  if ((this->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

