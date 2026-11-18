// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b52cc40

UScriptStruct * __cdecl FDS_NotificationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NotificationData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NotificationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NotificationData,(UObject *)pUVar1,
                         L"DS_NotificationData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NotificationData.OuterSingleton;
}

// FDS_NotificationData @ 14baecf80

FDS_NotificationData * __thiscall
FDS_NotificationData::FDS_NotificationData(FDS_NotificationData *this,FDS_NotificationData *param_1)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FDS_TextFormatArg *pFVar4;
  
  this->NotificationType = param_1->NotificationType;
  (this->NotificationText).StringTableType = (param_1->NotificationText).StringTableType;
  (this->NotificationText).StringTableID = (param_1->NotificationText).StringTableID;
  (this->NotificationText).StringEnumTableNameID = (param_1->NotificationText).StringEnumTableNameID
  ;
  (this->NotificationText).DateTime.Ticks = (param_1->NotificationText).DateTime.Ticks;
  (this->NotificationText).TimeSpan.Ticks = (param_1->NotificationText).TimeSpan.Ticks;
  (this->NotificationText).TimeExpressionType = (param_1->NotificationText).TimeExpressionType;
  (this->NotificationText).IsExpression = (param_1->NotificationText).IsExpression;
  ::FString::FString(&(this->NotificationText).UniqueString,
                     &(param_1->NotificationText).UniqueString);
  pTVar1 = &(this->NotificationText).FormatArgs;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NotificationText).FormatArgs.ArrayMax;
  iVar3 = (param_1->NotificationText).FormatArgs.ArrayNum;
  pFVar4 = (FDS_TextFormatArg *)(param_1->NotificationText).FormatArgs.AllocatorInstance.Data;
  (this->NotificationText).FormatArgs.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

