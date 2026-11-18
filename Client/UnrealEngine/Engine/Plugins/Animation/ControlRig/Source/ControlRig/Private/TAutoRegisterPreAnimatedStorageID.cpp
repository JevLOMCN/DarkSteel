// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigParameterStorage> @ 14a3b48a0

TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigParameterStorage> *
__thiscall
UE::MovieScene::
TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigParameterStorage>::
TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigParameterStorage>
          (TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigParameterStorage>
           *this)

{
  undefined4 local_res8;
  
  FPreAnimatedStateExtension::RegisterStorageInternal();
  *this = local_res8;
  return this;
}

// TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigStorage> @ 14a3b48d0

TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigStorage> * __thiscall
UE::MovieScene::TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigStorage>::
TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigStorage>
          (TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigStorage> *this)

{
  undefined4 local_res8;
  
  FPreAnimatedStateExtension::RegisterStorageInternal();
  *this = local_res8;
  return this;
}

