// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 9

// StaticClass @ 14a024f00

UClass * __cdecl UWN_Island_ZoneIDMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_Island_ZoneIDMap",
               &Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton,
               StaticRegisterNativesUWN_Island_ZoneIDMap,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_Island_ZoneIDMap>,
               InternalVTableHelperCtorCaller<UWN_Island_ZoneIDMap>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton;
}

// UWN_Island_ZoneIDMap @ 14a02db50

UWN_Island_ZoneIDMap * __thiscall
UWN_Island_ZoneIDMap::UWN_Island_ZoneIDMap(UWN_Island_ZoneIDMap *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IslandID = -1;
  this->TileLength = -1;
  this->_padding_ = (longlong)&___7UWN_Island_ZoneIDMap__6B_;
  (this->ZonePaintIdMapDataPerTile).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZonePaintIdMapDataPerTile).ArrayNum = 0;
  (this->ZonePaintIdMapDataPerTile).ArrayMax = 0;
  (this->ZoneVolumePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneVolumePositions).ArrayNum = 0;
  (this->ZoneVolumePositions).ArrayMax = 0;
  this->TexelWidth = -1;
  this->TexelHeight = -1;
  return this;
}

// UWN_Island_ZoneIDMap @ 14a02dba0

UWN_Island_ZoneIDMap * __thiscall
UWN_Island_ZoneIDMap::UWN_Island_ZoneIDMap(UWN_Island_ZoneIDMap *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IslandID = -1;
  this->TileLength = -1;
  this->_padding_ = (longlong)&___7UWN_Island_ZoneIDMap__6B_;
  (this->ZonePaintIdMapDataPerTile).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZonePaintIdMapDataPerTile).ArrayNum = 0;
  (this->ZonePaintIdMapDataPerTile).ArrayMax = 0;
  (this->ZoneVolumePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneVolumePositions).ArrayNum = 0;
  (this->ZoneVolumePositions).ArrayMax = 0;
  this->TexelWidth = -1;
  this->TexelHeight = -1;
  return this;
}

// ~UWN_Island_ZoneIDMap @ 14a02ec10

void __thiscall UWN_Island_ZoneIDMap::~UWN_Island_ZoneIDMap(UWN_Island_ZoneIDMap *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWN_Island_ZoneIDMap__6B_;
  pFVar1 = (this->ZoneVolumePositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ZonePaintIdMapDataPerTile).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a034b70

UClass * __cdecl UWN_Island_ZoneIDMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_Island_ZoneIDMap",
               &Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton,
               StaticRegisterNativesUWN_Island_ZoneIDMap,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_Island_ZoneIDMap>,
               InternalVTableHelperCtorCaller<UWN_Island_ZoneIDMap>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton;
}

// GetZoneID @ 14a0353d0

int __thiscall
UWN_Island_ZoneIDMap::GetZoneID
          (UWN_Island_ZoneIDMap *this,TVector2<double> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  
  if ((((this->IslandID != -1) && (iVar10 = this->TileLength, iVar10 != -1)) &&
      (iVar6 = this->TexelWidth, iVar6 != -1)) && (this->TexelHeight != -1)) {
    iVar7 = (this->ZonePaintIdMapDataPerTile).ArrayNum;
    if (iVar7 != 0) {
      dVar1 = (this->StartPos).field0_0x0._s_0.X;
      dVar2 = (param_1->field0_0x0)._s_0.X;
      if (dVar1 <= dVar2) {
        dVar3 = (this->StartPos).field0_0x0._s_0.Y;
        dVar4 = (param_1->field0_0x0)._s_0.Y;
        if (((dVar3 <= dVar4) && (dVar2 <= (double)(iVar10 * iVar6) + dVar1)) &&
           ((dVar4 <= (double)(iVar10 * this->TexelHeight) + dVar3 &&
            ((iVar10 = ((int)((dVar4 - dVar3) * (__real_3ff0000000000000 / (double)iVar10)) + -1) *
                       iVar6 + (int)((dVar2 - dVar1) * (__real_3ff0000000000000 / (double)iVar10)),
             -1 < iVar10 && (iVar10 < iVar7)))))) {
          if (iVar10 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              iVar10 = (*pcVar8)();
              return iVar10;
            }
          }
          FVar5 = (this->ZonePaintIdMapDataPerTile).AllocatorInstance.Data[iVar10];
          if (FVar5 != (FScriptContainerElement)0x0) {
            return this->IslandID * 1000 + (uint)(byte)FVar5;
          }
        }
      }
    }
  }
  return 0;
}

// Serialize @ 14a039a70

void __thiscall UWN_Island_ZoneIDMap::Serialize(UWN_Island_ZoneIDMap *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&this->ZonePaintIdMapDataPerTile);
  return;
}

// Serialize @ 14a039ab0

void __thiscall
UWN_Island_ZoneIDMap::Serialize(UWN_Island_ZoneIDMap *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar1);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (pFVar1,&this->ZonePaintIdMapDataPerTile);
  return;
}

// StaticRegisterNativesUWN_Island_ZoneIDMap @ 14a03a7f0

void __cdecl UWN_Island_ZoneIDMap::StaticRegisterNativesUWN_Island_ZoneIDMap(void)

{
  return;
}

