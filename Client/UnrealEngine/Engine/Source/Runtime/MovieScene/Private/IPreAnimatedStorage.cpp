// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// ~IPreAnimatedStorage @ 146185c20

void __thiscall UE::MovieScene::IPreAnimatedStorage::~IPreAnimatedStorage(IPreAnimatedStorage *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146185c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AddReferencedObjects @ 14618f220

void __thiscall
UE::MovieScene::IPreAnimatedStorage::AddReferencedObjects
          (IPreAnimatedStorage *this,FReferenceCollector *param_1)

{
  return;
}

// AsObjectStorage @ 146194640

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::IPreAnimatedStorage::AsObjectStorage(IPreAnimatedStorage *this)

{
  return (IPreAnimatedObjectEntityStorage *)0x0;
}

// AsPropertyStorage @ 146194650

IPreAnimatedObjectPropertyStorage * __thiscall
UE::MovieScene::IPreAnimatedStorage::AsPropertyStorage(IPreAnimatedStorage *this)

{
  return (IPreAnimatedObjectPropertyStorage *)0x0;
}

// Initialize @ 1461b63f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::IPreAnimatedStorage::Initialize
          (IPreAnimatedStorage *this,FPreAnimatedStorageID param_1,
          FPreAnimatedStateExtension *param_2)

{
  return;
}

// OnObjectReplaced @ 1461bfd10

void __thiscall
UE::MovieScene::IPreAnimatedStorage::OnObjectReplaced
          (IPreAnimatedStorage *this,FPreAnimatedStorageIndex param_1,FObjectKey *param_2,
          FObjectKey *param_3)

{
  return;
}

