// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// FLobbyMemberInternal @ 14ee0dc50

FLobbyMemberInternal * __thiscall
UE::Online::FLobbyMemberInternal::FLobbyMemberInternal
          (FLobbyMemberInternal *this,TSharedRef<UE::Online::FSchemaRegistry_const_,1> *param_1,
          FName *param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  Online::Private::FSchemaCategoryInstanceBase::FSchemaCategoryInstanceBase
            ((FSchemaCategoryInstanceBase *)&this->SchemaData,param_2,&LobbyBaseSchemaId,
             &LobbyMemberSchemaCategoryId,param_1);
  (this->SchemaData)._padding_ =
       (longlong)
       &
       ___7__TSchemaCategoryInstance_VFSchemaCategoryInstanceLobbySnapshotAccessor_Online_UE___Online_UE__6B_
  ;
  (this->SchemaData).SnapshotAccessor.ClientSnapshot =
       (TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
        *)&this->_padding_;
  return this;
}

