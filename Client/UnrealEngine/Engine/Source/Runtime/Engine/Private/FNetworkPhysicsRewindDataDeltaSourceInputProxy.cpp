// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1482cf580

UScriptStruct * __cdecl FNetworkPhysicsRewindDataDeltaSourceInputProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy,
                           (UObject *)pUVar1,L"NetworkPhysicsRewindDataDeltaSourceInputProxy");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy.
         OuterSingleton;
}

// NetSerialize @ 148311c30

bool __thiscall
FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize
          (FNetworkPhysicsRewindDataDeltaSourceInputProxy *this,FArchive *param_1,
          UPackageMap *param_2,bool *param_3)

{
  bool bVar1;
  code *local_68 [2];
  undefined **local_58;
  FNetworkPhysicsRewindDataDeltaSourceInputProxy *local_50;
  undefined8 local_40;
  code *local_38 [2];
  undefined **local_28;
  FNetworkPhysicsRewindDataDeltaSourceInputProxy *local_20;
  undefined8 local_10;
  
  local_40 = 0;
  local_10 = 0;
  if (PhysicsReplicationCVars::ResimulationCVars::bUseDefaultDeltaForDeltaSourceReplication) {
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`5'::<lambda_2>,1,0>
                ::_vftable_;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l5::<lambda_2>,FNetworkPhysicsData_*,int>
                  ::Call;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l5::<lambda_1>,TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>_>
                  ::Call;
    local_50 = this;
  }
  else {
    local_68[0] = (code *)0x0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::`7'::<lambda_3>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNetworkPhysicsRewindDataDeltaSourceInputProxy::NetSerialize'::__l7::<lambda_3>,TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>_>
                  ::Call;
  }
  local_20 = this;
  bVar1 = FNetworkPhysicsRewindDataProxy::NetSerializeBase
                    ((FNetworkPhysicsRewindDataProxy *)this,param_1,param_2,param_3,
                     (TUniqueFunction<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>___cdecl(void)>
                      *)local_38,(TUniqueFunction<FNetworkPhysicsData_*___cdecl(int)> *)local_68);
  return bVar1;
}

