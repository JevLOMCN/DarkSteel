// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1><TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_> @ 14e5b7000

TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1> * __thiscall
TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1>::
TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1><TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_>
          (TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1> *this,
          TRawPtrProxy<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_> *param_1)

{
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonWriter__QUTGLTFCondensedJsonPrintPolicyUTF8____U__DefaultDeleter_V__TJsonWriter__QUTGLTFCondensedJsonPrintPolicyUTF8_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1><TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_> @ 14e5b70a0

TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1> * __thiscall
TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1>::
TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1><TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_>
          (TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1> *this,
          TRawPtrProxy<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_> *param_1)

{
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonWriter__QUTGLTFPrettyJsonPrintPolicyUTF8____U__DefaultDeleter_V__TJsonWriter__QUTGLTFPrettyJsonPrintPolicyUTF8_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<IGLTFJsonWriter,1><IGLTFJsonWriter> @ 14e5b7140

TSharedRef<IGLTFJsonWriter,1> * __thiscall
TSharedRef<IGLTFJsonWriter,1>::TSharedRef<IGLTFJsonWriter,1><IGLTFJsonWriter>
          (TSharedRef<IGLTFJsonWriter,1> *this,TRawPtrProxy<IGLTFJsonWriter> *param_1)

{
  IGLTFJsonWriter *pIVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<IGLTFJsonWriter,1> *pTVar5;
  
  this->Object = param_1->Object;
  pIVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VIGLTFJsonWriter__U__DefaultDeleter_VIGLTFJsonWriter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pIVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (IGLTFJsonWriter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<IGLTFJsonWriter,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

