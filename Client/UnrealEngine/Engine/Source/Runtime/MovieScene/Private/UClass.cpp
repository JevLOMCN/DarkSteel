// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// GetDefaultObject<UMovieSceneSpawnableBindingBase> @ 146057150

UMovieSceneSpawnableBindingBase * __thiscall
UClass::GetDefaultObject<UMovieSceneSpawnableBindingBase>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UMovieSceneSpawnableBindingBase *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UMovieSceneSpawnableBindingBase *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = UMovieSceneSpawnableBindingBase::StaticClass();
  lVar2 = pUVar6->_padding_;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMovieSceneSpawnableBindingBase *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

// GetDefaultObject<UMovieSceneEntitySystem> @ 14610c970

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystem * __thiscall UClass::GetDefaultObject<UMovieSceneEntitySystem>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UMovieSceneEntitySystem *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UMovieSceneEntitySystem *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = UMovieSceneEntitySystem::StaticClass();
  lVar2 = pUVar6->_padding_;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMovieSceneEntitySystem *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

// GetDefaultObject<UMovieSceneCustomBinding> @ 1461f5d40

UMovieSceneCustomBinding * __thiscall
UClass::GetDefaultObject<UMovieSceneCustomBinding>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UMovieSceneCustomBinding *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UMovieSceneCustomBinding *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister();
  lVar2 = *(longlong *)&pUVar6->field_0x10;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMovieSceneCustomBinding *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

