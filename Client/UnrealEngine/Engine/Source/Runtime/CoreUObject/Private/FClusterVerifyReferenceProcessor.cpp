// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// SetCurrentObjectAndCluster @ 14208e9f0

void __thiscall
FClusterVerifyReferenceProcessor::SetCurrentObjectAndCluster
          (FClusterVerifyReferenceProcessor *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FUObjectCluster *pFVar3;
  FUObjectItem *pFVar4;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRootOrClusterObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                       ,0xb6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentObject = param_1;
  pFVar3 = FUObjectClusterContainer::GetObjectCluster
                     (&GUObjectClusters,(UObjectBaseUtility *)param_1);
  this->Cluster = pFVar3;
  if (pFVar3 == (FUObjectCluster *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cluster",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,this->Cluster->RootIndex);
  if ((pFVar4 == (FUObjectItem *)0x0) || ((pFVar4->field1_0x8).Object == (UObjectBase *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootItem && RootItem->GetObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ClusterRootObject = (UObject *)*(UObjectBase **)&pFVar4->field1_0x8;
  return;
}

