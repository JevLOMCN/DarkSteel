// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 41

// ~IMediaSamples @ 146bf3ae0

void __thiscall IMediaSamples::~IMediaSamples(IMediaSamples *this)

{
  *this = (IMediaSamples)&___7IMediaSamples__6B_;
  return;
}

// CanReceiveAudioSamples @ 146bf6300

bool __thiscall IMediaSamples::CanReceiveAudioSamples(IMediaSamples *this,uint param_1)

{
  return true;
}

// CanReceiveCaptionSamples @ 146bf6330

bool __thiscall IMediaSamples::CanReceiveCaptionSamples(IMediaSamples *this,uint param_1)

{
  return true;
}

// CanReceiveMetadataSamples @ 146bf6360

bool __thiscall IMediaSamples::CanReceiveMetadataSamples(IMediaSamples *this,uint param_1)

{
  return true;
}

// CanReceiveSubtitleSamples @ 146bf6390

bool __thiscall IMediaSamples::CanReceiveSubtitleSamples(IMediaSamples *this,uint param_1)

{
  return true;
}

// CanReceiveVideoSamples @ 146bf63c0

bool __thiscall IMediaSamples::CanReceiveVideoSamples(IMediaSamples *this,uint param_1)

{
  return true;
}

// DiscardAudioSamples @ 146bf8360

bool __thiscall
IMediaSamples::DiscardAudioSamples
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  return false;
}

// DiscardCaptionSamples @ 146bf8390

bool __thiscall
IMediaSamples::DiscardCaptionSamples
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  return false;
}

// DiscardMetadataSamples @ 146bf8540

bool __thiscall
IMediaSamples::DiscardMetadataSamples
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  return false;
}

// DiscardSubtitleSamples @ 146bf8570

bool __thiscall
IMediaSamples::DiscardSubtitleSamples
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  return false;
}

// DiscardVideoSamples @ 146bf8720

bool __thiscall
IMediaSamples::DiscardVideoSamples
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  return false;
}

// FetchAudio @ 146bf9c10

bool __thiscall
IMediaSamples::FetchAudio
          (IMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaAudioSample,1> *param_2)

{
  return false;
}

// FetchAudio @ 146bf9c20

bool __thiscall
IMediaSamples::FetchAudio
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaAudioSample,1> *param_2)

{
  return false;
}

// FetchBestVideoSampleForTimeRange @ 146bfaa70

EFetchBestSampleResult __thiscall
IMediaSamples::FetchBestVideoSampleForTimeRange
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2,bool param_3,bool param_4)

{
  return NotSupported;
}

// FetchCaption @ 146bfab00

bool __thiscall
IMediaSamples::FetchCaption
          (IMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaOverlaySample,1> *param_2
          )

{
  return false;
}

// FetchCaption @ 146bfab10

bool __thiscall
IMediaSamples::FetchCaption
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  return false;
}

// FetchMetadata @ 146bfae10

bool __thiscall
IMediaSamples::FetchMetadata
          (IMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaBinarySample,1> *param_2)

{
  return false;
}

// FetchMetadata @ 146bfae20

bool __thiscall
IMediaSamples::FetchMetadata
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaBinarySample,1> *param_2)

{
  return false;
}

// FetchSubtitle @ 146bfaeb0

bool __thiscall
IMediaSamples::FetchSubtitle
          (IMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaOverlaySample,1> *param_2
          )

{
  return false;
}

// FetchSubtitle @ 146bfaec0

bool __thiscall
IMediaSamples::FetchSubtitle
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  return false;
}

// FetchVideo @ 146bfb1c0

bool __thiscall
IMediaSamples::FetchVideo
          (IMediaSamples *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaTextureSample,1> *param_2
          )

{
  return false;
}

// FetchVideo @ 146bfb1d0

bool __thiscall
IMediaSamples::FetchVideo
          (IMediaSamples *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2)

{
  return false;
}

// FlushSamples @ 146bfccc0

void __thiscall IMediaSamples::FlushSamples(IMediaSamples *this)

{
  return;
}

// GetNumDroppedAudioSamples @ 146bfef30

uint __thiscall IMediaSamples::GetNumDroppedAudioSamples(IMediaSamples *this,bool param_1)

{
  return 0;
}

// GetNumDroppedCaptionSamples @ 146bfef60

uint __thiscall IMediaSamples::GetNumDroppedCaptionSamples(IMediaSamples *this,bool param_1)

{
  return 0;
}

// GetNumDroppedMetadataSamples @ 146bfef90

uint __thiscall IMediaSamples::GetNumDroppedMetadataSamples(IMediaSamples *this,bool param_1)

{
  return 0;
}

// GetNumDroppedSubtitleSamples @ 146bfefc0

uint __thiscall IMediaSamples::GetNumDroppedSubtitleSamples(IMediaSamples *this,bool param_1)

{
  return 0;
}

// GetNumDroppedVideoSamples @ 146bfeff0

uint __thiscall IMediaSamples::GetNumDroppedVideoSamples(IMediaSamples *this,bool param_1)

{
  return 0;
}

// NumAudioSamples @ 146c03650

int __thiscall IMediaSamples::NumAudioSamples(IMediaSamples *this)

{
  return -1;
}

// NumCaptionSamples @ 146c03680

int __thiscall IMediaSamples::NumCaptionSamples(IMediaSamples *this)

{
  return -1;
}

// NumMetadataSamples @ 146c036b0

int __thiscall IMediaSamples::NumMetadataSamples(IMediaSamples *this)

{
  return -1;
}

// NumSubtitleSamples @ 146c036e0

int __thiscall IMediaSamples::NumSubtitleSamples(IMediaSamples *this)

{
  return -1;
}

// NumVideoSamples @ 146c03710

int __thiscall IMediaSamples::NumVideoSamples(IMediaSamples *this)

{
  return -1;
}

// PeekAudioSampleTimeRanges @ 146c044f0

bool __thiscall
IMediaSamples::PeekAudioSampleTimeRanges
          (IMediaSamples *this,TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// PeekVideoSampleTimeRanges @ 146c045d0

bool __thiscall
IMediaSamples::PeekVideoSampleTimeRanges
          (IMediaSamples *this,TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// PurgeOutdatedCaptionSamples @ 146c08530

uint __thiscall
IMediaSamples::PurgeOutdatedCaptionSamples
          (IMediaSamples *this,FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  return 0;
}

// PurgeOutdatedMetadataSamples @ 146c08560

uint __thiscall
IMediaSamples::PurgeOutdatedMetadataSamples
          (IMediaSamples *this,FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  return 0;
}

// PurgeOutdatedSubtitleSamples @ 146c09070

uint __thiscall
IMediaSamples::PurgeOutdatedSubtitleSamples
          (IMediaSamples *this,FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  return 0;
}

// PurgeOutdatedVideoSamples @ 146c090a0

uint __thiscall
IMediaSamples::PurgeOutdatedVideoSamples
          (IMediaSamples *this,FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  return 0;
}

// SetMinExpectedNextSequenceIndex @ 146c0d070

void __thiscall
IMediaSamples::SetMinExpectedNextSequenceIndex(IMediaSamples *this,TOptional<int> param_1)

{
  return;
}

// SetSampleBufferSize @ 146c0d4d0

void __thiscall IMediaSamples::SetSampleBufferSize(IMediaSamples *this,int param_1)

{
  return;
}

