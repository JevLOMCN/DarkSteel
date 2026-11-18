// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// GetDataReferenceAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> @ 14b2a4950

TDataReadReference<Metasound::FAudioBuffer> * __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
GetDataReferenceAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FAudioBuffer> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar7;
  FName *pFVar8;
  
  if ((this->Data).bIsSet == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x19a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if ((this->Data).bIsSet == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if ((this->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr;
  EVar1 = (this->Data).TypedValue.AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

