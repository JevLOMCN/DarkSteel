// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FLevelInstanceID @ 147e548d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelInstanceID * __thiscall
FLevelInstanceID::FLevelInstanceID
          (FLevelInstanceID *this,ULevelInstanceSubsystem *param_1,ILevelInstanceInterface *param_2)

{
  FActorContainerID *pFVar1;
  FString *pFVar2;
  FName *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  AActor *this_01;
  UClass *pUVar8;
  ILevelInstanceInterface *pIVar9;
  ULevel *pUVar10;
  AActor *this_02;
  FLevelInstanceID *pFVar11;
  ulong64 uVar12;
  UObject *this_03;
  UWorld *this_04;
  UPackage *pUVar13;
  FString *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  int iVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  void **local_res20;
  ILevelInstanceInterface *local_a8;
  ILevelInstanceInterface *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FGuid local_48;
  
  pFVar1 = &this->ContainerID;
  this->Hash = 0;
  pFVar2 = &this->PackageShortName;
  this_00 = &this->ActorName;
  (pFVar1->Guid).A = 0;
  (pFVar1->Guid).B = 0;
  (this->ContainerID).Guid.C = 0;
  (this->ContainerID).Guid.D = 0;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageShortName).Data.ArrayNum = 0;
  (this->PackageShortName).Data.ArrayMax = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  this_01 = CastChecked<AActor,ILevelInstanceInterface>(param_2);
  local_res20 = &local_98;
  this_02 = this_01;
  if (this_01 != (AActor *)0x0) {
    pUVar8 = Z_Construct_UClass_ULevelInstanceInterface_NoRegister();
    pIVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar8);
    if ((pIVar9 != (ILevelInstanceInterface *)0x0) &&
       (local_a8 = pIVar9,
       bVar6 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLevelInstanceID::FLevelInstanceID'::__l2::<lambda_1>,bool,ILevelInstanceInterface_*>
               ::Call(&local_res20,&local_a8), !bVar6)) goto LAB_147e549d4;
  }
  do {
    pUVar10 = AActor::GetLevel(this_02);
    pIVar9 = ULevelInstanceSubsystem::GetOwningLevelInstance(param_1,pUVar10);
    if ((pIVar9 == (ILevelInstanceInterface *)0x0) ||
       (this_02 = (AActor *)(**(code **)((longlong)*pIVar9 + 8))(pIVar9), this_02 == (AActor *)0x0))
    {
LAB_147e549b6:
      this_02 = (AActor *)0x0;
      if (pIVar9 == (ILevelInstanceInterface *)0x0) break;
    }
    else {
      pUVar8 = Z_Construct_UClass_AActor_NoRegister();
      iVar17 = (int)pUVar8->_padding_;
      if ((*(int *)(this_02->_padding_ + 0x38) < iVar17) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
          &pUVar8->_padding_)) goto LAB_147e549b6;
    }
    local_a0 = pIVar9;
    bVar6 = UE::Core::Private::Function::
            TFunctionRefCaller<`FLevelInstanceID::FLevelInstanceID'::__l2::<lambda_1>,bool,ILevelInstanceInterface_*>
            ::Call(&local_res20,&local_a0);
  } while (bVar6);
LAB_147e549d4:
  uVar12 = 0;
  pwVar18 = L"";
  if (((int)local_90 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Guids.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                         ,0xa5,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FLevelInstanceID *)(*pcVar4)();
    return pFVar11;
  }
  cVar7 = (**(code **)(this_01->_padding_ + 0x200))(this_01);
  if (cVar7 != '\0') {
    uVar5 = *(undefined4 *)((longlong)&this_01->_padding_ + 4);
    this_00->ComparisonIndex = (FNameEntryId)*(undefined4 *)&this_01->_padding_;
    this_00->Number = uVar5;
    ::FName::ToString(this_00,&local_78);
    iVar17 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar17 = 0;
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar15.Data = local_78.Data.AllocatorInstance.Data;
    }
    uVar12 = CityHash64((char *)FVar15.Data,iVar17 * 2);
    pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
    this_03 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar8);
    if (this_03 != (UObject *)0x0) {
      this_04 = AActor::GetWorld(this_01);
      bVar6 = UWorld::IsGameWorld(this_04);
      if (bVar6) {
        pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_03);
        pFVar14 = FPackageName::GetShortName(&local_58,pUVar13);
        pFVar14 = UWorld::RemovePIEPrefix(&local_68,pFVar14,(int *)0x0);
        if (pFVar2 != pFVar14) {
          pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pFVar2->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
          (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->PackageShortName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
          (this->PackageShortName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
          (pFVar14->Data).ArrayNum = 0;
          (pFVar14->Data).ArrayMax = 0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        iVar17 = (this->PackageShortName).Data.ArrayNum;
        if (iVar17 == 0) {
          uVar16 = 0;
        }
        else {
          pwVar18 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
          uVar16 = iVar17 * 2 - 2;
        }
        uVar12 = CityHash64WithSeed((char *)pwVar18,uVar16,uVar12);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  iVar17 = (int)local_90 + -1;
  (pFVar1->Guid).A = 0;
  (pFVar1->Guid).B = 0;
  (this->ContainerID).Guid.C = 0;
  (this->ContainerID).Guid.D = 0;
  if (-1 < iVar17) {
    lVar19 = (longlong)iVar17 << 4;
    while( true ) {
      if (((int)local_90 <= iVar17) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FLevelInstanceID *)(*pcVar4)();
        return pFVar11;
      }
      FGuid::Combine(&local_48,&pFVar1->Guid,(FGuid *)((longlong)local_98 + lVar19));
      lVar19 = lVar19 + -0x10;
      iVar17 = iVar17 + -1;
      (pFVar1->Guid).A = local_48.A;
      (pFVar1->Guid).B = local_48.B;
      (this->ContainerID).Guid.C = local_48.C;
      (this->ContainerID).Guid.D = local_48.D;
      if (iVar17 < 0) break;
    }
  }
  uVar12 = CityHash64WithSeed((char *)pFVar1,0x10,uVar12);
  this->Hash = uVar12;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return this;
}

// operator= @ 147e58440

FLevelInstanceID * __thiscall
FLevelInstanceID::operator=(FLevelInstanceID *this,FLevelInstanceID *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar1 = &param_1->PackageShortName;
  this->Hash = param_1->Hash;
  pFVar2 = &this->PackageShortName;
  uVar4 = (param_1->ContainerID).Guid.B;
  uVar5 = (param_1->ContainerID).Guid.C;
  uVar6 = (param_1->ContainerID).Guid.D;
  (this->ContainerID).Guid.A = (param_1->ContainerID).Guid.A;
  (this->ContainerID).Guid.B = uVar4;
  (this->ContainerID).Guid.C = uVar5;
  (this->ContainerID).Guid.D = uVar6;
  this->ActorName = param_1->ActorName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PackageShortName).Data.ArrayNum = (param_1->PackageShortName).Data.ArrayNum;
    (this->PackageShortName).Data.ArrayMax = (param_1->PackageShortName).Data.ArrayMax;
    (param_1->PackageShortName).Data.ArrayNum = 0;
    (param_1->PackageShortName).Data.ArrayMax = 0;
  }
  return this;
}

// operator== @ 147e58be0

bool __thiscall FLevelInstanceID::operator==(FLevelInstanceID *this,FLevelInstanceID *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (((this->Hash == param_1->Hash) &&
      ((((this->ContainerID).Guid.D == (param_1->ContainerID).Guid.D &&
        (this->ContainerID).Guid.C == (param_1->ContainerID).Guid.C) &&
       (this->ContainerID).Guid.B == (param_1->ContainerID).Guid.B) &&
       (this->ContainerID).Guid.A == (param_1->ContainerID).Guid.A)) &&
     (this->ActorName == param_1->ActorName)) {
    iVar2 = (this->PackageShortName).Data.ArrayNum;
    iVar1 = (param_1->PackageShortName).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return true;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->PackageShortName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->PackageShortName).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = iVar2 + iVar1 == 1;
    }
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// operator() @ 147e58d10

bool __thiscall
`FLevelInstanceID::FLevelInstanceID'::__l2::<lambda_1>::operator()
          (void *this,ILevelInstanceInterface *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar2 = *(ForAnyElementType **)this;
  pFVar9 = (FScriptContainerElement *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  if ((pFVar2->Data <= pFVar9) &&
     (pFVar9 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  iVar8 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar8 + 1;
  uVar5 = *(undefined8 *)(pFVar9 + 8);
  pFVar3 = pFVar2->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10) = *(undefined8 *)pFVar9;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10 + 8) = uVar5;
  return true;
}

