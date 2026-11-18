// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147265fa0

UScriptStruct * __cdecl FCharacterNetworkSerializationPackedBits::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCharacterNetworkSerializationPackedBits.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCharacterNetworkSerializationPackedBits.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits,
                         (UObject *)pUVar1,L"CharacterNetworkSerializationPackedBits");
  }
  return Z_Registration_Info_UScriptStruct_FCharacterNetworkSerializationPackedBits.OuterSingleton;
}

// operator= @ 14726d830

FCharacterNetworkSerializationPackedBits * __thiscall
FCharacterNetworkSerializationPackedBits::operator=
          (FCharacterNetworkSerializationPackedBits *this,
          FCharacterNetworkSerializationPackedBits *param_1)

{
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ForElementType<TObjectPtr<UObject>_> FVar5;
  ForElementType<FName> _Dst;
  ForElementType<UE::Net::FNetToken> _Dst_00;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForElementType<UE::Net::FNetToken> _Src;
  ForElementType<FName> _Src_00;
  ForElementType<TObjectPtr<UObject>_> FVar7;
  
  if (this != param_1) {
    TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
    Assign<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              (&this->DataBits,&param_1->DataBits);
    FVar7 = (param_1->PackageMapExports).References.AllocatorInstance.SecondaryData;
    piVar2 = &(this->PackageMapExports).References.ArrayMax;
    iVar3 = (param_1->PackageMapExports).References.ArrayNum;
    iVar4 = *piVar2;
    if (FVar7 == (ForElementType<TObjectPtr<UObject>_>)0x0) {
      FVar7 = (ForElementType<TObjectPtr<UObject>_>)&param_1->PackageMapExports;
    }
    (this->PackageMapExports).References.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
                (8,8,iVar3,iVar4,(ForElementType<TObjectPtr<UObject>_> *)&this->PackageMapExports,
                 iVar3,piVar2);
      FVar5 = (this->PackageMapExports).References.AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<TObjectPtr<UObject>_>)0x0) {
        FVar5 = (ForElementType<TObjectPtr<UObject>_>)&this->PackageMapExports;
      }
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((void *)FVar5,(TObjectPtr<UObject> *)FVar7,iVar3);
    }
  }
  pTVar1 = &(param_1->PackageMapExports).Names;
  pTVar6 = &(this->PackageMapExports).Names;
  if (pTVar6 != pTVar1) {
    iVar3 = (param_1->PackageMapExports).Names.ArrayNum;
    piVar2 = &(this->PackageMapExports).Names.ArrayMax;
    _Src_00 = (param_1->PackageMapExports).Names.AllocatorInstance.SecondaryData;
    iVar4 = *piVar2;
    (this->PackageMapExports).Names.ArrayNum = iVar3;
    if (_Src_00 == (ForElementType<FName>)0x0) {
      _Src_00 = (ForElementType<FName>)pTVar1;
    }
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                (8,4,iVar3,iVar4,&pTVar6->AllocatorInstance,iVar3,piVar2);
      _Dst = (this->PackageMapExports).Names.AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<FName>)0x0) {
          _Dst = (ForElementType<FName>)pTVar6;
        }
        memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar3 << 3);
      }
    }
  }
  if (this != param_1) {
    _Src = (param_1->NetTokensPendingExport).AllocatorInstance.SecondaryData;
    piVar2 = &(this->NetTokensPendingExport).ArrayMax;
    iVar3 = (param_1->NetTokensPendingExport).ArrayNum;
    if (_Src == (ForElementType<UE::Net::FNetToken>)0x0) {
      _Src = (ForElementType<UE::Net::FNetToken>)&param_1->NetTokensPendingExport;
    }
    (this->NetTokensPendingExport).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                (4,4,iVar3,*piVar2,&(this->NetTokensPendingExport).AllocatorInstance,iVar3,piVar2);
      _Dst_00 = (this->NetTokensPendingExport).AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst_00 == (ForElementType<UE::Net::FNetToken>)0x0) {
          _Dst_00 = (ForElementType<UE::Net::FNetToken>)&this->NetTokensPendingExport;
        }
        memcpy((void *)_Dst_00,(void *)_Src,(longlong)iVar3 << 2);
      }
    }
  }
  this->SavedPackageMap = param_1->SavedPackageMap;
  return this;
}

// NetSerialize @ 147844360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCharacterNetworkSerializationPackedBits::NetSerialize
          (FCharacterNetworkSerializationPackedBits *this,FArchive *param_1,UPackageMap *param_2,
          bool *param_3)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FNetTokenExportContext *this_00;
  ForElementType<unsigned_int> FVar8;
  ForElementType<UE::Net::FNetToken> FVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uStack_2c;
  TArrayView<UE::Net::FNetToken_const_,int> local_28;
  
  uVar2 = (this->DataBits).NumBits;
  this->SavedPackageMap = param_2;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1);
  if ((uint)CharacterMovementCVars::NetPackedMovementMaxBits < uVar2) {
    if (1 < (byte)LogNetPlayerMovement._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPlayerMovement);
    }
    return false;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if ((((param_1->field_0x28 & 4) != 0) && ((this->NetTokensPendingExport).ArrayNum != 0)) &&
       (this_00 = UE::Net::FNetTokenExportContext::GetNetTokenExportContext(param_1),
       this_00 != (FNetTokenExportContext *)0x0)) {
      FVar9 = (this->NetTokensPendingExport).AllocatorInstance.SecondaryData;
      iVar7 = (this->NetTokensPendingExport).ArrayNum;
      if (FVar9 == (ForElementType<UE::Net::FNetToken>)0x0) {
        FVar9 = (ForElementType<UE::Net::FNetToken>)&this->NetTokensPendingExport;
      }
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_28._12_4_ = uStack_2c;
      local_28.ArrayNum = iVar7;
      local_28.DataPtr = (FNetToken *)FVar9;
      UE::Net::FNetTokenExportContext::AppendNetTokensPendingExport(this_00,&local_28);
    }
  }
  else {
    (this->DataBits).NumBits = uVar2;
    uVar11 = uVar2 + 0x1f >> 5;
    if (uVar2 + 0x1f >> 5 != 0) {
      if ((this->DataBits).MaxBits + 0x1fU >> 5 < uVar11) {
        TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation((ForElementType<unsigned_int> *)this,0,uVar11,4);
        (this->DataBits).MaxBits = uVar11 << 5;
      }
      FVar3 = (this->DataBits).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)this;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar3;
      }
      memset((void *)FVar8,0,(ulonglong)uVar11 << 2);
      iVar7 = (this->DataBits).NumBits;
      uVar10 = iVar7 >> 0x1f & 0x1f;
      uVar11 = iVar7 + uVar10;
      iVar7 = (uVar11 & 0x1f) - uVar10;
      if (iVar7 != 0) {
        FVar3 = (this->DataBits).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<unsigned_int>)this;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = FVar3;
        }
        puVar1 = (uint *)((longlong)FVar8 + (longlong)((int)uVar11 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
      }
    }
  }
  FVar3 = (this->DataBits).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    this = (FCharacterNetworkSerializationPackedBits *)FVar3;
  }
  (**(code **)(*(longlong *)param_1 + 400))(param_1,this,uVar2);
  *param_3 = true;
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

