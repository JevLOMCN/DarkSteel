// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 148005a70

UScriptStruct * __cdecl FBandwidthTestGenerator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBandwidthTestGenerator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBandwidthTestGenerator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBandwidthTestGenerator,(UObject *)pUVar1,
                         L"BandwidthTestGenerator");
  }
  return Z_Registration_Info_UScriptStruct_FBandwidthTestGenerator.OuterSingleton;
}

// FillBufferForSize @ 14802fa90

void __thiscall
FBandwidthTestGenerator::FillBufferForSize(FBandwidthTestGenerator *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [40];
  
  piVar1 = &(this->ReplicatedBuffers).ArrayNum;
  iVar9 = *piVar1;
  uVar8 = param_1 / 1000;
  if (iVar9 < (int)uVar8) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar8 - iVar9,(ForAnyElementType *)this,piVar1,
                       &(this->ReplicatedBuffers).ArrayMax);
    DefaultConstructItems<FBandwidthTestItem,int>
              ((this->ReplicatedBuffers).AllocatorInstance.Data + (longlong)iVar7 * 0x10,
               uVar8 - iVar9);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar9) {
      uVar14 = iVar9 - uVar8;
      if ((int)(uVar14 | uVar8) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar14 != 0) {
        TArray<FBandwidthTestItem,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->ReplicatedBuffers,uVar8,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,*piVar1,&(this->ReplicatedBuffers).ArrayMax);
      }
    }
  }
  fVar5 = __real_3bff01fe;
  pFVar13 = (this->ReplicatedBuffers).AllocatorInstance.Data;
  iVar9 = *piVar1;
  pFVar15 = pFVar13 + 8;
  pFVar16 = pFVar13 + (longlong)iVar9 * 0x10;
  while( true ) {
    if (*piVar1 != iVar9) {
      `TCheckedPointerIterator<FBandwidthTestItem,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar13 == pFVar16) break;
    *(undefined4 *)&pFVar15->field_0x0 = 0;
    if (*(int *)(pFVar15 + 4) < 1000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,1000,(ForAnyElementType *)pFVar13,0,(int *)(pFVar15 + 4));
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1000,(ForAnyElementType *)pFVar13,(int *)pFVar15,(int *)(pFVar15 + 4));
    puVar12 = *(undefined1 **)&pFVar13->field_0x0;
    iVar7 = *(int *)&pFVar15->field_0x0;
    puVar3 = puVar12 + iVar7;
    while( true ) {
      if (*(int *)&pFVar15->field_0x0 != iVar7) {
        `TCheckedPointerIterator<unsigned_char,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar12 == puVar3) break;
      uVar8 = rand();
      iVar10 = (int)((float)(uVar8 & 0x7fff) * fVar5);
      uVar11 = 0xfe;
      if (iVar10 < 0xfe) {
        uVar11 = (char)iVar10;
      }
      *puVar12 = uVar11;
      puVar12 = puVar12 + 1;
    }
    pFVar13 = pFVar13 + 0x10;
    pFVar15 = pFVar15 + 0x10;
  }
  if (0 < param_1 % 1000) {
    iVar9 = *piVar1;
    piVar2 = &(this->ReplicatedBuffers).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar2);
    }
    *piVar1 = iVar9 + 1;
    pFVar13 = (this->ReplicatedBuffers).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
    DefaultConstructItems<FBandwidthTestItem,int>(pFVar13,1);
    pFVar15 = pFVar13 + 8;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1 % 1000,(ForAnyElementType *)pFVar13,(int *)pFVar15,(int *)(pFVar13 + 0xc)
              );
    puVar12 = *(undefined1 **)&pFVar13->field_0x0;
    iVar9 = *(int *)&pFVar15->field_0x0;
    puVar3 = puVar12 + iVar9;
    while( true ) {
      if (*(int *)&pFVar15->field_0x0 != iVar9) {
        `TCheckedPointerIterator<unsigned_char,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_68);
      }
      if (puVar12 == puVar3) break;
      uVar8 = rand();
      iVar7 = (int)((float)(uVar8 & 0x7fff) * fVar5);
      uVar11 = 0xfe;
      if (iVar7 < 0xfe) {
        uVar11 = (char)iVar7;
      }
      *puVar12 = uVar11;
      puVar12 = puVar12 + 1;
    }
  }
  return;
}

// NetDeltaSerialize @ 1480444c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FBandwidthTestGenerator::NetDeltaSerialize
          (FBandwidthTestGenerator *this,FNetDeltaSerializeInfo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  LARGE_INTEGER local_res10;
  
  if (param_1->Writer != (FBitWriter *)0x0) {
    if (0.0 < this->SpikePeriodInSec) {
      QueryPerformanceCounter(&local_res10);
      if ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000 < this->TimeForNextSpike) {
        return true;
      }
      OnSpikePeriod(this);
    }
    pFVar2 = (this->ReplicatedBuffers).AllocatorInstance.Data;
    iVar1 = (this->ReplicatedBuffers).ArrayNum;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ReplicatedBuffers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FBandwidthTestItem,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar2 == pFVar3) break;
      (**(code **)(param_1->Writer->_padding_ + 0x188))
                (param_1->Writer,*(undefined8 *)pFVar2,*(undefined4 *)(pFVar2 + 8));
      pFVar2 = pFVar2 + 0x10;
    }
  }
  return true;
}

// OnSpikePeriod @ 148048120

void __thiscall FBandwidthTestGenerator::OnSpikePeriod(FBandwidthTestGenerator *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (0.0 < this->SpikePeriodInSec) {
    QueryPerformanceCounter(local_res8);
    this->TimeForNextSpike =
         (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000 + this->SpikePeriodInSec;
    return;
  }
  this->TimeForNextSpike = 0.0;
  return;
}

