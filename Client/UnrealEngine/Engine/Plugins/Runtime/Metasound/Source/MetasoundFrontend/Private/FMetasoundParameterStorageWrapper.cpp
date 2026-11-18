// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// FMetasoundParameterStorageWrapper @ 14af3cf60

FMetasoundParameterStorageWrapper * __thiscall
FMetasoundParameterStorageWrapper::FMetasoundParameterStorageWrapper
          (FMetasoundParameterStorageWrapper *this,TSharedPtr<Audio::IProxyData,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundParameterStorageWrapper *pFVar3;
  IProxyData *this_00;
  FMetasoundParameterStorageWrapper local_18;
  
  (this->ParameterStoragePtr).Object = (FMetasoundParameterPackStorage *)0x0;
  (this->ParameterStoragePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object != (IProxyData *)0x0) {
    bVar2 = Audio::IProxyData::CheckTypeCast<FMetasoundParameterPackProxy>(param_1->Object);
    if (bVar2) {
      if (param_1->Object == (IProxyData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FMetasoundParameterStorageWrapper *)(*pcVar1)();
          return pFVar3;
        }
      }
      this_00 = param_1->Object;
      bVar2 = Audio::IProxyData::CheckTypeCast<FMetasoundParameterPackProxy>(this_00);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\IAudioProxyInitializer.h"
                           ,0x47,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FMetasoundParameterStorageWrapper *)(*pcVar1)();
          return pFVar3;
        }
        this_00 = (IProxyData *)&DAT_00000001;
      }
      local_18.ParameterStoragePtr.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&this_00[1].ProxyTypeName;
      local_18.ParameterStoragePtr.Object = (FMetasoundParameterPackStorage *)this_00[1]._padding_;
      if ((FName)local_18.ParameterStoragePtr.SharedReferenceCount.ReferenceController != (FName)0x0
         ) {
        LOCK();
        *(int *)((longlong)local_18.ParameterStoragePtr.SharedReferenceCount.ReferenceController + 8
                ) = *(int *)((longlong)
                             local_18.ParameterStoragePtr.SharedReferenceCount.ReferenceController +
                            8) + 1;
        UNLOCK();
      }
      if (this != &local_18) {
        (this->ParameterStoragePtr).Object = local_18.ParameterStoragePtr.Object;
        local_18.ParameterStoragePtr.Object = (FMetasoundParameterPackStorage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ParameterStoragePtr).SharedReferenceCount,
                   &local_18.ParameterStoragePtr.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.ParameterStoragePtr.SharedReferenceCount.ReferenceController);
    }
  }
  return this;
}

