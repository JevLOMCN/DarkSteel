// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TFunctionRef<bool___cdecl(AActor_*)><TFunction<bool___cdecl(AActor_*)>_&> @ 147366ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TFunctionRef<bool___cdecl(AActor_*)> * __thiscall
TFunctionRef<bool___cdecl(AActor_*)>::
TFunctionRef<bool___cdecl(AActor_*)><TFunction<bool___cdecl(AActor_*)>_&>
          (TFunctionRef<bool___cdecl(AActor_*)> *this,TFunction<bool___cdecl(AActor_*)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TFunctionRef<bool___cdecl(AActor_*)> *pTVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TFunctionRef<bool___cdecl(AActor_*)> *)(*pcVar1)();
      return pTVar3;
    }
  }
  *(TFunction<bool___cdecl(AActor_*)> **)&this->field_0x8 = param_1;
  *(code **)this =
       UE::Core::Private::Function::
       TFunctionRefCaller<TFunction<bool___cdecl(AActor_*)>,bool,AActor_*>::Call;
  return this;
}

