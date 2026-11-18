// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 14

// Add @ 146bf4b60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::Add
          (TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *this,
          TSharedRef<FMediaAudioSampleSink,1> *param_1,UMediaPlayer *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMediaAudioSampleSink *pFVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  atomic<int> aVar9;
  int iVar10;
  FMediaAudioSampleSink *pFVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  FMediaAudioSampleSink *pFVar15;
  FMediaAudioSampleSink *pFVar16;
  bool bVar17;
  FMediaSampleSinkEventData local_res20;
  FMediaAudioSampleSink *local_58;
  TReferenceControllerBase<1> *local_50;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = (this->Sinks).AllocatorInstance.Data;
  iVar10 = (this->Sinks).ArrayNum;
  pFVar14 = pFVar12;
  do {
    if (pFVar14 == pFVar12 + (longlong)iVar10 * 0x10) {
      iVar10 = -1;
LAB_146bf4c77:
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      if (iVar10 == -1) {
        local_58 = param_1->Object;
        local_50 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->WeakReferenceCount = (atomic<int>)((int)local_50->WeakReferenceCount + 1);
          UNLOCK();
        }
        pFVar12 = (this->Sinks).AllocatorInstance.Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar12 + (longlong)(this->Sinks).ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Sinks).ArrayNum;
        piVar2 = &(this->Sinks).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)this,piVar2);
        }
        (this->Sinks).ArrayNum = iVar10 + 1;
        pFVar12 = (this->Sinks).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        *(FMediaAudioSampleSink **)pFVar12 = local_58;
        *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_50;
        local_res20.field0_0x0 = (FMediaSampleSinkEventData_u_0)param_2;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&param_1->Object->field_0x8,Attached,&local_res20);
      }
      return;
    }
    pFVar16 = (FMediaAudioSampleSink *)0x0;
    pFVar11 = *(FMediaAudioSampleSink **)(pFVar14 + 8);
    pFVar15 = pFVar11;
    if (pFVar11 != (FMediaAudioSampleSink *)0x0) {
      iVar7 = *(int *)&pFVar11->field_0x8;
      do {
        pFVar15 = pFVar16;
        if (iVar7 == 0) goto LAB_146bf4c15;
        LOCK();
        iVar8 = *(int *)&pFVar11->field_0x8;
        bVar17 = iVar7 == iVar8;
        if (bVar17) {
          *(int *)&pFVar11->field_0x8 = iVar7 + 1;
          iVar8 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar8;
      } while (!bVar17);
      pFVar16 = *(FMediaAudioSampleSink **)pFVar14;
      pFVar15 = pFVar11;
    }
LAB_146bf4c15:
    pTVar13 = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar4->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar9 = pTVar4->SharedReferenceCount;
        bVar17 = aVar3 == aVar9;
        if (bVar17) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar9 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar9;
      } while (!bVar17);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar15);
    pFVar11 = pFVar5;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pFVar11 = (FMediaAudioSampleSink *)0x0;
    }
    if (pFVar16 == pFVar11) {
      iVar10 = (int)((longlong)pFVar14 - (longlong)pFVar12 >> 4);
      goto LAB_146bf4c77;
    }
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}

// Add @ 146bf4df0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Add
          (TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          TSharedRef<TMediaSampleSink<IMediaBinarySample>,1> *param_1,UMediaPlayer *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TMediaSampleSink<IMediaBinarySample> *pTVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  atomic<int> aVar9;
  int iVar10;
  TMediaSampleSink<IMediaBinarySample> *pTVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  TMediaSampleSink<IMediaBinarySample> *pTVar15;
  TMediaSampleSink<IMediaBinarySample> *pTVar16;
  bool bVar17;
  FMediaSampleSinkEventData local_res20;
  TMediaSampleSink<IMediaBinarySample> *local_58;
  TReferenceControllerBase<1> *local_50;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = (this->Sinks).AllocatorInstance.Data;
  iVar10 = (this->Sinks).ArrayNum;
  pFVar14 = pFVar12;
  do {
    if (pFVar14 == pFVar12 + (longlong)iVar10 * 0x10) {
      iVar10 = -1;
LAB_146bf4f07:
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      if (iVar10 == -1) {
        local_58 = param_1->Object;
        local_50 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->WeakReferenceCount = (atomic<int>)((int)local_50->WeakReferenceCount + 1);
          UNLOCK();
        }
        pFVar12 = (this->Sinks).AllocatorInstance.Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar12 + (longlong)(this->Sinks).ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Sinks).ArrayNum;
        piVar2 = &(this->Sinks).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)this,piVar2);
        }
        (this->Sinks).ArrayNum = iVar10 + 1;
        pFVar12 = (this->Sinks).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        *(TMediaSampleSink<IMediaBinarySample> **)pFVar12 = local_58;
        *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_50;
        local_res20.field0_0x0 = (FMediaSampleSinkEventData_u_0)param_2;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&param_1->Object->MediaSampleSinkEvent,Attached,&local_res20);
      }
      return;
    }
    pTVar16 = (TMediaSampleSink<IMediaBinarySample> *)0x0;
    pTVar11 = *(TMediaSampleSink<IMediaBinarySample> **)(pFVar14 + 8);
    pTVar15 = pTVar11;
    if (pTVar11 != (TMediaSampleSink<IMediaBinarySample> *)0x0) {
      iVar7 = *(int *)&pTVar11->MediaSampleSinkEvent;
      do {
        pTVar15 = pTVar16;
        if (iVar7 == 0) goto LAB_146bf4ea5;
        LOCK();
        iVar8 = *(int *)&pTVar11->MediaSampleSinkEvent;
        bVar17 = iVar7 == iVar8;
        if (bVar17) {
          *(int *)&pTVar11->MediaSampleSinkEvent = iVar7 + 1;
          iVar8 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar8;
      } while (!bVar17);
      pTVar16 = *(TMediaSampleSink<IMediaBinarySample> **)pFVar14;
      pTVar15 = pTVar11;
    }
LAB_146bf4ea5:
    pTVar13 = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar4->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar9 = pTVar4->SharedReferenceCount;
        bVar17 = aVar3 == aVar9;
        if (bVar17) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar9 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar9;
      } while (!bVar17);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar15);
    pTVar11 = pTVar5;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11 = (TMediaSampleSink<IMediaBinarySample> *)0x0;
    }
    if (pTVar16 == pTVar11) {
      iVar10 = (int)((longlong)pFVar14 - (longlong)pFVar12 >> 4);
      goto LAB_146bf4f07;
    }
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}

// Add @ 146bf5080

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Add
          (TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          TSharedRef<TMediaSampleSink<IMediaOverlaySample>,1> *param_1,UMediaPlayer *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TMediaSampleSink<IMediaOverlaySample> *pTVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  atomic<int> aVar9;
  int iVar10;
  TMediaSampleSink<IMediaOverlaySample> *pTVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  TMediaSampleSink<IMediaOverlaySample> *pTVar15;
  TMediaSampleSink<IMediaOverlaySample> *pTVar16;
  bool bVar17;
  FMediaSampleSinkEventData local_res20;
  TMediaSampleSink<IMediaOverlaySample> *local_58;
  TReferenceControllerBase<1> *local_50;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = (this->Sinks).AllocatorInstance.Data;
  iVar10 = (this->Sinks).ArrayNum;
  pFVar14 = pFVar12;
  do {
    if (pFVar14 == pFVar12 + (longlong)iVar10 * 0x10) {
      iVar10 = -1;
LAB_146bf5197:
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      if (iVar10 == -1) {
        local_58 = param_1->Object;
        local_50 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->WeakReferenceCount = (atomic<int>)((int)local_50->WeakReferenceCount + 1);
          UNLOCK();
        }
        pFVar12 = (this->Sinks).AllocatorInstance.Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar12 + (longlong)(this->Sinks).ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Sinks).ArrayNum;
        piVar2 = &(this->Sinks).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)this,piVar2);
        }
        (this->Sinks).ArrayNum = iVar10 + 1;
        pFVar12 = (this->Sinks).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        *(TMediaSampleSink<IMediaOverlaySample> **)pFVar12 = local_58;
        *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_50;
        local_res20.field0_0x0 = (FMediaSampleSinkEventData_u_0)param_2;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&param_1->Object->MediaSampleSinkEvent,Attached,&local_res20);
      }
      return;
    }
    pTVar16 = (TMediaSampleSink<IMediaOverlaySample> *)0x0;
    pTVar11 = *(TMediaSampleSink<IMediaOverlaySample> **)(pFVar14 + 8);
    pTVar15 = pTVar11;
    if (pTVar11 != (TMediaSampleSink<IMediaOverlaySample> *)0x0) {
      iVar7 = *(int *)&pTVar11->MediaSampleSinkEvent;
      do {
        pTVar15 = pTVar16;
        if (iVar7 == 0) goto LAB_146bf5135;
        LOCK();
        iVar8 = *(int *)&pTVar11->MediaSampleSinkEvent;
        bVar17 = iVar7 == iVar8;
        if (bVar17) {
          *(int *)&pTVar11->MediaSampleSinkEvent = iVar7 + 1;
          iVar8 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar8;
      } while (!bVar17);
      pTVar16 = *(TMediaSampleSink<IMediaOverlaySample> **)pFVar14;
      pTVar15 = pTVar11;
    }
LAB_146bf5135:
    pTVar13 = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar4->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar9 = pTVar4->SharedReferenceCount;
        bVar17 = aVar3 == aVar9;
        if (bVar17) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar9 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar9;
      } while (!bVar17);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar15);
    pTVar11 = pTVar5;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11 = (TMediaSampleSink<IMediaOverlaySample> *)0x0;
    }
    if (pTVar16 == pTVar11) {
      iVar10 = (int)((longlong)pFVar14 - (longlong)pFVar12 >> 4);
      goto LAB_146bf5197;
    }
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}

// Add @ 146bf5310

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Add
          (TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TSharedRef<TMediaSampleSink<IMediaTextureSample>,1> *param_1,UMediaPlayer *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TMediaSampleSink<IMediaTextureSample> *pTVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  atomic<int> aVar9;
  int iVar10;
  TMediaSampleSink<IMediaTextureSample> *pTVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  TMediaSampleSink<IMediaTextureSample> *pTVar15;
  TMediaSampleSink<IMediaTextureSample> *pTVar16;
  bool bVar17;
  FMediaSampleSinkEventData local_res20;
  TMediaSampleSink<IMediaTextureSample> *local_58;
  TReferenceControllerBase<1> *local_50;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = (this->Sinks).AllocatorInstance.Data;
  iVar10 = (this->Sinks).ArrayNum;
  pFVar14 = pFVar12;
  do {
    if (pFVar14 == pFVar12 + (longlong)iVar10 * 0x10) {
      iVar10 = -1;
LAB_146bf5427:
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      if (iVar10 == -1) {
        local_58 = param_1->Object;
        local_50 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->WeakReferenceCount = (atomic<int>)((int)local_50->WeakReferenceCount + 1);
          UNLOCK();
        }
        pFVar12 = (this->Sinks).AllocatorInstance.Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar12 + (longlong)(this->Sinks).ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Sinks).ArrayNum;
        piVar2 = &(this->Sinks).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)this,piVar2);
        }
        (this->Sinks).ArrayNum = iVar10 + 1;
        pFVar12 = (this->Sinks).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        *(TMediaSampleSink<IMediaTextureSample> **)pFVar12 = local_58;
        *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_50;
        local_res20.field0_0x0 = (FMediaSampleSinkEventData_u_0)param_2;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&param_1->Object->MediaSampleSinkEvent,Attached,&local_res20);
      }
      return;
    }
    pTVar16 = (TMediaSampleSink<IMediaTextureSample> *)0x0;
    pTVar11 = *(TMediaSampleSink<IMediaTextureSample> **)(pFVar14 + 8);
    pTVar15 = pTVar11;
    if (pTVar11 != (TMediaSampleSink<IMediaTextureSample> *)0x0) {
      iVar7 = *(int *)&pTVar11->MediaSampleSinkEvent;
      do {
        pTVar15 = pTVar16;
        if (iVar7 == 0) goto LAB_146bf53c5;
        LOCK();
        iVar8 = *(int *)&pTVar11->MediaSampleSinkEvent;
        bVar17 = iVar7 == iVar8;
        if (bVar17) {
          *(int *)&pTVar11->MediaSampleSinkEvent = iVar7 + 1;
          iVar8 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar8;
      } while (!bVar17);
      pTVar16 = *(TMediaSampleSink<IMediaTextureSample> **)pFVar14;
      pTVar15 = pTVar11;
    }
LAB_146bf53c5:
    pTVar13 = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar4->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar9 = pTVar4->SharedReferenceCount;
        bVar17 = aVar3 == aVar9;
        if (bVar17) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar9 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar9;
      } while (!bVar17);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar15);
    pTVar11 = pTVar5;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11 = (TMediaSampleSink<IMediaTextureSample> *)0x0;
    }
    if (pTVar16 == pTVar11) {
      iVar10 = (int)((longlong)pFVar14 - (longlong)pFVar12 >> 4);
      goto LAB_146bf5427;
    }
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}

// Cleanup @ 146bf6520

void __thiscall
TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::Cleanup
          (TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *this)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar8 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 << 4;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Sinks).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (this->Sinks).AllocatorInstance.Data;
      if (((*(longlong *)(pFVar7 + lVar10) == 0) ||
          (lVar2 = *(longlong *)(pFVar7 + lVar10 + 8), lVar2 == 0)) || (*(int *)(lVar2 + 8) < 1)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Sinks).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = (this->Sinks).AllocatorInstance.Data + lVar10;
        plVar3 = *(longlong **)(pFVar7 + 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        iVar9 = ~uVar8 + (this->Sinks).ArrayNum;
        if (iVar9 != 0) {
          memmove(pFVar7,pFVar7 + 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// Enqueue @ 146bf91b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Enqueue
          (TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TSharedRef<IMediaTextureSample,1> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  atomic<int> aVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  longlong lVar16;
  FMediaSampleSinkEventData local_res18;
  
  bVar5 = false;
  uVar13 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar16 = (longlong)(int)uVar13 << 4;
    bVar5 = false;
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar13 < (this->Sinks).ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar12 = (this->Sinks).AllocatorInstance.Data;
      pTVar14 = *(TReferenceControllerBase<1> **)(pFVar12 + lVar16 + 8);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bf9266:
        uVar10 = 0;
        if ((int)uVar13 < (this->Sinks).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar12 = (this->Sinks).AllocatorInstance.Data + lVar16;
        plVar2 = *(longlong **)(pFVar12 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar11 = (this->Sinks).ArrayNum + ~uVar13;
        if (iVar11 != 0) {
          memmove(pFVar12,pFVar12 + 0x10,(longlong)iVar11 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar14->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bf9266;
          }
          LOCK();
          aVar9 = pTVar14->SharedReferenceCount;
          bVar6 = aVar4 == aVar9;
          if (bVar6) {
            pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar9 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar9;
        } while (!bVar6);
        plVar2 = *(longlong **)(pFVar12 + lVar16);
        if (plVar2 == (longlong *)0x0) goto LAB_146bf9266;
        cVar8 = (**(code **)(*plVar2 + 0x10))(plVar2,1);
        if (cVar8 == '\0') {
          bVar5 = true;
        }
        else {
          (**(code **)*plVar2)(plVar2,param_1);
          TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(plVar2 + 1,SampleDataUpdate,&local_res18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      lVar16 = lVar16 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  return !bVar5;
}

// Flush @ 146bfc120

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::Flush
          (TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *this,UMediaPlayer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  longlong lVar13;
  FMediaSampleSinkEventData_u_0 local_res8;
  FMediaSampleSinkEventData_u_0 local_res10;
  
  uVar10 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 << 4;
    local_res10 = (FMediaSampleSinkEventData_u_0)param_1;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->Sinks).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->Sinks).AllocatorInstance.Data;
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar9 + lVar13 + 8);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bfc1d5:
        uVar7 = 0;
        if ((int)uVar10 < (this->Sinks).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->Sinks).AllocatorInstance.Data + lVar13;
        plVar2 = *(longlong **)(pFVar9 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar8 = (this->Sinks).ArrayNum + ~uVar10;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar8 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar11->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bfc1d5;
          }
          LOCK();
          aVar6 = pTVar11->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        plVar2 = *(longlong **)(pFVar9 + lVar13);
        if (plVar2 == (longlong *)0x0) goto LAB_146bfc1d5;
        (**(code **)(*plVar2 + 0x18))(plVar2);
        local_res8 = local_res10;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(plVar2 + 1,FlushWasRequested,(FMediaSampleSinkEventData *)&local_res8.Attached);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      lVar13 = lVar13 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// Flush @ 146bfc300

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Flush
          (TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          UMediaPlayer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  longlong lVar13;
  FMediaSampleSinkEventData_u_0 local_res8;
  FMediaSampleSinkEventData_u_0 local_res10;
  
  uVar10 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 << 4;
    local_res10 = (FMediaSampleSinkEventData_u_0)param_1;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->Sinks).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->Sinks).AllocatorInstance.Data;
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar9 + lVar13 + 8);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bfc3b5:
        uVar7 = 0;
        if ((int)uVar10 < (this->Sinks).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->Sinks).AllocatorInstance.Data + lVar13;
        plVar2 = *(longlong **)(pFVar9 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar8 = (this->Sinks).ArrayNum + ~uVar10;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar8 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar11->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bfc3b5;
          }
          LOCK();
          aVar6 = pTVar11->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        plVar2 = *(longlong **)(pFVar9 + lVar13);
        if (plVar2 == (longlong *)0x0) goto LAB_146bfc3b5;
        (**(code **)(*plVar2 + 0x18))(plVar2);
        local_res8 = local_res10;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(plVar2 + 1,FlushWasRequested,(FMediaSampleSinkEventData *)&local_res8.Attached);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      lVar13 = lVar13 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// Flush @ 146bfc4e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Flush
          (TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          UMediaPlayer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  longlong lVar13;
  FMediaSampleSinkEventData_u_0 local_res8;
  FMediaSampleSinkEventData_u_0 local_res10;
  
  uVar10 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 << 4;
    local_res10 = (FMediaSampleSinkEventData_u_0)param_1;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->Sinks).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->Sinks).AllocatorInstance.Data;
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar9 + lVar13 + 8);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bfc595:
        uVar7 = 0;
        if ((int)uVar10 < (this->Sinks).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->Sinks).AllocatorInstance.Data + lVar13;
        plVar2 = *(longlong **)(pFVar9 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar8 = (this->Sinks).ArrayNum + ~uVar10;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar8 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar11->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bfc595;
          }
          LOCK();
          aVar6 = pTVar11->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        plVar2 = *(longlong **)(pFVar9 + lVar13);
        if (plVar2 == (longlong *)0x0) goto LAB_146bfc595;
        (**(code **)(*plVar2 + 0x18))(plVar2);
        local_res8 = local_res10;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(plVar2 + 1,FlushWasRequested,(FMediaSampleSinkEventData *)&local_res8.Attached);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      lVar13 = lVar13 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// Flush @ 146bfc6c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Flush
          (TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          UMediaPlayer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  longlong lVar13;
  FMediaSampleSinkEventData_u_0 local_res8;
  FMediaSampleSinkEventData_u_0 local_res10;
  
  uVar10 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 << 4;
    local_res10 = (FMediaSampleSinkEventData_u_0)param_1;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->Sinks).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->Sinks).AllocatorInstance.Data;
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar9 + lVar13 + 8);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bfc775:
        uVar7 = 0;
        if ((int)uVar10 < (this->Sinks).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->Sinks).AllocatorInstance.Data + lVar13;
        plVar2 = *(longlong **)(pFVar9 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar8 = (this->Sinks).ArrayNum + ~uVar10;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar8 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar11->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bfc775;
          }
          LOCK();
          aVar6 = pTVar11->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        plVar2 = *(longlong **)(pFVar9 + lVar13);
        if (plVar2 == (longlong *)0x0) goto LAB_146bfc775;
        (**(code **)(*plVar2 + 0x18))(plVar2);
        local_res8 = local_res10;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(plVar2 + 1,FlushWasRequested,(FMediaSampleSinkEventData *)&local_res8.Attached);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      lVar13 = lVar13 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// ReceiveEvent @ 146c098e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink>::ReceiveEvent
          (TMediaSampleSinks<IMediaAudioSample,FMediaAudioSampleSink> *this,
          EMediaSampleSinkEvent param_1,FMediaSampleSinkEventData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  
  uVar12 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12 << 4;
    do {
      uVar10 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->Sinks).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (this->Sinks).AllocatorInstance.Data;
      pTVar13 = *(TReferenceControllerBase<1> **)(pFVar11 + lVar14 + 8);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c099b4:
        uVar8 = 0;
        if ((int)uVar12 < (this->Sinks).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = (this->Sinks).AllocatorInstance.Data + lVar14;
        plVar2 = *(longlong **)(pFVar11 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar9 = (this->Sinks).ArrayNum + ~uVar12;
        if (iVar9 != 0) {
          memmove(pFVar11,pFVar11 + 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar5 = pTVar13->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146c099b4;
          }
          LOCK();
          aVar7 = pTVar13->SharedReferenceCount;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        lVar3 = *(longlong *)(pFVar11 + lVar14);
        if (lVar3 == 0) goto LAB_146c099b4;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((void *)(lVar3 + 8),param_1,param_2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      lVar14 = lVar14 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// ReceiveEvent @ 146c09ac0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::ReceiveEvent
          (TMediaSampleSinks<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          EMediaSampleSinkEvent param_1,FMediaSampleSinkEventData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  
  uVar12 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12 << 4;
    do {
      uVar10 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->Sinks).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (this->Sinks).AllocatorInstance.Data;
      pTVar13 = *(TReferenceControllerBase<1> **)(pFVar11 + lVar14 + 8);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c09b94:
        uVar8 = 0;
        if ((int)uVar12 < (this->Sinks).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = (this->Sinks).AllocatorInstance.Data + lVar14;
        plVar2 = *(longlong **)(pFVar11 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar9 = (this->Sinks).ArrayNum + ~uVar12;
        if (iVar9 != 0) {
          memmove(pFVar11,pFVar11 + 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar5 = pTVar13->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146c09b94;
          }
          LOCK();
          aVar7 = pTVar13->SharedReferenceCount;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        lVar3 = *(longlong *)(pFVar11 + lVar14);
        if (lVar3 == 0) goto LAB_146c09b94;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((void *)(lVar3 + 8),param_1,param_2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      lVar14 = lVar14 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// ReceiveEvent @ 146c09ca0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::ReceiveEvent
          (TMediaSampleSinks<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          EMediaSampleSinkEvent param_1,FMediaSampleSinkEventData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  
  uVar12 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12 << 4;
    do {
      uVar10 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->Sinks).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (this->Sinks).AllocatorInstance.Data;
      pTVar13 = *(TReferenceControllerBase<1> **)(pFVar11 + lVar14 + 8);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c09d74:
        uVar8 = 0;
        if ((int)uVar12 < (this->Sinks).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = (this->Sinks).AllocatorInstance.Data + lVar14;
        plVar2 = *(longlong **)(pFVar11 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar9 = (this->Sinks).ArrayNum + ~uVar12;
        if (iVar9 != 0) {
          memmove(pFVar11,pFVar11 + 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar5 = pTVar13->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146c09d74;
          }
          LOCK();
          aVar7 = pTVar13->SharedReferenceCount;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        lVar3 = *(longlong *)(pFVar11 + lVar14);
        if (lVar3 == 0) goto LAB_146c09d74;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((void *)(lVar3 + 8),param_1,param_2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      lVar14 = lVar14 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// ReceiveEvent @ 146c09e80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::ReceiveEvent
          (TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          EMediaSampleSinkEvent param_1,FMediaSampleSinkEventData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  
  uVar12 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12 << 4;
    do {
      uVar10 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->Sinks).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (this->Sinks).AllocatorInstance.Data;
      pTVar13 = *(TReferenceControllerBase<1> **)(pFVar11 + lVar14 + 8);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c09f54:
        uVar8 = 0;
        if ((int)uVar12 < (this->Sinks).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = (this->Sinks).AllocatorInstance.Data + lVar14;
        plVar2 = *(longlong **)(pFVar11 + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        iVar9 = (this->Sinks).ArrayNum + ~uVar12;
        if (iVar9 != 0) {
          memmove(pFVar11,pFVar11 + 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(this->Sinks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Sinks).ArrayNum,&(this->Sinks).ArrayMax);
      }
      else {
        aVar5 = pTVar13->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146c09f54;
          }
          LOCK();
          aVar7 = pTVar13->SharedReferenceCount;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        lVar3 = *(longlong *)(pFVar11 + lVar14);
        if (lVar3 == 0) goto LAB_146c09f54;
        TMulticastDelegate<void___cdecl(enum_EMediaSampleSinkEvent,FMediaSampleSinkEventData_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((void *)(lVar3 + 8),param_1,param_2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      lVar14 = lVar14 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

