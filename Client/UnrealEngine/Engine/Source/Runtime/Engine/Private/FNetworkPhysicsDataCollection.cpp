// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1482c8080

UScriptStruct * __cdecl FNetworkPhysicsDataCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsDataCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsDataCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsDataCollection,(UObject *)pUVar1,
                         L"NetworkPhysicsDataCollection");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsDataCollection.OuterSingleton;
}

// UpdateLocalFrameFromServerFrame @ 148328fc0

void __thiscall
FNetworkPhysicsDataCollection::UpdateLocalFrameFromServerFrame
          (FNetworkPhysicsDataCollection *this,int param_1)

{
  int iVar1;
  FNetworkPhysicsPayload *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DataArray).ArrayNum;
  pFVar3 = (this->DataArray).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->DataArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TInstancedStruct<FNetworkPhysicsPayload>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pFVar2 = UE::StructUtils::GetStructRef<FNetworkPhysicsPayload>
                       (*(UScriptStruct **)pFVar3,*(void **)(pFVar3 + 8));
    pFVar2->LocalFrame = pFVar2->ServerFrame - param_1;
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

