// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d5771f0

UScriptStruct * __cdecl FCameraRigProxyRedirectTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigProxyRedirectTable,(UObject *)pUVar1,
                         L"CameraRigProxyRedirectTable");
  }
  return Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTable.OuterSingleton;
}

// ResolveProxy @ 14d5cc660

UCameraRigAsset * __thiscall
FCameraRigProxyRedirectTable::ResolveProxy
          (FCameraRigProxyRedirectTable *this,FCameraRigProxyResolveParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCameraRigAsset *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((param_1->CameraRigProxy == (UCameraRigProxyAsset *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8310036886194225143>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraRigProxyRedirectTable.cpp"
                         ,9,"InParams.CameraRigProxy"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UCameraRigAsset *)(*pcVar2)();
    return pUVar4;
  }
  iVar1 = (this->Entries).ArrayNum;
  pFVar5 = (this->Entries).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCameraRigProxyRedirectTableEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return (UCameraRigAsset *)0x0;
    }
    if (*(UCameraRigProxyAsset **)pFVar5 == (UCameraRigProxyAsset *)0x0) {
      bVar3 = param_1->CameraRigProxy == (UCameraRigProxyAsset *)0x0;
    }
    else {
      bVar3 = *(UCameraRigProxyAsset **)pFVar5 == param_1->CameraRigProxy;
    }
    if (bVar3) break;
    pFVar5 = pFVar5 + 0x10;
  }
  return *(UCameraRigAsset **)(pFVar5 + 8);
}

