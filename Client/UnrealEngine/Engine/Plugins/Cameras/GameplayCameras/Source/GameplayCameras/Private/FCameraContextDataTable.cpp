// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 78

// GetDataImpl<unsigned_char> @ 14d53f6e0

uchar * __thiscall
UE::Cameras::FCameraContextDataTable::GetDataImpl<unsigned_char>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if ((bVar3) && ((pFVar2->Flags & Written) != None)) {
      return this->Memory + pFVar2->Offset;
    }
  }
  return (uchar *)0x0;
}

// GetDataImpl<TObjectPtr<UClass>_> @ 14d53f760

TObjectPtr<UClass> * __thiscall
UE::Cameras::FCameraContextDataTable::GetDataImpl<TObjectPtr<UClass>_>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if ((bVar3) && ((pFVar2->Flags & Written) != None)) {
      return (TObjectPtr<UClass> *)(this->Memory + pFVar2->Offset);
    }
  }
  return (TObjectPtr<UClass> *)0x0;
}

// GetDataImpl<TObjectPtr<UObject>_> @ 14d53f7e0

TObjectPtr<UObject> * __thiscall
UE::Cameras::FCameraContextDataTable::GetDataImpl<TObjectPtr<UObject>_>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if ((bVar3) && ((pFVar2->Flags & Written) != None)) {
      return (TObjectPtr<UObject> *)(this->Memory + pFVar2->Offset);
    }
  }
  return (TObjectPtr<UObject> *)0x0;
}

// GetDataImpl<FName> @ 14d53f860

FName * __thiscall
UE::Cameras::FCameraContextDataTable::GetDataImpl<FName>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if ((bVar3) && ((pFVar2->Flags & Written) != None)) {
      return (FName *)(this->Memory + pFVar2->Offset);
    }
  }
  return (FName *)0x0;
}

// GetDataImpl<FString> @ 14d53f8e0

FString * __thiscall
UE::Cameras::FCameraContextDataTable::GetDataImpl<FString>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if ((bVar3) && ((pFVar2->Flags & Written) != None)) {
      return (FString *)(this->Memory + pFVar2->Offset);
    }
  }
  return (FString *)0x0;
}

// SetArrayDataImpl<unsigned_char> @ 14d541660

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetArrayDataImpl<unsigned_char>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,TArrayView<unsigned_char_const_,int> *param_4)

{
  uchar *puVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  FEntry *pFVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  FArrayEntryHelper local_38;
  
  pFVar7 = FindEntry(this,param_1);
  if (((pFVar7 != (FEntry *)0x0) && (pFVar7->Type == param_2)) && (pFVar7->ContainerType == Array))
  {
    pUVar2 = (pFVar7->TypeObject).field0_0x0.DebugPtr;
    if (pUVar2 == (UObject *)0x0) {
      bVar12 = param_3 == (UObject *)0x0;
    }
    else {
      bVar12 = pUVar2 == param_3;
    }
    if (bVar12) {
      FArrayEntryHelper::FArrayEntryHelper(&local_38,pFVar7,this->Memory);
      iVar9 = param_4->ArrayNum;
      FArrayEntryHelper::Resize(&local_38,iVar9);
      uVar8 = 0;
      if (0 < iVar9) {
        lVar10 = 0;
        do {
          uVar11 = local_38.ElementSizeOf * uVar8;
          lVar3 = *(longlong *)local_38.ScriptArray;
          uVar6 = 0;
          if ((int)uVar8 < iVar9) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar5 = (*pcVar4)();
            return (bool)uVar5;
          }
          uVar8 = uVar8 + 1;
          iVar9 = param_4->ArrayNum;
          puVar1 = param_4->DataPtr + lVar10;
          lVar10 = lVar10 + 1;
          *(uchar *)((ulonglong)uVar11 + lVar3) = *puVar1;
        } while ((int)uVar8 < iVar9);
      }
      pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetArrayDataImpl<TObjectPtr<UClass>_> @ 14d5417b0

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetArrayDataImpl<TObjectPtr<UClass>_>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,TArrayView<TObjectPtr<UClass>_const_,int> *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  TObjectPtr<UClass> *pTVar5;
  code *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  FEntry *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  FArrayEntryHelper local_38;
  
  pFVar9 = FindEntry(this,param_1);
  if (((pFVar9 != (FEntry *)0x0) && (pFVar9->Type == param_2)) && (pFVar9->ContainerType == Array))
  {
    pUVar3 = (pFVar9->TypeObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      bVar13 = param_3 == (UObject *)0x0;
    }
    else {
      bVar13 = pUVar3 == param_3;
    }
    if (bVar13) {
      FArrayEntryHelper::FArrayEntryHelper(&local_38,pFVar9,this->Memory);
      iVar2 = param_4->ArrayNum;
      FArrayEntryHelper::Resize(&local_38,iVar2);
      uVar10 = 0;
      if (0 < iVar2) {
        lVar12 = 0;
        do {
          uVar11 = local_38.ElementSizeOf * uVar10;
          lVar4 = *(longlong *)local_38.ScriptArray;
          uVar8 = 0;
          if ((int)uVar10 < iVar2) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            uVar7 = (*pcVar6)();
            return (bool)uVar7;
          }
          pTVar5 = param_4->DataPtr;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar3 = *(UObject **)((longlong)&pTVar5->field0_0x0 + lVar12),
             pUVar3 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar3);
          }
          puVar1 = (undefined8 *)((longlong)&pTVar5->field0_0x0 + lVar12);
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 8;
          *(undefined8 *)((ulonglong)uVar11 + lVar4) = *puVar1;
        } while ((int)uVar10 < iVar2);
      }
      pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetArrayDataImpl<TObjectPtr<UObject>_> @ 14d541930

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetArrayDataImpl<TObjectPtr<UObject>_>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,TArrayView<TObjectPtr<UObject>_const_,int> *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  TObjectPtr<UObject> *pTVar5;
  code *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  FEntry *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  FArrayEntryHelper local_38;
  
  pFVar9 = FindEntry(this,param_1);
  if (((pFVar9 != (FEntry *)0x0) && (pFVar9->Type == param_2)) && (pFVar9->ContainerType == Array))
  {
    pUVar3 = (pFVar9->TypeObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      bVar13 = param_3 == (UObject *)0x0;
    }
    else {
      bVar13 = pUVar3 == param_3;
    }
    if (bVar13) {
      FArrayEntryHelper::FArrayEntryHelper(&local_38,pFVar9,this->Memory);
      iVar2 = param_4->ArrayNum;
      FArrayEntryHelper::Resize(&local_38,iVar2);
      uVar10 = 0;
      if (0 < iVar2) {
        lVar12 = 0;
        do {
          uVar11 = local_38.ElementSizeOf * uVar10;
          lVar4 = *(longlong *)local_38.ScriptArray;
          uVar8 = 0;
          if ((int)uVar10 < iVar2) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            uVar7 = (*pcVar6)();
            return (bool)uVar7;
          }
          pTVar5 = param_4->DataPtr;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar3 = *(UObject **)((longlong)&pTVar5->field0_0x0 + lVar12),
             pUVar3 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar3);
          }
          puVar1 = (undefined8 *)((longlong)&pTVar5->field0_0x0 + lVar12);
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 8;
          *(undefined8 *)((ulonglong)uVar11 + lVar4) = *puVar1;
        } while ((int)uVar10 < iVar2);
      }
      pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetArrayDataImpl<FName> @ 14d541ab0

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetArrayDataImpl<FName>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,TArrayView<FName_const_,int> *param_4)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  FEntry *pFVar4;
  FName *pFVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  FArrayEntryHelper local_38;
  
  pFVar4 = FindEntry(this,param_1);
  if (((pFVar4 != (FEntry *)0x0) && (pFVar4->Type == param_2)) && (pFVar4->ContainerType == Array))
  {
    pUVar2 = (pFVar4->TypeObject).field0_0x0.DebugPtr;
    if (pUVar2 == (UObject *)0x0) {
      bVar8 = param_3 == (UObject *)0x0;
    }
    else {
      bVar8 = pUVar2 == param_3;
    }
    if (bVar8) {
      FArrayEntryHelper::FArrayEntryHelper(&local_38,pFVar4,this->Memory);
      iVar1 = param_4->ArrayNum;
      FArrayEntryHelper::Resize(&local_38,iVar1);
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          uVar6 = local_38.ElementSizeOf * iVar7;
          lVar3 = *(longlong *)local_38.ScriptArray;
          pFVar5 = TArrayView<FName_const_,int>::operator[](param_4,iVar7);
          iVar7 = iVar7 + 1;
          *(FName *)((ulonglong)uVar6 + lVar3) = *pFVar5;
        } while (iVar7 < iVar1);
      }
      pFVar4->Flags = pFVar4->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetArrayDataImpl<FString> @ 14d541bb0

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetArrayDataImpl<FString>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,TArrayView<FString_const_,int> *param_4)

{
  UObject *pUVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  FEntry *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  FArrayEntryHelper local_28;
  
  pFVar6 = FindEntry(this,param_1);
  if (((pFVar6 != (FEntry *)0x0) && (pFVar6->Type == param_2)) && (pFVar6->ContainerType == Array))
  {
    pUVar1 = (pFVar6->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar10 = param_3 == (UObject *)0x0;
    }
    else {
      bVar10 = pUVar1 == param_3;
    }
    if (bVar10) {
      FArrayEntryHelper::FArrayEntryHelper(&local_28,pFVar6,this->Memory);
      iVar9 = param_4->ArrayNum;
      FArrayEntryHelper::Resize(&local_28,iVar9);
      uVar7 = 0;
      if (0 < iVar9) {
        do {
          uVar8 = local_28.ElementSizeOf * uVar7;
          lVar2 = *(longlong *)local_28.ScriptArray;
          uVar5 = 0;
          if ((int)uVar7 < iVar9) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar4 = (*pcVar3)();
            return (bool)uVar4;
          }
          ::FString::operator=((FString *)((ulonglong)uVar8 + lVar2),param_4->DataPtr + (int)uVar7);
          iVar9 = param_4->ArrayNum;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar9);
      }
      pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetDataImpl<unsigned_char> @ 14d542050

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetDataImpl<unsigned_char>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,uchar *param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if (bVar3) {
      this->Memory[pFVar2->Offset] = *param_4;
      pFVar2->Flags = pFVar2->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetDataImpl<TObjectPtr<UClass>_> @ 14d5420e0

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetDataImpl<TObjectPtr<UClass>_>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,TObjectPtr<UClass> *param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if (bVar3) {
      TObjectPtr<UClass>::operator=((TObjectPtr<UClass> *)(this->Memory + pFVar2->Offset),param_4);
      pFVar2->Flags = pFVar2->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetDataImpl<TObjectPtr<UObject>_> @ 14d542170

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetDataImpl<TObjectPtr<UObject>_>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,TObjectPtr<UObject> *param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if (bVar3) {
      TObjectPtr<UObject>::operator=((TObjectPtr<UObject> *)(this->Memory + pFVar2->Offset),param_4)
      ;
      pFVar2->Flags = pFVar2->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetDataImpl<FName> @ 14d542200

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetDataImpl<FName>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,FName *param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if (bVar3) {
      *(FName *)(this->Memory + pFVar2->Offset) = *param_4;
      pFVar2->Flags = pFVar2->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// SetDataImpl<FString> @ 14d542290

bool __thiscall
UE::Cameras::FCameraContextDataTable::SetDataImpl<FString>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,FString *param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if (bVar3) {
      ::FString::operator=((FString *)(this->Memory + pFVar2->Offset),param_4);
      pFVar2->Flags = pFVar2->Flags | (WrittenThisFrame|Written);
      return true;
    }
  }
  return false;
}

// FCameraContextDataTable @ 14d542de0

FCameraContextDataTable * __thiscall
UE::Cameras::FCameraContextDataTable::FCameraContextDataTable(FCameraContextDataTable *this)

{
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  *(undefined8 *)&this->EntryLookup = 0;
  *(undefined8 *)&(this->EntryLookup).field_0x8 = 0;
  *(undefined8 *)&(this->EntryLookup).field_0x20 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x28 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntryLookup).field_0x34 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntryLookup).field_0x40 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x48 = 0;
  this->Memory = (uchar *)0x0;
  this->Capacity = 0;
  this->Used = 0;
  return this;
}

// ~FCameraContextDataTable @ 14d544500

void __thiscall
UE::Cameras::FCameraContextDataTable::~FCameraContextDataTable(FCameraContextDataTable *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->EntryLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntryLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntryLookup);
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddData @ 14d546ca0

void __thiscall
UE::Cameras::FCameraContextDataTable::AddData
          (FCameraContextDataTable *this,FCameraContextDataDefinition *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uchar *_Dst;
  uchar *puVar7;
  uint uVar8;
  ulong64 uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  ulonglong local_res18 [2];
  FCameraContextDataDefinition *local_78;
  ulonglong *local_70;
  uint local_68;
  ECameraContextDataType local_64;
  ECameraContextDataContainerType local_60;
  UObject *local_58;
  uint local_50;
  FScriptContainerElement local_4c;
  
  uVar5 = (param_1->DataID).Value;
  if (*(int *)&(this->EntryLookup).field_0x8 != *(int *)&(this->EntryLookup).field_0x34) {
    puVar11 = *(undefined1 **)&(this->EntryLookup).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->EntryLookup).field_0x38;
    }
    iVar6 = *(int *)(puVar11 + (ulonglong)(*(int *)&(this->EntryLookup).field_0x48 - 1U & uVar5) * 4
                    );
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->EntryLookup + (longlong)iVar6 * 0x10) == uVar5) {
          bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3466755884590301038>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                             ,0x92,"!EntryLookup.Contains(DataDefinition.DataID)");
          if (!bVar4) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)(*(longlong *)&this->EntryLookup + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  if (param_1->DataContainerType == None) {
    GetDataTypeAllocationInfo
              (param_1->DataType,(param_1->DataTypeObject).field0_0x0.DebugPtr,local_res10,
               local_res8);
  }
  else if (param_1->DataContainerType == Array) {
    local_res10[0] = 0x10;
    local_res8[0] = 8;
  }
  puVar7 = this->Memory;
  local_res18[0] = ~((ulonglong)local_res8[0] - 1);
  uVar5 = this->Capacity;
  uVar8 = (local_res8[0] - 1) + this->Used + (int)puVar7 & (uint)local_res18[0];
  uVar12 = (uVar8 - (int)puVar7) + local_res10[0];
  if (uVar5 < uVar12) {
    uVar9 = 0x40;
    if (uVar5 != 0) {
      uVar9 = (ulong64)(uVar5 * 2);
    }
    if (uVar12 != 0) {
      uVar5 = uVar12;
      if (uVar12 < (uint)uVar9) {
        uVar5 = (uint)uVar9;
      }
      uVar9 = (ulong64)uVar5;
    }
    _Dst = FMemory::Malloc(uVar9,0x20);
    if (puVar7 != (uchar *)0x0) {
      memmove(_Dst,puVar7,(ulonglong)this->Capacity);
      FMemory::Free(puVar7);
    }
    this->Capacity = (uint)uVar9;
    this->Memory = _Dst;
    uVar8 = (local_res8[0] - 1) + this->Used + (int)_Dst & (uint)local_res18[0];
  }
  this->Used = uVar12;
  local_68 = (param_1->DataID).Value;
  local_64 = param_1->DataType;
  local_60 = param_1->DataContainerType;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->DataTypeObject).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  local_58 = (param_1->DataTypeObject).field0_0x0.DebugPtr;
  local_50 = uVar8 - *(int *)&this->Memory;
  local_4c = (FScriptContainerElement)0x0;
  if (param_1->bAutoReset != false) {
    local_4c = (FScriptContainerElement)0x2;
  }
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar10 + (longlong)(this->Entries).ArrayMax * 0x20))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar6 + 1;
  pFVar10 = (this->Entries).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(uint *)pFVar10 = local_68;
  *(ECameraContextDataType *)(pFVar10 + 4) = local_64;
  *(ECameraContextDataContainerType *)(pFVar10 + 8) = local_60;
  *(UObject **)(pFVar10 + 0x10) = local_58;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_58);
  }
  *(uint *)(pFVar10 + 0x18) = local_50;
  pFVar10[0x1c] = local_4c;
  local_res18[0] = CONCAT44(local_res18[0]._4_4_,(this->Entries).ArrayNum + -1);
  local_70 = local_res18;
  local_78 = param_1;
  TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FCameraContextDataID_const_&,int_&&>_>
            ((TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
              *)&this->EntryLookup,
             (TPairInitializer<FCameraContextDataID_const_&,int_&&> *)(local_res18 + 1),
             (bool *)&local_78);
  puVar7 = this->Memory + local_50;
  if (local_60 != None) {
    if (local_60 == Array) {
      puVar7[0] = '\0';
      puVar7[1] = '\0';
      puVar7[2] = '\0';
      puVar7[3] = '\0';
      puVar7[4] = '\0';
      puVar7[5] = '\0';
      puVar7[6] = '\0';
      puVar7[7] = '\0';
      puVar7[8] = '\0';
      puVar7[9] = '\0';
      puVar7[10] = '\0';
      puVar7[0xb] = '\0';
      puVar7[0xc] = '\0';
      puVar7[0xd] = '\0';
      puVar7[0xe] = '\0';
      puVar7[0xf] = '\0';
    }
    return;
  }
  ConstructDataValue(local_64,local_58,puVar7);
  return;
}

// AddReferencedObjects @ 14d547500

void __thiscall
UE::Cameras::FCameraContextDataTable::AddReferencedObjects
          (FCameraContextDataTable *this,FReferenceCollector *param_1)

{
  uint uVar1;
  uint uVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  FScriptArray *pFVar6;
  bool bVar7;
  ulonglong uVar8;
  UClass *pUVar9;
  int iVar10;
  FEntry *pFVar11;
  FObjectPtr_u_0 *this_00;
  FEntry *pFVar12;
  undefined1 local_res8 [8];
  FArrayEntryHelper local_58;
  
  uVar1 = (this->Entries).ArrayNum;
  uVar8 = (ulonglong)(int)uVar1;
  pFVar12 = (FEntry *)(this->Entries).AllocatorInstance.Data;
  pFVar11 = pFVar12 + uVar8;
  this_00 = (FObjectPtr_u_0 *)&pFVar12->TypeObject;
LAB_14d547545:
  do {
    while( true ) {
      if ((this->Entries).ArrayNum != (int)uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar11) {
        return;
      }
      (**(code **)(param_1->_padding_ + 0x88))(param_1,this_00,0);
      if (*(int *)(this_00 + -1) == 0) break;
      if (*(int *)(this_00 + -1) == 1) {
        FArrayEntryHelper::FArrayEntryHelper(&local_58,pFVar12,this->Memory);
        pFVar6 = local_58.ScriptArray;
        uVar2 = local_58.ElementSizeOf;
        iVar10 = *(int *)((longlong)this_00 + -0xc);
        if (iVar10 == 3) {
          if (this_00->Handle != (UObject *)0x0) {
            pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
            pFVar6 = local_58.ScriptArray;
            uVar2 = local_58.ElementSizeOf;
            if ((bVar7) &&
               (pUVar4 = (UScriptStruct *)this_00->Handle, pUVar4 != (UScriptStruct *)0x0)) {
              iVar10 = 0;
              if (0 < *(int *)&(local_58.ScriptArray)->field_0x8) {
                do {
                  FReferenceCollector::AddPropertyReferencesWithStructARO
                            (param_1,pUVar4,
                             (void *)((ulonglong)(uVar2 * iVar10) + *(longlong *)pFVar6),
                             (UObject *)0x0);
                  iVar10 = iVar10 + 1;
                } while (iVar10 < *(int *)&pFVar6->field_0x8);
              }
              goto LAB_14d5476da;
            }
          }
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3466755884590301122>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                             ,0x3e,"StructType");
          if (bVar7) {
code_r0x00014d5477be:
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else if (iVar10 == 4) {
          iVar10 = 0;
          if (0 < *(int *)&(local_58.ScriptArray)->field_0x8) {
            do {
              (**(code **)(param_1->_padding_ + 0x88))
                        (param_1,(ulonglong)(uVar2 * iVar10) + *(longlong *)pFVar6);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)&pFVar6->field_0x8);
          }
        }
        else if ((iVar10 == 5) && (iVar10 = 0, 0 < *(int *)&(local_58.ScriptArray)->field_0x8)) {
          do {
            (**(code **)(param_1->_padding_ + 0x88))
                      (param_1,(ulonglong)(uVar2 * iVar10) + *(longlong *)pFVar6);
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)&pFVar6->field_0x8);
        }
      }
LAB_14d5476da:
      pFVar12 = pFVar12 + 1;
      uVar8 = (ulonglong)uVar1;
      this_00 = this_00 + 4;
    }
    uVar2 = *(uint *)(this_00 + 1);
    puVar3 = this->Memory;
    iVar10 = *(int *)((longlong)this_00 + -0xc);
    if (iVar10 == 3) {
      if (this_00->Handle != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
        if ((bVar7) && ((UScriptStruct *)this_00->Handle != (UScriptStruct *)0x0)) {
          FReferenceCollector::AddPropertyReferencesWithStructARO
                    (param_1,(UScriptStruct *)this_00->Handle,puVar3 + uVar2,(UObject *)0x0);
          pFVar12 = pFVar12 + 1;
          uVar8 = (ulonglong)uVar1;
          this_00 = this_00 + 4;
          goto LAB_14d547545;
        }
      }
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3466755884590301151>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                         ,0x21,"StructType");
      if (bVar7) goto code_r0x00014d5477be;
      pFVar12 = pFVar12 + 1;
      uVar8 = (ulonglong)uVar1;
      this_00 = this_00 + 4;
      goto LAB_14d547545;
    }
    if ((iVar10 != 4) && (iVar10 != 5)) goto LAB_14d5476da;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,puVar3 + uVar2);
    pFVar12 = pFVar12 + 1;
    uVar8 = (ulonglong)uVar1;
    this_00 = this_00 + 4;
  } while( true );
}

// AutoResetValues @ 14d549460

void __thiscall UE::Cameras::FCameraContextDataTable::AutoResetValues(FCameraContextDataTable *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((byte)pFVar2[0x1c] & 2) != 0) {
      pFVar2[0x1c] = (FScriptContainerElement)((byte)pFVar2[0x1c] & 0xf3);
    }
    pFVar2 = pFVar2 + 0x20;
  }
  return;
}

// ClearAllWrittenThisFrameFlags @ 14d5510d0

void __thiscall
UE::Cameras::FCameraContextDataTable::ClearAllWrittenThisFrameFlags(FCameraContextDataTable *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x1c] = (FScriptContainerElement)((byte)pFVar2[0x1c] & 0xf7);
    pFVar2 = pFVar2 + 0x20;
  }
  return;
}

// ConstructDataValue @ 14d5518d0

bool __cdecl
UE::Cameras::FCameraContextDataTable::ConstructDataValue
          (ECameraContextDataType param_1,UObject *param_2,uchar *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  long64 lVar5;
  UClass *pUVar6;
  
  switch(param_1) {
  case Name:
  case Object:
  case Class:
    param_3[0] = '\0';
    param_3[1] = '\0';
    param_3[2] = '\0';
    param_3[3] = '\0';
    param_3[4] = '\0';
    param_3[5] = '\0';
    param_3[6] = '\0';
    param_3[7] = '\0';
    break;
  case String:
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    param_3[0] = '\0';
    param_3[1] = '\0';
    param_3[2] = '\0';
    param_3[3] = '\0';
    param_3[4] = '\0';
    param_3[5] = '\0';
    param_3[6] = '\0';
    param_3[7] = '\0';
    return true;
  case Enum:
    if (param_2 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        lVar5 = UEnum::GetValueByIndex((UEnum *)param_2,0);
        *param_3 = (uchar)lVar5;
        return true;
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300928>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x100,"EnumType");
    if (!bVar3) {
      return true;
    }
code_r0x00014d5519fe:
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  case Struct:
    if (param_2 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        (**(code **)(*(longlong *)param_2 + 0x390))(param_2,param_3);
        return true;
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300919>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x109,"StructType");
    if (bVar3) goto code_r0x00014d5519fe;
    break;
  default:
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300906>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x116,"false");
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return true;
}

// ConstructDataValue @ 14d551a80

bool __cdecl
UE::Cameras::FCameraContextDataTable::ConstructDataValue
          (ECameraContextDataType param_1,ECameraContextDataContainerType param_2,UObject *param_3,
          uchar *param_4)

{
  bool bVar1;
  
  if (param_2 == None) {
    bVar1 = ConstructDataValue(param_1,param_3,param_4);
    return bVar1;
  }
  if (param_2 == Array) {
    param_4[0] = '\0';
    param_4[1] = '\0';
    param_4[2] = '\0';
    param_4[3] = '\0';
    param_4[4] = '\0';
    param_4[5] = '\0';
    param_4[6] = '\0';
    param_4[7] = '\0';
    param_4[8] = '\0';
    param_4[9] = '\0';
    param_4[10] = '\0';
    param_4[0xb] = '\0';
    param_4[0xc] = '\0';
    param_4[0xd] = '\0';
    param_4[0xe] = '\0';
    param_4[0xf] = '\0';
  }
  return false;
}

// DestroyBuffer @ 14d5520b0

void __thiscall UE::Cameras::FCameraContextDataTable::DestroyBuffer(FCameraContextDataTable *this)

{
  ECameraContextDataType EVar1;
  UObject *pUVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20;
  
  if (this->Memory != (uchar *)0x0) {
    pFVar6 = (this->Entries).AllocatorInstance.Data;
    local_res20 = (this->Entries).ArrayNum;
    uVar3 = (ulonglong)(int)local_res20;
    pFVar9 = pFVar6 + uVar3 * 0x20;
    while( true ) {
      if ((this->Entries).ArrayNum != (int)uVar3) {
        `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar9) break;
      plVar7 = (longlong *)(this->Memory + *(uint *)(pFVar6 + 0x18));
      pUVar2 = *(UObject **)(pFVar6 + 0x10);
      EVar1 = *(ECameraContextDataType *)(pFVar6 + 4);
      if (*(int *)(pFVar6 + 8) == 0) {
        DestroyDataValue(EVar1,pUVar2,(uchar *)plVar7);
        uVar3 = (ulonglong)local_res20;
        pFVar6 = pFVar6 + 0x20;
      }
      else {
        if (*(int *)(pFVar6 + 8) == 1) {
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar2);
          }
          GetDataTypeAllocationInfo(EVar1,pUVar2,local_res18,local_res10);
          iVar5 = 0;
          uVar4 = -local_res10[0];
          uVar8 = (local_res10[0] - 1) + local_res18[0];
          if (0 < (int)plVar7[1]) {
            do {
              DestroyDataValue(EVar1,pUVar2,
                               (uchar *)((ulonglong)((uVar8 & uVar4) * iVar5) + *plVar7));
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)plVar7[1]);
          }
          if ((void *)*plVar7 != (void *)0x0) {
            FMemory::Free((void *)*plVar7);
          }
        }
        uVar3 = (ulonglong)local_res20;
        pFVar6 = pFVar6 + 0x20;
      }
    }
    FMemory::Free(this->Memory);
    this->Memory = (uchar *)0x0;
    this->Capacity = 0;
    this->Used = 0;
  }
  return;
}

// DestroyDataValue @ 14d552230

bool __cdecl
UE::Cameras::FCameraContextDataTable::DestroyDataValue
          (ECameraContextDataType param_1,UObject *param_2,uchar *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  switch(param_1) {
  case Name:
  case Enum:
  case Object:
  case Class:
    break;
  case String:
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
      return true;
    }
    break;
  case Struct:
    if (param_2 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(*(longlong *)param_2 + 0x300))(param_2,param_3,1);
        return true;
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300871>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x139,"StructType");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    break;
  default:
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300858>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x146,"false");
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return true;
}

// DestroyDataValue @ 14d552360

bool __cdecl
UE::Cameras::FCameraContextDataTable::DestroyDataValue
          (ECameraContextDataType param_1,ECameraContextDataContainerType param_2,UObject *param_3,
          uchar *param_4)

{
  bool bVar1;
  int iVar2;
  uint local_res10 [2];
  uint local_28 [4];
  
  if (param_2 == None) {
    bVar1 = DestroyDataValue(param_1,param_3,param_4);
    return bVar1;
  }
  if (param_2 == Array) {
    if ((GC::GIsIncrementalReachabilityPending) && (param_3 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_3);
    }
    GetDataTypeAllocationInfo(param_1,param_3,local_28,local_res10);
    iVar2 = 0;
    if (0 < *(int *)(param_4 + 8)) {
      do {
        DestroyDataValue(param_1,param_3,
                         (uchar *)((ulonglong)
                                   (((local_res10[0] - 1) + local_28[0] & -local_res10[0]) * iVar2)
                                  + *(longlong *)param_4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_4 + 8));
    }
    if (*(void **)param_4 != (void *)0x0) {
      FMemory::Free(*(void **)param_4);
    }
  }
  return false;
}

// FindEntry @ 14d5540a0

FEntry * __thiscall
UE::Cameras::FCameraContextDataTable::FindEntry
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  FEntry *pFVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if (*(int *)&(this->EntryLookup).field_0x8 != *(int *)&(this->EntryLookup).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EntryLookup).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EntryLookup).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->EntryLookup).field_0x48 - 1U & param_1.Value) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&this->EntryLookup);
        if (*puVar6 == param_1.Value) {
          puVar4 = puVar6 + 1;
          if (puVar6 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 == (uint *)0x0) {
            return (FEntry *)0x0;
          }
          uVar3 = *puVar4;
          uVar8 = 0;
          if ((int)uVar3 < (this->Entries).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FEntry *)(*pcVar1)();
            return pFVar5;
          }
          return (FEntry *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20);
        }
        uVar3 = puVar6[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  return (FEntry *)0x0;
}

// FindEntry @ 14d554180

FEntry * __thiscall
UE::Cameras::FCameraContextDataTable::FindEntry
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  FEntry *pFVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if (*(int *)&(this->EntryLookup).field_0x8 != *(int *)&(this->EntryLookup).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EntryLookup).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EntryLookup).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->EntryLookup).field_0x48 - 1U & param_1.Value) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&this->EntryLookup);
        if (*puVar6 == param_1.Value) {
          puVar4 = puVar6 + 1;
          if (puVar6 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 == (uint *)0x0) {
            return (FEntry *)0x0;
          }
          uVar3 = *puVar4;
          uVar8 = 0;
          if ((int)uVar3 < (this->Entries).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FEntry *)(*pcVar1)();
            return pFVar5;
          }
          return (FEntry *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20);
        }
        uVar3 = puVar6[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  return (FEntry *)0x0;
}

// GetClassData @ 14d556bf0

UClass * __thiscall
UE::Cameras::FCameraContextDataTable::GetClassData
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if ((((pFVar1 != (FEntry *)0x0) && (pFVar1->Type == Name)) && (pFVar1->ContainerType == None)) &&
     ((((pFVar1->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0 &&
       ((pFVar1->Flags & Written) != None)) && (this->Memory + pFVar1->Offset != (uchar *)0x0)))) {
    return *(UClass **)(this->Memory + pFVar1->Offset);
  }
  return (UClass *)0x0;
}

// GetData @ 14d557b00

uchar * __thiscall
UE::Cameras::FCameraContextDataTable::GetData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,bool param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if (((bVar3) && ((!param_4 || ((pFVar2->Flags & Written) != None)))) &&
       (this->Memory + pFVar2->Offset != (uchar *)0x0)) {
      return this->Memory + pFVar2->Offset;
    }
  }
  local_res20 = local_res10;
  `UE::Cameras::FCameraContextDataTable::GetData'::__l2::<lambda_1>::operator()(&local_res20);
  return (uchar *)0x0;
}

// GetDataTypeAllocationInfo @ 14d557bb0

bool __cdecl
UE::Cameras::FCameraContextDataTable::GetDataTypeAllocationInfo
          (ECameraContextDataType param_1,UObject *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  switch(param_1) {
  case Name:
    *param_3 = 8;
    *param_4 = 4;
    return true;
  case String:
    *param_3 = 0x10;
    *param_4 = 8;
    return true;
  case Enum:
    *param_3 = 1;
    *param_4 = 1;
    return true;
  case Struct:
    if (param_2 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        *param_3 = *(uint *)&param_2[2].field_0x8;
        *param_4 = (int)*(short *)&param_2[2].field_0xc;
        return true;
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300978>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0xce,"StructType");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    break;
  case Object:
  case Class:
    *param_3 = 8;
    *param_4 = 8;
    break;
  default:
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300962>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0xde,"false");
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return true;
}

// GetDataTypeAllocationInfo @ 14d557d50

bool __cdecl
UE::Cameras::FCameraContextDataTable::GetDataTypeAllocationInfo
          (ECameraContextDataType param_1,ECameraContextDataContainerType param_2,UObject *param_3,
          uint *param_4,uint *param_5)

{
  bool bVar1;
  
  if (param_2 == None) {
    bVar1 = GetDataTypeAllocationInfo(param_1,param_3,param_4,param_5);
    return bVar1;
  }
  if (param_2 == Array) {
    *param_4 = 0x10;
    *param_5 = 8;
    return true;
  }
  return false;
}

// GetEnumData @ 14d557e10

uchar __thiscall
UE::Cameras::FCameraContextDataTable::GetEnumData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,UEnum *param_2)

{
  UEnum *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == Enum)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (UEnum *)(pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UEnum *)0x0) {
      bVar3 = param_2 == (UEnum *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_2;
    }
    if (((bVar3) && ((pFVar2->Flags & Written) != None)) &&
       (this->Memory + pFVar2->Offset != (uchar *)0x0)) {
      return this->Memory[pFVar2->Offset];
    }
  }
  return '\0';
}

// GetInstancedStructData @ 14d557e80

FInstancedStruct * __thiscall
UE::Cameras::FCameraContextDataTable::GetInstancedStructData
          (FCameraContextDataTable *this,FInstancedStruct *__return_storage_ptr__,
          FCameraContextDataID param_1,UScriptStruct *param_2)

{
  uint uVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  FEntry *pFVar4;
  bool bVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  uchar *puStack_10;
  
  pFVar4 = FindEntry(this,param_1);
  if (((pFVar4 != (FEntry *)0x0) && (pFVar4->Type == Struct)) && (pFVar4->ContainerType == None)) {
    pUVar2 = (UScriptStruct *)(pFVar4->TypeObject).field0_0x0.DebugPtr;
    if (pUVar2 == (UScriptStruct *)0x0) {
      bVar5 = param_2 == (UScriptStruct *)0x0;
    }
    else {
      bVar5 = pUVar2 == param_2;
    }
    if (((bVar5) && ((pFVar4->Flags & Written) != None)) &&
       (uVar1 = pFVar4->Offset, puVar3 = this->Memory, puVar3 + uVar1 != (uchar *)0x0)) {
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_18.ObjectPtr);
      FInstancedStruct::InitializeAs((FInstancedStruct *)&local_18.ObjectPtr,param_2,puVar3 + uVar1)
      ;
      (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)local_18;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_18.DebugPtr != (UScriptStruct *)0x0)) {
        GC::MarkAsReachable((UObject *)local_18.DebugPtr);
      }
      __return_storage_ptr__->StructMemory = puStack_10;
      local_18.DebugPtr = (UScriptStruct *)0x0;
      puStack_10 = (uchar *)0x0;
      FInstancedStruct::Reset((FInstancedStruct *)&local_18.ObjectPtr);
      return __return_storage_ptr__;
    }
  }
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNameData @ 14d558050

FName * __thiscall
UE::Cameras::FCameraContextDataTable::GetNameData
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  FEntry *pFVar1;
  FName *pFVar2;
  
  pFVar1 = FindEntry(this,param_1);
  if ((((pFVar1 == (FEntry *)0x0) || (pFVar1->Type != Name)) || (pFVar1->ContainerType != None)) ||
     ((((pFVar1->TypeObject).field0_0x0.DebugPtr != (UObject *)0x0 ||
       ((pFVar1->Flags & Written) == None)) ||
      (pFVar2 = (FName *)(this->Memory + pFVar1->Offset), pFVar2 == (FName *)0x0)))) {
    pFVar2 = &::DefaultValue;
  }
  return pFVar2;
}

// GetObjectData @ 14d5580a0

UObject * __thiscall
UE::Cameras::FCameraContextDataTable::GetObjectData
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if ((((pFVar1 != (FEntry *)0x0) && (pFVar1->Type == Name)) && (pFVar1->ContainerType == None)) &&
     ((((pFVar1->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0 &&
       ((pFVar1->Flags & Written) != None)) && (this->Memory + pFVar1->Offset != (uchar *)0x0)))) {
    return *(UObject **)(this->Memory + pFVar1->Offset);
  }
  return (UObject *)0x0;
}

// GetStringData @ 14d558b60

FString * __thiscall
UE::Cameras::FCameraContextDataTable::GetStringData
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  FEntry *pFVar1;
  FString *pFVar2;
  
  pFVar1 = FindEntry(this,param_1);
  if ((((pFVar1 == (FEntry *)0x0) || (pFVar1->Type != Name)) || (pFVar1->ContainerType != None)) ||
     ((((pFVar1->TypeObject).field0_0x0.DebugPtr != (UObject *)0x0 ||
       ((pFVar1->Flags & Written) == None)) ||
      (pFVar2 = (FString *)(this->Memory + pFVar1->Offset), pFVar2 == (FString *)0x0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UE::Cameras::FCameraContextDataTable::GetStringData'::__l2::
               _dynamic_atexit_destructor_for__DefaultValue__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pFVar2 = &::DefaultValue;
  }
  return pFVar2;
}

// GetStructViewData @ 14d558c00

FConstStructView * __thiscall
UE::Cameras::FCameraContextDataTable::GetStructViewData
          (FCameraContextDataTable *this,FConstStructView *__return_storage_ptr__,
          FCameraContextDataID param_1,UScriptStruct *param_2)

{
  uint uVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  FEntry *pFVar4;
  bool bVar5;
  
  pFVar4 = FindEntry(this,param_1);
  if (((pFVar4 != (FEntry *)0x0) && (pFVar4->Type == Struct)) && (pFVar4->ContainerType == None)) {
    pUVar2 = (UScriptStruct *)(pFVar4->TypeObject).field0_0x0.DebugPtr;
    if (pUVar2 == (UScriptStruct *)0x0) {
      bVar5 = param_2 == (UScriptStruct *)0x0;
    }
    else {
      bVar5 = pUVar2 == param_2;
    }
    if (((bVar5) && ((pFVar4->Flags & Written) != None)) &&
       (uVar1 = pFVar4->Offset, puVar3 = this->Memory, puVar3 + uVar1 != (uchar *)0x0)) {
      __return_storage_ptr__->ScriptStruct = param_2;
      __return_storage_ptr__->StructMemory = puVar3 + uVar1;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)0x0;
  __return_storage_ptr__->StructMemory = (uchar *)0x0;
  return __return_storage_ptr__;
}

// Initialize @ 14d559050

void __thiscall
UE::Cameras::FCameraContextDataTable::Initialize
          (FCameraContextDataTable *this,FCameraContextDataTableAllocationInfo *param_1)

{
  int *piVar1;
  ECameraContextDataType EVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  uchar *puVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int *piVar11;
  longlong *plVar12;
  FCameraContextDataTableAllocationInfo *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulong64 uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  FCameraContextDataTableAllocationInfo *local_res10;
  uint local_res18 [2];
  FScriptContainerElement *local_res20;
  uint local_98;
  uint local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  UObject *local_80;
  uint local_78;
  FScriptContainerElement local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  TPairInitializer<FCameraContextDataID_const_&,int_&&> local_60;
  int *local_50;
  
  local_res10 = param_1;
  if (this->Memory != (uchar *)0x0) {
    local_res18[0] = (this->Entries).ArrayNum;
    uVar6 = (ulonglong)(int)local_res18[0];
    pFVar17 = (this->Entries).AllocatorInstance.Data;
    pFVar10 = pFVar17 + uVar6 * 0x20;
    local_res20 = pFVar10;
    while( true ) {
      if ((this->Entries).ArrayNum != (int)uVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar17 == pFVar10) break;
      plVar12 = (longlong *)(this->Memory + *(uint *)(pFVar17 + 0x18));
      pUVar3 = *(UObject **)(pFVar17 + 0x10);
      EVar2 = *(ECameraContextDataType *)(pFVar17 + 4);
      if (*(int *)(pFVar17 + 8) == 0) {
        DestroyDataValue(EVar2,pUVar3,(uchar *)plVar12);
        uVar6 = (ulonglong)local_res18[0];
        pFVar17 = pFVar17 + 0x20;
      }
      else {
        if (*(int *)(pFVar17 + 8) == 1) {
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar3);
          }
          GetDataTypeAllocationInfo(EVar2,pUVar3,&local_6c,&local_70);
          iVar9 = 0;
          uVar8 = -local_70;
          uVar15 = (local_70 - 1) + local_6c;
          if (0 < (int)plVar12[1]) {
            do {
              DestroyDataValue(EVar2,pUVar3,
                               (uchar *)((ulonglong)(iVar9 * (uVar15 & uVar8)) + *plVar12));
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)plVar12[1]);
          }
          pFVar10 = local_res20;
          if ((void *)*plVar12 != (void *)0x0) {
            FMemory::Free((void *)*plVar12);
            pFVar10 = local_res20;
          }
        }
        uVar6 = (ulonglong)local_res18[0];
        pFVar17 = pFVar17 + 0x20;
      }
    }
    FMemory::Free(this->Memory);
    this->Memory = (uchar *)0x0;
    this->Capacity = 0;
    this->Used = 0;
  }
  pFVar13 = local_res10;
  uVar16 = 0;
  piVar11 = &(this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  *piVar11 = 0;
  if ((this->Entries).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
           *)&this->EntryLookup);
  local_64 = (pFVar13->DataDefinitions).ArrayNum;
  uVar6 = (ulonglong)(int)local_64;
  pFVar17 = (pFVar13->DataDefinitions).AllocatorInstance.Data;
  pFVar10 = pFVar17 + uVar6 * 0x20;
  while( true ) {
    if ((pFVar13->DataDefinitions).ArrayNum != (int)uVar6) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<FCameraContextDataDefinition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    uVar8 = (uint)uVar16;
    if (pFVar17 == pFVar10) {
      puVar7 = FMemory::Malloc(uVar16,0x20);
      this->Memory = puVar7;
      this->Capacity = uVar8;
      this->Used = uVar8;
      iVar9 = (this->Entries).ArrayNum;
      pFVar17 = (this->Entries).AllocatorInstance.Data;
      pFVar10 = pFVar17 + (longlong)iVar9 * 0x20;
      while( true ) {
        if ((this->Entries).ArrayNum != iVar9) {
          `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_res20);
        }
        if (pFVar17 == pFVar10) break;
        puVar7 = this->Memory + *(uint *)(pFVar17 + 0x18);
        if (*(int *)(pFVar17 + 8) == 0) {
          ConstructDataValue(*(ECameraContextDataType *)(pFVar17 + 4),*(UObject **)(pFVar17 + 0x10),
                             puVar7);
          pFVar17 = pFVar17 + 0x20;
        }
        else {
          if (*(int *)(pFVar17 + 8) == 1) {
            puVar7[0] = '\0';
            puVar7[1] = '\0';
            puVar7[2] = '\0';
            puVar7[3] = '\0';
            puVar7[4] = '\0';
            puVar7[5] = '\0';
            puVar7[6] = '\0';
            puVar7[7] = '\0';
            puVar7[8] = '\0';
            puVar7[9] = '\0';
            puVar7[10] = '\0';
            puVar7[0xb] = '\0';
            puVar7[0xc] = '\0';
            puVar7[0xd] = '\0';
            puVar7[0xe] = '\0';
            puVar7[0xf] = '\0';
          }
          pFVar17 = pFVar17 + 0x20;
        }
      }
      return;
    }
    if (*(int *)(pFVar17 + 8) == 0) {
      GetDataTypeAllocationInfo
                (*(ECameraContextDataType *)(pFVar17 + 4),*(UObject **)(pFVar17 + 0x10),&local_94,
                 &local_98);
    }
    else if (*(int *)(pFVar17 + 8) == 1) {
      local_94 = 0x10;
      local_98 = 8;
    }
    local_80 = (UObject *)0x0;
    uVar8 = (local_98 - 1) + uVar8 & -local_98;
    local_90 = *(int *)pFVar17;
    uVar16 = (ulong64)(local_94 + uVar8);
    local_8c = *(undefined4 *)(pFVar17 + 4);
    local_88 = *(undefined4 *)(pFVar17 + 8);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(pFVar17 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)(pFVar17 + 0x10));
    }
    local_80 = *(UObject **)(pFVar17 + 0x10);
    local_74 = (FScriptContainerElement)0x0;
    if (pFVar17[0x18] != (FScriptContainerElement)0x0) {
      local_74 = (FScriptContainerElement)0x2;
    }
    pFVar14 = (this->Entries).AllocatorInstance.Data;
    local_78 = uVar8;
    if (((pFVar14 <= (FScriptContainerElement *)&local_90) &&
        ((FScriptContainerElement *)&local_90 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar9 = *piVar11;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)this,piVar1);
      *piVar11 = iVar9;
    }
    *piVar11 = iVar9 + 1;
    pFVar14 = (this->Entries).AllocatorInstance.Data + (longlong)iVar9 * 0x20;
    *(int *)pFVar14 = local_90;
    *(undefined4 *)(pFVar14 + 4) = local_8c;
    *(undefined4 *)(pFVar14 + 8) = local_88;
    *(UObject **)(pFVar14 + 0x10) = local_80;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0)) {
      GC::MarkAsReachable(local_80);
    }
    *(uint *)(pFVar14 + 0x18) = local_78;
    pFVar14[0x1c] = local_74;
    local_68 = *piVar11 + -1;
    local_60.Value = &local_90;
    local_50 = &local_68;
    TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FCameraContextDataID_const_&,int_&&>_>
              ((TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
                *)&this->EntryLookup,&local_60,(bool *)&local_60.Value);
    uVar6 = (ulonglong)local_64;
    pFVar17 = pFVar17 + 0x20;
    pFVar13 = local_res10;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// InternalOverride @ 14d559fe0

void __thiscall
UE::Cameras::FCameraContextDataTable::InternalOverride
          (FCameraContextDataTable *this,FCameraContextDataTable *param_1,
          ECameraContextDataTableFilter param_2)

{
  ECameraContextDataType EVar1;
  undefined1 *puVar2;
  TObjectPtr<UObject_const_>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  FScriptContainerElement FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptArray *pFVar17;
  undefined1 local_b8 [4];
  uint local_b4;
  FScriptContainerElement *local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  FScriptContainerElement *local_90;
  FCameraContextDataDefinition local_88;
  FArrayEntryHelper local_68;
  
  pFVar16 = (param_1->Entries).AllocatorInstance.Data;
  bVar12 = (bool)((byte)param_2 & 1);
  local_94 = (param_1->Entries).ArrayNum;
  uVar7 = (ulonglong)(int)local_94;
  pFVar15 = pFVar16 + uVar7 * 0x20;
  local_b0 = pFVar15;
  do {
    if ((param_1->Entries).ArrayNum != (int)uVar7) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar16 == pFVar15) {
      return;
    }
    FVar13 = pFVar16[0x1c];
    local_b4 = (uint)(byte)FVar13;
    if ((((byte)FVar13 & 4) != 0) &&
       (((param_2 & ChangedOnly) == None || (((byte)FVar13 & 8) != 0)))) {
      uVar14 = *(uint *)pFVar16;
      if (*(int *)&(this->EntryLookup).field_0x8 != *(int *)&(this->EntryLookup).field_0x34) {
        puVar2 = *(undefined1 **)&(this->EntryLookup).field_0x40;
        puVar8 = &(this->EntryLookup).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar8 = puVar2;
        }
        uVar9 = *(uint *)(puVar8 + (ulonglong)
                                   (*(int *)&(this->EntryLookup).field_0x48 - 1U & uVar14) * 4);
        if (uVar9 != 0xffffffff) {
          do {
            puVar6 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&this->EntryLookup);
            if (*puVar6 == uVar14) {
              if (puVar6 != (uint *)0x0) {
                uVar9 = puVar6[1];
                goto LAB_14d55a0ef;
              }
              break;
            }
            uVar9 = puVar6[2];
          } while (uVar9 != 0xffffffff);
        }
      }
      uVar9 = 0xffffffff;
LAB_14d55a0ef:
      if (uVar9 == 0xffffffff) {
        pFVar15 = local_b0;
        if ((param_2 & KnownOnly) != None) goto LAB_14d55a38e;
        local_88.DataType = *(ECameraContextDataType *)(pFVar16 + 4);
        local_88.DataContainerType = *(ECameraContextDataContainerType *)(pFVar16 + 8);
        local_88.DataTypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
        local_88.DataID.Value = uVar14;
        local_88.bAutoReset = bVar12;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(pFVar16 + 0x10) != (UObject *)0x0)) {
          GC::MarkAsReachable(*(UObject **)(pFVar16 + 0x10));
        }
        local_88.DataTypeObject.field0_0x0 = *(TObjectPtr<UObject_const_>_u_0 *)(pFVar16 + 0x10);
        AddData(this,&local_88);
        uVar9 = (this->Entries).ArrayNum - 1;
        if ((uVar9 == 0xffffffff) &&
           (bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3466755884590300219>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                               ,0x3c5,"ThisIndex != INDEX_NONE"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar14 = 0;
      if ((int)uVar9 < (this->Entries).ArrayNum) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20;
      EVar1 = *(ECameraContextDataType *)(pFVar15 + 4);
      local_90 = pFVar15;
      if ((EVar1 == *(ECameraContextDataType *)(pFVar16 + 4)) &&
         (TVar3 = (TObjectPtr<UObject_const_>_u_0)
                  ((TObjectPtr<UObject_const_>_u_0 *)(pFVar15 + 0x10))->DebugPtr,
         TVar3.DebugPtr == *(UObject **)(pFVar16 + 0x10))) {
        pFVar17 = (FScriptArray *)(this->Memory + *(uint *)(pFVar15 + 0x18));
        plVar10 = (longlong *)(param_1->Memory + *(uint *)(pFVar16 + 0x18));
        if (*(int *)(pFVar15 + 8) == 0) {
          SetDataValue(EVar1,TVar3.DebugPtr,(uchar *)pFVar17,(uchar *)plVar10);
        }
        else if (*(int *)(pFVar15 + 8) == 1) {
          local_68.ElementType = EVar1;
          if ((GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UObject *)0x0)
             ) {
            GC::MarkAsReachable(TVar3.DebugPtr);
          }
          local_68.ElementTypeObject.field0_0x0 = TVar3;
          GetDataTypeAllocationInfo(EVar1,TVar3.DebugPtr,&local_a4,&local_a8);
          local_68.ElementAlignOf = local_a8;
          uVar14 = (local_a4 - 1) + local_a8 & -local_a8;
          local_68.ElementSizeOf = uVar14;
          local_68.ScriptArray = pFVar17;
          if ((GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UObject *)0x0)
             ) {
            GC::MarkAsReachable(TVar3.DebugPtr);
          }
          GetDataTypeAllocationInfo(EVar1,TVar3.DebugPtr,&local_9c,&local_a0);
          local_98 = (local_9c - 1) + local_a0 & -local_a0;
          FArrayEntryHelper::Resize(&local_68,(int)plVar10[1]);
          uVar9 = local_98;
          iVar11 = 0;
          if (0 < (int)plVar10[1]) {
            do {
              SetDataValue(EVar1,TVar3.DebugPtr,
                           (uchar *)((ulonglong)(uVar14 * iVar11) + *(longlong *)pFVar17),
                           (uchar *)((ulonglong)(iVar11 * uVar9) + *plVar10));
              iVar11 = iVar11 + 1;
              pFVar15 = local_90;
            } while (iVar11 < (int)plVar10[1]);
          }
          FVar13 = SUB41(local_b4,0);
        }
        pFVar15[0x1c] = (FScriptContainerElement)((byte)pFVar15[0x1c] | (byte)FVar13 & 8 | 4);
        pFVar15 = local_b0;
      }
      else {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3466755884590300216>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                           ,0x3c8,
                           "ThisEntry.Type == OtherEntry.Type && ThisEntry.TypeObject == OtherEntry.TypeObject"
                          );
        pFVar15 = local_b0;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
LAB_14d55a38e:
    pFVar16 = pFVar16 + 0x20;
    uVar7 = (ulonglong)local_94;
  } while( true );
}

// IsValueWritten @ 14d55a5e0

bool __thiscall
UE::Cameras::FCameraContextDataTable::IsValueWritten
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if (pFVar1 != (FEntry *)0x0) {
    return (bool)(pFVar1->Flags >> 2 & 1);
  }
  return false;
}

// IsValueWrittenThisFrame @ 14d55a610

bool __thiscall
UE::Cameras::FCameraContextDataTable::IsValueWrittenThisFrame
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if (pFVar1 != (FEntry *)0x0) {
    return (bool)(pFVar1->Flags >> 3 & 1);
  }
  return false;
}

// Override @ 14d55d4d0

void __thiscall
UE::Cameras::FCameraContextDataTable::Override
          (FCameraContextDataTable *this,FCameraContextDataTable *param_1,
          ECameraContextDataTableFilter param_2)

{
  ECameraContextDataType EVar1;
  undefined1 *puVar2;
  TObjectPtr<UObject_const_>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  FScriptContainerElement FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptArray *pFVar17;
  undefined1 auStack_b8 [4];
  uint uStack_b4;
  FScriptContainerElement *pFStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  FScriptContainerElement *pFStack_90;
  FCameraContextDataDefinition FStack_88;
  FArrayEntryHelper FStack_68;
  
  pFVar16 = (param_1->Entries).AllocatorInstance.Data;
  bVar12 = (bool)((byte)param_2 & 1);
  uStack_94 = (param_1->Entries).ArrayNum;
  uVar7 = (ulonglong)(int)uStack_94;
  pFVar15 = pFVar16 + uVar7 * 0x20;
  pFStack_b0 = pFVar15;
  do {
    if ((param_1->Entries).ArrayNum != (int)uVar7) {
      auStack_b8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStack_b8);
    }
    if (pFVar16 == pFVar15) {
      return;
    }
    FVar13 = pFVar16[0x1c];
    uStack_b4 = (uint)(byte)FVar13;
    if ((((byte)FVar13 & 4) != 0) &&
       (((param_2 & ChangedOnly) == None || (((byte)FVar13 & 8) != 0)))) {
      uVar14 = *(uint *)pFVar16;
      if (*(int *)&(this->EntryLookup).field_0x8 != *(int *)&(this->EntryLookup).field_0x34) {
        puVar2 = *(undefined1 **)&(this->EntryLookup).field_0x40;
        puVar8 = &(this->EntryLookup).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar8 = puVar2;
        }
        uVar9 = *(uint *)(puVar8 + (ulonglong)
                                   (*(int *)&(this->EntryLookup).field_0x48 - 1U & uVar14) * 4);
        if (uVar9 != 0xffffffff) {
          do {
            puVar6 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&this->EntryLookup);
            if (*puVar6 == uVar14) {
              if (puVar6 != (uint *)0x0) {
                uVar9 = puVar6[1];
                goto LAB_14d55a0ef;
              }
              break;
            }
            uVar9 = puVar6[2];
          } while (uVar9 != 0xffffffff);
        }
      }
      uVar9 = 0xffffffff;
LAB_14d55a0ef:
      if (uVar9 == 0xffffffff) {
        pFVar15 = pFStack_b0;
        if ((param_2 & KnownOnly) != None) goto LAB_14d55a38e;
        FStack_88.DataType = *(ECameraContextDataType *)(pFVar16 + 4);
        FStack_88.DataContainerType = *(ECameraContextDataContainerType *)(pFVar16 + 8);
        FStack_88.DataTypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
        FStack_88.DataID.Value = uVar14;
        FStack_88.bAutoReset = bVar12;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(pFVar16 + 0x10) != (UObject *)0x0)) {
          GC::MarkAsReachable(*(UObject **)(pFVar16 + 0x10));
        }
        FStack_88.DataTypeObject.field0_0x0 = *(TObjectPtr<UObject_const_>_u_0 *)(pFVar16 + 0x10);
        AddData(this,&FStack_88);
        uVar9 = (this->Entries).ArrayNum - 1;
        if ((uVar9 == 0xffffffff) &&
           (bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3466755884590300219>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                               ,0x3c5,"ThisIndex != INDEX_NONE"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar14 = 0;
      if ((int)uVar9 < (this->Entries).ArrayNum) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20;
      EVar1 = *(ECameraContextDataType *)(pFVar15 + 4);
      pFStack_90 = pFVar15;
      if ((EVar1 == *(ECameraContextDataType *)(pFVar16 + 4)) &&
         (TVar3 = (TObjectPtr<UObject_const_>_u_0)
                  ((TObjectPtr<UObject_const_>_u_0 *)(pFVar15 + 0x10))->DebugPtr,
         TVar3.DebugPtr == *(UObject **)(pFVar16 + 0x10))) {
        pFVar17 = (FScriptArray *)(this->Memory + *(uint *)(pFVar15 + 0x18));
        plVar10 = (longlong *)(param_1->Memory + *(uint *)(pFVar16 + 0x18));
        if (*(int *)(pFVar15 + 8) == 0) {
          SetDataValue(EVar1,TVar3.DebugPtr,(uchar *)pFVar17,(uchar *)plVar10);
        }
        else if (*(int *)(pFVar15 + 8) == 1) {
          FStack_68.ElementType = EVar1;
          if ((GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UObject *)0x0)
             ) {
            GC::MarkAsReachable(TVar3.DebugPtr);
          }
          FStack_68.ElementTypeObject.field0_0x0 = TVar3;
          GetDataTypeAllocationInfo(EVar1,TVar3.DebugPtr,&uStack_a4,&uStack_a8);
          FStack_68.ElementAlignOf = uStack_a8;
          uVar14 = (uStack_a4 - 1) + uStack_a8 & -uStack_a8;
          FStack_68.ElementSizeOf = uVar14;
          FStack_68.ScriptArray = pFVar17;
          if ((GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UObject *)0x0)
             ) {
            GC::MarkAsReachable(TVar3.DebugPtr);
          }
          GetDataTypeAllocationInfo(EVar1,TVar3.DebugPtr,&uStack_9c,&uStack_a0);
          uStack_98 = (uStack_9c - 1) + uStack_a0 & -uStack_a0;
          FArrayEntryHelper::Resize(&FStack_68,(int)plVar10[1]);
          uVar9 = uStack_98;
          iVar11 = 0;
          if (0 < (int)plVar10[1]) {
            do {
              SetDataValue(EVar1,TVar3.DebugPtr,
                           (uchar *)((ulonglong)(uVar14 * iVar11) + *(longlong *)pFVar17),
                           (uchar *)((ulonglong)(iVar11 * uVar9) + *plVar10));
              iVar11 = iVar11 + 1;
              pFVar15 = pFStack_90;
            } while (iVar11 < (int)plVar10[1]);
          }
          FVar13 = SUB41(uStack_b4,0);
        }
        pFVar15[0x1c] = (FScriptContainerElement)((byte)pFVar15[0x1c] | (byte)FVar13 & 8 | 4);
        pFVar15 = pFStack_b0;
      }
      else {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3466755884590300216>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                           ,0x3c8,
                           "ThisEntry.Type == OtherEntry.Type && ThisEntry.TypeObject == OtherEntry.TypeObject"
                          );
        pFVar15 = pFStack_b0;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
LAB_14d55a38e:
    pFVar16 = pFVar16 + 0x20;
    uVar7 = (ulonglong)uStack_94;
  } while( true );
}

// OverrideAll @ 14d55d4e0

void __thiscall
UE::Cameras::FCameraContextDataTable::OverrideAll
          (FCameraContextDataTable *this,FCameraContextDataTable *param_1)

{
  InternalOverride(this,param_1,None);
  return;
}

// OverrideKnown @ 14d55d5a0

void __thiscall
UE::Cameras::FCameraContextDataTable::OverrideKnown
          (FCameraContextDataTable *this,FCameraContextDataTable *param_1)

{
  InternalOverride(this,param_1,KnownOnly);
  return;
}

// ReallocateBuffer @ 14d55e4c0

void __thiscall
UE::Cameras::FCameraContextDataTable::ReallocateBuffer(FCameraContextDataTable *this,uint param_1)

{
  uchar *_Src;
  uchar *_Dst;
  uint uVar1;
  uint uVar2;
  
  if (this->Capacity == 0) {
    uVar1 = 0x40;
  }
  else {
    uVar1 = this->Capacity * 2;
  }
  uVar2 = uVar1;
  if ((param_1 != 0) && (uVar2 = param_1, param_1 < uVar1)) {
    uVar2 = uVar1;
  }
  _Src = this->Memory;
  _Dst = FMemory::Malloc((ulonglong)uVar2,0x20);
  if (_Src != (uchar *)0x0) {
    memmove(_Dst,_Src,(ulonglong)this->Capacity);
    FMemory::Free(_Src);
  }
  this->Capacity = uVar2;
  this->Memory = _Dst;
  return;
}

// SetClassArrayData @ 14d562d90

void __thiscall
UE::Cameras::FCameraContextDataTable::SetClassArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,
          TArrayView<UClass_*_const,int> *param_2)

{
  int iVar1;
  UClass **ppUVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  FEntry *pFVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FArrayEntryHelper local_38;
  
  iVar1 = param_2->ArrayNum;
  iVar10 = 0;
  ppUVar2 = param_2->DataPtr;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = iVar1;
  if (iVar1 == 0) {
    local_3c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_48,iVar1,&local_3c);
    ConstructItems<TObjectPtr<UClass>,UClass_*,int>(local_48.Data,ppUVar2,iVar1);
  }
  iVar1 = local_40;
  FVar9.Data = local_48.Data;
  if (local_40 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = FindEntry(this,param_1);
  if ((((pFVar7 != (FEntry *)0x0) && (pFVar7->Type == Class)) && (pFVar7->ContainerType == Array))
     && ((pFVar7->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    FArrayEntryHelper::FArrayEntryHelper(&local_38,pFVar7,this->Memory);
    FArrayEntryHelper::Resize(&local_38,iVar1);
    if (0 < iVar1) {
      do {
        uVar8 = local_38.ElementSizeOf * iVar10;
        lVar3 = *(longlong *)local_38.ScriptArray;
        if (iVar10 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)FVar9.Data != (UObject *)0x0)) {
          GC::MarkAsReachable(*(UObject **)FVar9.Data);
        }
        uVar4 = *(undefined8 *)FVar9.Data;
        iVar10 = iVar10 + 1;
        FVar9.Data = FVar9.Data + 8;
        *(undefined8 *)((ulonglong)uVar8 + lVar3) = uVar4;
      } while (iVar10 < iVar1);
    }
    pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetClassData @ 14d562f40

void __thiscall
UE::Cameras::FCameraContextDataTable::SetClassData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,UClass *param_2)

{
  uint uVar1;
  uchar *puVar2;
  FEntry *pFVar3;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_2 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  pFVar3 = FindEntry(this,param_1);
  if ((((pFVar3 != (FEntry *)0x0) && (pFVar3->Type == Class)) && (pFVar3->ContainerType == None)) &&
     ((pFVar3->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    uVar1 = pFVar3->Offset;
    puVar2 = this->Memory;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    *(UClass **)(puVar2 + uVar1) = param_2;
    pFVar3->Flags = pFVar3->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetData @ 14d563240

void __thiscall
UE::Cameras::FCameraContextDataTable::SetData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,uchar *param_4,bool param_5)

{
  EEntryFlags EVar1;
  UObject *pUVar2;
  code *pcVar3;
  FEntry *pFVar4;
  bool bVar5;
  uint local_res10 [4];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar4 = FindEntry(this,param_1);
  if (pFVar4 != (FEntry *)0x0) {
    if ((pFVar4->Type == param_2) && (pFVar4->ContainerType == None)) {
      pUVar2 = (pFVar4->TypeObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UObject *)0x0) {
        bVar5 = param_3 == (UObject *)0x0;
      }
      else {
        bVar5 = pUVar2 == param_3;
      }
      if (bVar5) {
        SetDataValue(pFVar4->Type,pUVar2,this->Memory + pFVar4->Offset,param_4);
        EVar1 = pFVar4->Flags;
        pFVar4->Flags = EVar1 | Written;
        if (!param_5) {
          return;
        }
        pFVar4->Flags = EVar1 | (WrittenThisFrame|Written);
        return;
      }
    }
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300471>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x2c9,
                       "Entry->Type == ExpectedDataType && Entry->ContainerType == ECameraContextDataContainerType::None && Entry->TypeObject == ExpectedDataTypeObject"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res20 = local_res10;
  `UE::Cameras::FCameraContextDataTable::SetData'::__l2::<lambda_1>::operator()(&local_res20);
  return;
}

// SetDataValue @ 14d563320

bool __cdecl
UE::Cameras::FCameraContextDataTable::SetDataValue
          (ECameraContextDataType param_1,UObject *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  switch(param_1) {
  case Name:
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    return true;
  case String:
    ::FString::operator=((FString *)param_3,(FString *)param_4);
    return true;
  case Enum:
    *param_3 = *param_4;
    return true;
  case Struct:
    if (param_2 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        UScriptStruct::CopyScriptStruct((UScriptStruct *)param_2,param_3,param_4,1);
        return true;
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300334>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x352,"StructType");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    break;
  case Object:
    TObjectPtr<UObject>::operator=((TObjectPtr<UObject> *)param_3,(TObjectPtr<UObject> *)param_4);
    return true;
  case Class:
    TObjectPtr<UClass>::operator=((TObjectPtr<UClass> *)param_3,(TObjectPtr<UClass> *)param_4);
    break;
  default:
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300321>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x35f,"false");
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return true;
}

// SetDataValue @ 14d5634d0

bool __cdecl
UE::Cameras::FCameraContextDataTable::SetDataValue
          (ECameraContextDataType param_1,ECameraContextDataContainerType param_2,UObject *param_3,
          uchar *param_4,uchar *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint local_res10 [2];
  uint local_58 [2];
  FArrayEntryHelper local_50;
  
  if (param_2 != None) {
    if (param_2 == Array) {
      local_50.ElementType = param_1;
      if ((GC::GIsIncrementalReachabilityPending) && (param_3 != (UObject *)0x0)) {
        GC::MarkAsReachable(param_3);
      }
      local_50.ElementTypeObject.field0_0x0 = (TObjectPtr<UObject_const_>_u_0)param_3;
      GetDataTypeAllocationInfo(param_1,param_3,local_58,local_res10);
      local_50.ElementAlignOf = local_res10[0];
      uVar2 = (local_58[0] - 1) + local_res10[0] & -local_res10[0];
      local_50.ElementSizeOf = uVar2;
      local_50.ScriptArray = (FScriptArray *)param_4;
      if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
        GC::MarkAsReachable(param_3);
      }
      GetDataTypeAllocationInfo(param_1,param_3,local_58,local_res10);
      FArrayEntryHelper::Resize(&local_50,*(int *)(param_5 + 8));
      iVar3 = 0;
      if (0 < *(int *)(param_5 + 8)) {
        do {
          SetDataValue(param_1,param_3,(uchar *)((ulonglong)(uVar2 * iVar3) + *(longlong *)param_4),
                       (uchar *)((ulonglong)
                                 (((local_58[0] - 1) + local_res10[0] & -local_res10[0]) * iVar3) +
                                *(longlong *)param_5));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_5 + 8));
      }
    }
    return false;
  }
  bVar1 = SetDataValue(param_1,param_3,param_4,param_5);
  return bVar1;
}

// SetEnumArrayData @ 14d564450

void __thiscall
UE::Cameras::FCameraContextDataTable::SetEnumArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,UEnum *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  uchar uVar1;
  int iVar2;
  UEnum *pUVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  FEntry *pFVar7;
  uchar *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  FArrayEntryHelper local_28;
  
  pFVar7 = FindEntry(this,param_1);
  if (((pFVar7 != (FEntry *)0x0) && (pFVar7->Type == Enum)) && (pFVar7->ContainerType == Array)) {
    pUVar3 = (UEnum *)(pFVar7->TypeObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UEnum *)0x0) {
      bVar11 = param_2 == (UEnum *)0x0;
    }
    else {
      bVar11 = pUVar3 == param_2;
    }
    if (bVar11) {
      FArrayEntryHelper::FArrayEntryHelper(&local_28,pFVar7,this->Memory);
      iVar2 = param_3->ArrayNum;
      FArrayEntryHelper::Resize(&local_28,iVar2);
      uVar9 = 0;
      if (0 < iVar2) {
        puVar8 = param_3->DataPtr;
        do {
          uVar10 = uVar9 * local_28.ElementSizeOf;
          lVar4 = *(longlong *)local_28.ScriptArray;
          uVar6 = 0;
          if ((int)uVar9 < iVar2) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar1 = *puVar8;
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + 1;
          *(uchar *)((ulonglong)uVar10 + lVar4) = uVar1;
        } while ((int)uVar9 < iVar2);
      }
      pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
    }
  }
  return;
}

// SetEnumData @ 14d564590

void __thiscall
UE::Cameras::FCameraContextDataTable::SetEnumData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,UEnum *param_2,uchar param_3)

{
  UEnum *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == Enum)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (UEnum *)(pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UEnum *)0x0) {
      bVar3 = param_2 == (UEnum *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_2;
    }
    if (bVar3) {
      this->Memory[pFVar2->Offset] = param_3;
      pFVar2->Flags = pFVar2->Flags | (WrittenThisFrame|Written);
    }
  }
  return;
}

// SetInstancedStructArrayData @ 14d564620

void __thiscall
UE::Cameras::FCameraContextDataTable::SetInstancedStructArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FEntry *pFVar5;
  UScriptStruct *this_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  FArrayEntryHelper local_50;
  
  pFVar5 = FindEntry(this,param_1);
  if (((pFVar5 == (FEntry *)0x0) || (pFVar5->Type != Struct)) || (pFVar5->ContainerType != Array)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300603>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x245,
                       "Entry && Entry->Type == ECameraContextDataType::Struct && Entry->ContainerType == ECameraContextDataContainerType::Array"
                      );
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = CastChecked<UScriptStruct_const_,UObject_const_>(&pFVar5->TypeObject,NullChecked);
  FArrayEntryHelper::FArrayEntryHelper(&local_50,pFVar5,this->Memory);
  iVar7 = param_2->ArrayNum;
  FArrayEntryHelper::Resize(&local_50,iVar7);
  uVar6 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar8 = local_50.ElementSizeOf * uVar6;
      lVar1 = *(longlong *)local_50.ScriptArray;
      uVar4 = 0;
      if ((int)uVar6 < iVar7) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this_00 ==
          *(UScriptStruct **)((longlong)&(param_2->DataPtr->ScriptStruct).field0_0x0 + lVar9)) {
        uVar4 = 0;
        if ((int)uVar6 < iVar7) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UScriptStruct::CopyScriptStruct
                  (this_00,(void *)((ulonglong)uVar8 + lVar1),
                   *(void **)((longlong)&param_2->DataPtr->StructMemory + lVar9),1);
      }
      else {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3466755884590300594>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                           ,0x24e,"StructType == InData[Index].GetScriptStruct()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar6 < iVar7);
  }
  pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  return;
}

// SetInstancedStructData @ 14d564850

void __thiscall
UE::Cameras::FCameraContextDataTable::SetInstancedStructData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,FInstancedStruct *param_2)

{
  uint uVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  code *pcVar4;
  FEntry *pFVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  
  pFVar5 = FindEntry(this,param_1);
  if (((pFVar5 != (FEntry *)0x0) && (pFVar5->Type == Struct)) && (pFVar5->ContainerType == None)) {
    pUVar6 = (UScriptStruct *)(pFVar5->TypeObject).field0_0x0.DebugPtr;
    pUVar2 = (param_2->ScriptStruct).field0_0x0.DebugPtr;
    if (pUVar6 == (UScriptStruct *)0x0) {
      bVar7 = pUVar2 == (UScriptStruct *)0x0;
    }
    else {
      bVar7 = pUVar6 == pUVar2;
    }
    if (bVar7) {
      uVar1 = pFVar5->Offset;
      puVar3 = this->Memory;
      pUVar6 = CastChecked<UScriptStruct_const_,UObject_const_>(&pFVar5->TypeObject,NullChecked);
      UScriptStruct::CopyScriptStruct(pUVar6,puVar3 + uVar1,param_2->StructMemory,1);
      pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
      return;
    }
  }
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3466755884590300667>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                     ,0x205,
                     "Entry && Entry->Type == ECameraContextDataType::Struct && Entry->ContainerType == ECameraContextDataContainerType::None && InData.GetScriptStruct() == Entry->TypeObject"
                    );
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// SetNameArrayData @ 14d5649e0

void __thiscall
UE::Cameras::FCameraContextDataTable::SetNameArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,
          TArrayView<FName_const_,int> *param_2)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FEntry *pFVar7;
  FName *pFVar8;
  uint uVar9;
  uint uVar10;
  FArrayEntryHelper local_28;
  
  pFVar7 = FindEntry(this,param_1);
  if ((((pFVar7 != (FEntry *)0x0) && (pFVar7->Type == Name)) && (pFVar7->ContainerType == Array)) &&
     ((pFVar7->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    FArrayEntryHelper::FArrayEntryHelper(&local_28,pFVar7,this->Memory);
    iVar1 = param_2->ArrayNum;
    FArrayEntryHelper::Resize(&local_28,iVar1);
    uVar9 = 0;
    if (0 < iVar1) {
      pFVar8 = param_2->DataPtr;
      do {
        uVar10 = uVar9 * local_28.ElementSizeOf;
        lVar2 = *(longlong *)local_28.ScriptArray;
        uVar6 = 0;
        if ((int)uVar9 < iVar1) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = *pFVar8;
        uVar9 = uVar9 + 1;
        pFVar8 = pFVar8 + 1;
        *(FName *)((ulonglong)uVar10 + lVar2) = FVar3;
      } while ((int)uVar9 < iVar1);
    }
    pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetNameData @ 14d564b10

void __thiscall
UE::Cameras::FCameraContextDataTable::SetNameData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,FName *param_2)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if ((((pFVar1 != (FEntry *)0x0) && (pFVar1->Type == Name)) && (pFVar1->ContainerType == None)) &&
     ((pFVar1->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    *(FName *)(this->Memory + pFVar1->Offset) = *param_2;
    pFVar1->Flags = pFVar1->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetObjectArrayData @ 14d564b80

void __thiscall
UE::Cameras::FCameraContextDataTable::SetObjectArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,
          TArrayView<UObject_*_const,int> *param_2)

{
  int iVar1;
  UObject **ppUVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  FEntry *pFVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FArrayEntryHelper local_38;
  
  iVar1 = param_2->ArrayNum;
  iVar10 = 0;
  ppUVar2 = param_2->DataPtr;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = iVar1;
  if (iVar1 == 0) {
    local_3c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_48,iVar1,&local_3c);
    ConstructItems<TObjectPtr<UObject>,UObject_*,int>(local_48.Data,ppUVar2,iVar1);
  }
  iVar1 = local_40;
  FVar9.Data = local_48.Data;
  if (local_40 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = FindEntry(this,param_1);
  if ((((pFVar7 != (FEntry *)0x0) && (pFVar7->Type == Object)) && (pFVar7->ContainerType == Array))
     && ((pFVar7->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    FArrayEntryHelper::FArrayEntryHelper(&local_38,pFVar7,this->Memory);
    FArrayEntryHelper::Resize(&local_38,iVar1);
    if (0 < iVar1) {
      do {
        uVar8 = local_38.ElementSizeOf * iVar10;
        lVar3 = *(longlong *)local_38.ScriptArray;
        if (iVar10 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)FVar9.Data != (UObject *)0x0)) {
          GC::MarkAsReachable(*(UObject **)FVar9.Data);
        }
        uVar4 = *(undefined8 *)FVar9.Data;
        iVar10 = iVar10 + 1;
        FVar9.Data = FVar9.Data + 8;
        *(undefined8 *)((ulonglong)uVar8 + lVar3) = uVar4;
      } while (iVar10 < iVar1);
    }
    pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetObjectData @ 14d564d30

void __thiscall
UE::Cameras::FCameraContextDataTable::SetObjectData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,UObject *param_2)

{
  uint uVar1;
  uchar *puVar2;
  FEntry *pFVar3;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_2);
  }
  pFVar3 = FindEntry(this,param_1);
  if ((((pFVar3 != (FEntry *)0x0) && (pFVar3->Type == Object)) && (pFVar3->ContainerType == None))
     && ((pFVar3->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    uVar1 = pFVar3->Offset;
    puVar2 = this->Memory;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_2);
    }
    *(UObject **)(puVar2 + uVar1) = param_2;
    pFVar3->Flags = pFVar3->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetStringArrayData @ 14d564ed0

void __thiscall
UE::Cameras::FCameraContextDataTable::SetStringArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,
          TArrayView<FString_const_,int> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FString *pFVar4;
  bool bVar5;
  uint uVar6;
  FEntry *pFVar7;
  uint uVar8;
  uint uVar9;
  FArrayEntryHelper local_28;
  
  pFVar4 = param_2->DataPtr;
  pFVar7 = FindEntry(this,param_1);
  if ((((pFVar7 != (FEntry *)0x0) && (pFVar7->Type == String)) && (pFVar7->ContainerType == Array))
     && ((pFVar7->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    FArrayEntryHelper::FArrayEntryHelper(&local_28,pFVar7,this->Memory);
    iVar1 = param_2->ArrayNum;
    FArrayEntryHelper::Resize(&local_28,iVar1);
    uVar8 = 0;
    if (0 < iVar1) {
      do {
        uVar9 = uVar8 * local_28.ElementSizeOf;
        lVar2 = *(longlong *)local_28.ScriptArray;
        uVar6 = 0;
        if ((int)uVar8 < iVar1) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::operator=((FString *)((ulonglong)uVar9 + lVar2),pFVar4 + (int)uVar8);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar1);
    }
    pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetStringData @ 14d564ff0

void __thiscall
UE::Cameras::FCameraContextDataTable::SetStringData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,FString *param_2)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if ((((pFVar1 != (FEntry *)0x0) && (pFVar1->Type == String)) && (pFVar1->ContainerType == None))
     && ((pFVar1->TypeObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    ::FString::operator=((FString *)(this->Memory + pFVar1->Offset),param_2);
    pFVar1->Flags = pFVar1->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetStructViewArrayData @ 14d565050

void __thiscall
UE::Cameras::FCameraContextDataTable::SetStructViewArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,
          TArrayView<FStructView_const_,int> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FEntry *pFVar5;
  UScriptStruct *this_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  FArrayEntryHelper local_50;
  
  pFVar5 = FindEntry(this,param_1);
  if (((pFVar5 == (FEntry *)0x0) || (pFVar5->Type != Struct)) || (pFVar5->ContainerType != Array)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300626>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x22e,
                       "Entry && Entry->Type == ECameraContextDataType::Struct && Entry->ContainerType == ECameraContextDataContainerType::Array"
                      );
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = CastChecked<UScriptStruct_const_,UObject_const_>(&pFVar5->TypeObject,NullChecked);
  FArrayEntryHelper::FArrayEntryHelper(&local_50,pFVar5,this->Memory);
  iVar7 = param_2->ArrayNum;
  FArrayEntryHelper::Resize(&local_50,iVar7);
  uVar6 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar8 = local_50.ElementSizeOf * uVar6;
      lVar1 = *(longlong *)local_50.ScriptArray;
      uVar4 = 0;
      if ((int)uVar6 < iVar7) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this_00 == *(UScriptStruct **)((longlong)&param_2->DataPtr->ScriptStruct + lVar9)) {
        uVar4 = 0;
        if ((int)uVar6 < iVar7) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UScriptStruct::CopyScriptStruct
                  (this_00,(void *)((ulonglong)uVar8 + lVar1),
                   *(void **)((longlong)&param_2->DataPtr->StructMemory + lVar9),1);
      }
      else {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3466755884590300617>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                           ,0x237,"StructType == InData[Index].GetScriptStruct()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar6 < iVar7);
  }
  pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  return;
}

// SetStructViewData @ 14d565280

void __thiscall
UE::Cameras::FCameraContextDataTable::SetStructViewData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,FStructView *param_2)

{
  uint uVar1;
  uchar *puVar2;
  code *pcVar3;
  FEntry *pFVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  
  pFVar4 = FindEntry(this,param_1);
  if (((pFVar4 != (FEntry *)0x0) && (pFVar4->Type == Struct)) && (pFVar4->ContainerType == None)) {
    pUVar5 = (UScriptStruct *)(pFVar4->TypeObject).field0_0x0.DebugPtr;
    if (pUVar5 == (UScriptStruct *)0x0) {
      bVar6 = param_2->ScriptStruct == (UScriptStruct *)0x0;
    }
    else {
      bVar6 = pUVar5 == param_2->ScriptStruct;
    }
    if (bVar6) {
      uVar1 = pFVar4->Offset;
      puVar2 = this->Memory;
      pUVar5 = CastChecked<UScriptStruct_const_,UObject_const_>(&pFVar4->TypeObject,NullChecked);
      UScriptStruct::CopyScriptStruct(pUVar5,puVar2 + uVar1,param_2->StructMemory,1);
      pFVar4->Flags = pFVar4->Flags | (WrittenThisFrame|Written);
      return;
    }
  }
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3466755884590300682>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                     ,0x1f6,
                     "Entry && Entry->Type == ECameraContextDataType::Struct && Entry->ContainerType == ECameraContextDataContainerType::None && InData.GetScriptStruct() == Entry->TypeObject"
                    );
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// TryGetArrayData @ 14d568a70

FScriptArray * __thiscall
UE::Cameras::FCameraContextDataTable::TryGetArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,bool param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == Array))
  {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if ((bVar3) && ((!param_4 || ((pFVar2->Flags & Written) != None)))) {
      return (FScriptArray *)(this->Memory + pFVar2->Offset);
    }
  }
  return (FScriptArray *)0x0;
}

// TryGetData @ 14d568b00

uchar * __thiscall
UE::Cameras::FCameraContextDataTable::TryGetData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,bool param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if (((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) && (pFVar2->ContainerType == None)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if ((bVar3) && ((!param_4 || ((pFVar2->Flags & Written) != None)))) {
      return this->Memory + pFVar2->Offset;
    }
  }
  return (uchar *)0x0;
}

// TryGetMutableRawDataPtr @ 14d568b90

uchar * __thiscall
UE::Cameras::FCameraContextDataTable::TryGetMutableRawDataPtr
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,bool param_4)

{
  EEntryFlags EVar1;
  UObject *pUVar2;
  FEntry *pFVar3;
  bool bVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if ((pFVar3 != (FEntry *)0x0) && (pFVar3->Type == param_2)) {
    pUVar2 = (pFVar3->TypeObject).field0_0x0.DebugPtr;
    if (pUVar2 == (UObject *)0x0) {
      bVar4 = param_3 == (UObject *)0x0;
    }
    else {
      bVar4 = pUVar2 == param_3;
    }
    if (bVar4) {
      EVar1 = pFVar3->Flags;
      pFVar3->Flags = EVar1 | Written;
      if (param_4) {
        pFVar3->Flags = EVar1 | (WrittenThisFrame|Written);
      }
      return this->Memory + pFVar3->Offset;
    }
  }
  return (uchar *)0x0;
}

// TryGetRawDataPtr @ 14d568c20

uchar * __thiscall
UE::Cameras::FCameraContextDataTable::TryGetRawDataPtr
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,bool param_4)

{
  UObject *pUVar1;
  FEntry *pFVar2;
  bool bVar3;
  
  pFVar2 = FindEntry(this,param_1);
  if ((pFVar2 != (FEntry *)0x0) && (pFVar2->Type == param_2)) {
    pUVar1 = (pFVar2->TypeObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = param_3 == (UObject *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_3;
    }
    if ((bVar3) && ((!param_4 || ((pFVar2->Flags & Written) != None)))) {
      return this->Memory + pFVar2->Offset;
    }
  }
  return (uchar *)0x0;
}

// TrySetArrayData @ 14d569550

bool __thiscall
UE::Cameras::FCameraContextDataTable::TrySetArrayData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,int param_4,uchar *param_5,bool param_6)

{
  EEntryFlags EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FEntry *pFVar5;
  FArrayEntryHelper local_28;
  
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 != (FEntry *)0x0) {
    if (pFVar5->ContainerType == Array) {
      FArrayEntryHelper::FArrayEntryHelper(&local_28,pFVar5,this->Memory);
      SetDataValue(pFVar5->Type,(pFVar5->TypeObject).field0_0x0.DebugPtr,
                   (uchar *)((ulonglong)(local_28.ElementSizeOf * param_4) +
                            *(longlong *)local_28.ScriptArray),param_5);
      EVar1 = pFVar5->Flags;
      pFVar5->Flags = EVar1 | Written;
      if (param_6) {
        pFVar5->Flags = EVar1 | (WrittenThisFrame|Written);
      }
      return true;
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300412>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x304,"Entry->ContainerType == ECameraContextDataContainerType::Array");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// TrySetArrayDataNum @ 14d569620

bool __thiscall
UE::Cameras::FCameraContextDataTable::TrySetArrayDataNum
          (FCameraContextDataTable *this,FCameraContextDataID param_1,int param_2,bool param_3)

{
  EEntryFlags EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FEntry *pFVar5;
  FArrayEntryHelper local_28;
  
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 != (FEntry *)0x0) {
    if (pFVar5->ContainerType == Array) {
      FArrayEntryHelper::FArrayEntryHelper(&local_28,pFVar5,this->Memory);
      FArrayEntryHelper::Resize(&local_28,param_2);
      EVar1 = pFVar5->Flags;
      pFVar5->Flags = EVar1 | Written;
      if (param_3) {
        pFVar5->Flags = EVar1 | (WrittenThisFrame|Written);
      }
      return true;
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300443>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x2e5,"Entry->ContainerType == ECameraContextDataContainerType::Array");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// TrySetData @ 14d5696e0

bool __thiscall
UE::Cameras::FCameraContextDataTable::TrySetData
          (FCameraContextDataTable *this,FCameraContextDataID param_1,ECameraContextDataType param_2
          ,UObject *param_3,uchar *param_4,bool param_5)

{
  EEntryFlags EVar1;
  UObject *pUVar2;
  code *pcVar3;
  undefined1 uVar4;
  FEntry *pFVar5;
  bool bVar6;
  
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 != (FEntry *)0x0) {
    if ((pFVar5->Type == param_2) && (pFVar5->ContainerType == None)) {
      pUVar2 = (pFVar5->TypeObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UObject *)0x0) {
        bVar6 = param_3 == (UObject *)0x0;
      }
      else {
        bVar6 = pUVar2 == param_3;
      }
      if (bVar6) {
        SetDataValue(pFVar5->Type,pUVar2,this->Memory + pFVar5->Offset,param_4);
        EVar1 = pFVar5->Flags;
        pFVar5->Flags = EVar1 | Written;
        if (param_5) {
          pFVar5->Flags = EVar1 | (WrittenThisFrame|Written);
        }
        return true;
      }
    }
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3466755884590300471>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTable.cpp"
                       ,0x2c9,
                       "Entry->Type == ExpectedDataType && Entry->ContainerType == ECameraContextDataContainerType::None && Entry->TypeObject == ExpectedDataTypeObject"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return (bool)uVar4;
    }
  }
  return false;
}

// UnsetAllValues @ 14d56a250

void __thiscall UE::Cameras::FCameraContextDataTable::UnsetAllValues(FCameraContextDataTable *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x1c] = (FScriptContainerElement)((byte)pFVar2[0x1c] & 0xfb);
    pFVar2 = pFVar2 + 0x20;
  }
  return;
}

// UnsetValue @ 14d56a2c0

void __thiscall
UE::Cameras::FCameraContextDataTable::UnsetValue
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if (pFVar1 != (FEntry *)0x0) {
    pFVar1->Flags = pFVar1->Flags & ~Written;
  }
  return;
}

// TryGetArrayData<FCameraActorAttachmentInfo> @ 14d5fa220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraContextDataTable::TryGetArrayData<FCameraActorAttachmentInfo>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,
          TArrayView<FCameraActorAttachmentInfo_const_,int> *param_2)

{
  int iVar1;
  FCameraActorAttachmentInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FScriptArray *pFVar7;
  undefined4 uStack_c;
  
  if (Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorAttachmentInfo,(UObject *)pUVar6,
                         L"CameraActorAttachmentInfo");
  }
  pFVar7 = TryGetArrayData(this,param_1,Struct,
                           (UObject *)
                           Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.
                           OuterSingleton,true);
  if (pFVar7 != (FScriptArray *)0x0) {
    pFVar2 = *(FCameraActorAttachmentInfo **)pFVar7;
    iVar1 = *(int *)&pFVar7->field_0x8;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    param_2->DataPtr = pFVar2;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_c,iVar1);
    return true;
  }
  return false;
}

// TryGetData<FCameraActorAttachmentInfo> @ 14d5fa2f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraActorAttachmentInfo * __thiscall
UE::Cameras::FCameraContextDataTable::TryGetData<FCameraActorAttachmentInfo>
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  UPackage *pUVar1;
  FCameraActorAttachmentInfo *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorAttachmentInfo,(UObject *)pUVar1,
                         L"CameraActorAttachmentInfo");
  }
  pFVar2 = (FCameraActorAttachmentInfo *)
           TryGetData(this,param_1,Struct,
                      (UObject *)
                      Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton,
                      true);
  return pFVar2;
}

// TryGetArrayData<FCameraActorTargetInfo> @ 14d654b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraContextDataTable::TryGetArrayData<FCameraActorTargetInfo>
          (FCameraContextDataTable *this,FCameraContextDataID param_1,
          TArrayView<FCameraActorTargetInfo_const_,int> *param_2)

{
  int iVar1;
  FCameraActorTargetInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FScriptArray *pFVar7;
  undefined4 uStack_c;
  
  if (Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorTargetInfo,(UObject *)pUVar6,
                         L"CameraActorTargetInfo");
  }
  pFVar7 = TryGetArrayData(this,param_1,Struct,
                           (UObject *)
                           Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton,
                           true);
  if (pFVar7 != (FScriptArray *)0x0) {
    pFVar2 = *(FCameraActorTargetInfo **)pFVar7;
    iVar1 = *(int *)&pFVar7->field_0x8;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    param_2->DataPtr = pFVar2;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_c,iVar1);
    return true;
  }
  return false;
}

// TryGetData<FCameraActorTargetInfo> @ 14d654c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraActorTargetInfo * __thiscall
UE::Cameras::FCameraContextDataTable::TryGetData<FCameraActorTargetInfo>
          (FCameraContextDataTable *this,FCameraContextDataID param_1)

{
  UPackage *pUVar1;
  FCameraActorTargetInfo *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorTargetInfo,(UObject *)pUVar1,
                         L"CameraActorTargetInfo");
  }
  pFVar2 = (FCameraActorTargetInfo *)
           TryGetData(this,param_1,Struct,
                      (UObject *)
                      Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton,true);
  return pFVar2;
}

// operator() @ 150580bb0

bool __thiscall
`UE::Cameras::FCameraContextDataTable::GetData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3466755884590300563>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3466755884590300563>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580c00

bool __thiscall
`UE::Cameras::FCameraContextDataTable::SetData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3466755884590300489>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3466755884590300489>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

