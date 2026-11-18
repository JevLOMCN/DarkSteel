// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2ed970

UClass * __cdecl UDatasmithStaticMeshTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshTemplate",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshTemplate,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton;
}

// UDatasmithStaticMeshTemplate @ 14e2f57d0

UDatasmithStaticMeshTemplate * __thiscall
UDatasmithStaticMeshTemplate::UDatasmithStaticMeshTemplate
          (UDatasmithStaticMeshTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshTemplate__6B_;
  *(undefined8 *)&(this->SectionInfoMap).Map = 0;
  *(undefined8 *)&(this->SectionInfoMap).Map.field_0x8 = 0;
  *(undefined8 *)&(this->SectionInfoMap).Map.field_0x20 = 0;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x28 = 0;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x34 = 0;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SectionInfoMap).Map.field_0x40 = 0;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x48 = 0;
  this->LightMapResolution = 0;
  (this->BuildSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildSettings).ArrayNum = 0;
  (this->BuildSettings).ArrayMax = 0;
  (this->StaticMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMaterials).ArrayNum = 0;
  (this->StaticMaterials).ArrayMax = 0;
  this->LightMapCoordinateIndex = -1;
  return this;
}

// UDatasmithStaticMeshTemplate @ 14e2f5850

UDatasmithStaticMeshTemplate * __thiscall
UDatasmithStaticMeshTemplate::UDatasmithStaticMeshTemplate(UDatasmithStaticMeshTemplate *this)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshTemplate__6B_;
  *(undefined8 *)&(this->SectionInfoMap).Map = 0;
  *(undefined8 *)&(this->SectionInfoMap).Map.field_0x8 = 0;
  *(undefined8 *)&(this->SectionInfoMap).Map.field_0x20 = 0;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x28 = 0;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x34 = 0;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SectionInfoMap).Map.field_0x40 = 0;
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x48 = 0;
  this->LightMapResolution = 0;
  (this->BuildSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildSettings).ArrayNum = 0;
  (this->BuildSettings).ArrayMax = 0;
  (this->StaticMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMaterials).ArrayNum = 0;
  (this->StaticMaterials).ArrayMax = 0;
  this->LightMapCoordinateIndex = -1;
  return this;
}

// ~UDatasmithStaticMeshTemplate @ 14e2f64b0

void __thiscall
UDatasmithStaticMeshTemplate::~UDatasmithStaticMeshTemplate(UDatasmithStaticMeshTemplate *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshTemplate__6B_;
  pFVar1 = (this->StaticMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuildSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SectionInfoMap).Map.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SectionInfoMap);
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2fa1d0

bool __thiscall
UDatasmithStaticMeshTemplate::Equals
          (UDatasmithStaticMeshTemplate *this,UDatasmithObjectTemplate *param_1)

{
  FScriptContainerElement FVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UClass *pUVar8;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar8 = StaticClass();
    iVar3 = (int)pUVar8->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar8->_padding_)) {
      if ((this->LightMapCoordinateIndex == (int)param_1[2]._padding_) &&
         (((this->LightMapResolution == *(int *)((longlong)&param_1[2]._padding_ + 4) &&
           (bVar5 = FDatasmithMeshSectionInfoMapTemplate::Equals
                              (&this->SectionInfoMap,
                               (FDatasmithMeshSectionInfoMapTemplate *)(param_1 + 1)), bVar5)) &&
          (iVar3 = (this->BuildSettings).ArrayNum, iVar3 == (int)param_1[3]._padding_)))) {
        uVar9 = 0;
        if (0 < iVar3) {
          lVar11 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar9 < (this->BuildSettings).ArrayNum) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar12 = (this->BuildSettings).AllocatorInstance.Data + lVar11;
            uVar7 = 0;
            if ((int)uVar9 < (int)param_1[3]._padding_) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            FVar1 = *pFVar12;
            pbVar10 = (byte *)(*(longlong *)&param_1[2].bIsActorTemplate + lVar11);
            bVar2 = *pbVar10;
            if (((bVar2 ^ (byte)FVar1) & 1) != 0) {
              return false;
            }
            if (((bVar2 ^ (byte)FVar1) & 2) != 0) {
              return false;
            }
            if (((bVar2 ^ (byte)FVar1) & 4) != 0) {
              return false;
            }
            if (((bVar2 ^ (byte)FVar1) & 8) != 0) {
              return false;
            }
            if (((bVar2 ^ (byte)FVar1) & 0x10) != 0) {
              return false;
            }
            if (((bVar2 ^ (byte)FVar1) & 0x20) != 0) {
              return false;
            }
            if (((bVar2 ^ (byte)FVar1) & 0x40) != 0) {
              return false;
            }
            if (*(int *)(pFVar12 + 4) != *(int *)(pbVar10 + 4)) {
              return false;
            }
            if (*(int *)(pFVar12 + 8) != *(int *)(pbVar10 + 8)) {
              return false;
            }
            if (*(int *)(pFVar12 + 0xc) != *(int *)(pbVar10 + 0xc)) {
              return false;
            }
            uVar9 = uVar9 + 1;
            lVar11 = lVar11 + 0x10;
          } while ((int)uVar9 < (this->BuildSettings).ArrayNum);
        }
        iVar3 = (this->StaticMaterials).ArrayNum;
        if (iVar3 == (int)param_1[3]._padding_) {
          uVar9 = 0;
          if (iVar3 < 1) {
            return true;
          }
          lVar11 = 0;
          while( true ) {
            uVar7 = 0;
            if ((int)uVar9 < (this->StaticMaterials).ArrayNum) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar12 = (this->StaticMaterials).AllocatorInstance.Data;
            uVar7 = 0;
            if ((int)uVar9 < (int)param_1[3]._padding_) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if (*(longlong *)(pFVar12 + lVar11) != *(longlong *)(param_1[3]._padding_ + lVar11)) {
              return false;
            }
            if (*(longlong *)(pFVar12 + lVar11 + 8) !=
                *(longlong *)(param_1[3]._padding_ + 8 + lVar11)) break;
            uVar9 = uVar9 + 1;
            lVar11 = lVar11 + 0x10;
            if ((this->StaticMaterials).ArrayNum <= (int)uVar9) {
              return true;
            }
          }
          return false;
        }
      }
      return false;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fd580

UClass * __cdecl UDatasmithStaticMeshTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshTemplate",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshTemplate,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton;
}

// Load @ 14e2fe1c0

void __thiscall
UDatasmithStaticMeshTemplate::Load(UDatasmithStaticMeshTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithStaticMeshTemplate @ 14e2fee80

void __cdecl UDatasmithStaticMeshTemplate::StaticRegisterNativesUDatasmithStaticMeshTemplate(void)

{
  return;
}

// UpdateObject @ 14e2fff10

UObject * __thiscall
UDatasmithStaticMeshTemplate::UpdateObject
          (UDatasmithStaticMeshTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}

